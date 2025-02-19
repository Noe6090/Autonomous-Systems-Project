#include "Node.hpp"
#include "rclcpp_action/rclcpp_action.hpp"
#include <nav2_msgs/action/navigate_to_pose.hpp>
#include <geometry_msgs/msg/pose_stamped.hpp>
#include <topic_tools_interfaces/srv/mux_select.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <image_transport/image_transport.hpp>
#include <opencv2/opencv.hpp>

using namespace std::chrono_literals;

class AiasLabSkillsetManager : public AiasLabSkillsetNode
{
public:
    AiasLabSkillsetManager();

    bool skill_move_to_validate_hook();
    void skill_move_to_on_start();
    void skill_move_to_invariant_is_busy_hook();
    void skill_move_to_invariant_is_battery_high_hook();
    isae_robot_skillset_interfaces::msg::SkillMoveToProgress skill_move_to_progress_hook();
    void skill_move_to_on_interrupting();

    void skill_detect_target_start_hook();
    void skill_detect_target_interrupt_hook();
    void skill_take_picture_on_start();
    
    
    void skill_track_target_on_start();    
    isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress skill_track_target_progress_hook();    
    void skill_track_target_invariant_is_busy_hook(); 
    void skill_track_target_invariant_is_battery_high_hook(); 
    void skill_track_target_on_interrupting();
    void skill_track_target_interrupt_hook();

private:
    // data pose
    rclcpp::Subscription<geometry_msgs::msg::PoseStamped>::SharedPtr pose_sub_;

    // mux management
    rclcpp::Client<topic_tools_interfaces::srv::MuxSelect>::SharedPtr mux_client_;
    bool select_cmd_(std::string topic);
    bool select_move_to();
    bool select_tracking();

    // Skill timer
    rclcpp::TimerBase::SharedPtr periodic_timer_;
    void start_timer(std::function<void()> callback);
    void stop_timer();

    // skill move_to
    rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SharedPtr move_to_client_;
    using MoveToGoalHandle = rclcpp_action::ClientGoalHandle<nav2_msgs::action::NavigateToPose>;
    void move_to_response_callback_(const MoveToGoalHandle::SharedPtr & goal_handle);
    void move_to_feedback_callback_(MoveToGoalHandle::SharedPtr, const nav2_msgs::action::NavigateToPose::Feedback::ConstSharedPtr feedback);
    void move_to_result_callback_(const MoveToGoalHandle::WrappedResult & result);
    void move_to_cancel_();
    double move_to_distance_remaining_;
    MoveToGoalHandle::SharedPtr move_to_goal_handle_;

    // skill detect
    rclcpp::Time detect_start_time_;
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr detect_blue_sub_;
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr detect_red_sub_;
    void detect_callback_(const geometry_msgs::msg::Point& p, std::string color);

    // skill take picture
    rclcpp::Node::SharedPtr node_handle_;
    image_transport::ImageTransport image_transport_;
    image_transport::Subscriber image_sub_;
    cv::Mat _ipl_img;
    bool save_image(std::string filename);
    
    // skill track target 
    //float timeout_;
    rclcpp::Time tracking_start_time_;
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr point_sub_;
    geometry_msgs::msg::Point point_;

    //void skill_track_target_callback_(const geometry_msgs::msg::Point& p);
    void skill_track_target_callback_();
    void track_target_cancel_();
};

