#pragma once


#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/empty.hpp>
#include <isae_robot_skillset_interfaces/msg/skillset_status.hpp>
#include <isae_robot_skillset_interfaces/msg/event_request.hpp>
#include <isae_robot_skillset_interfaces/msg/event_response.hpp>
#include <isae_robot_skillset_interfaces/msg/data_request.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_interrupt.hpp>

#include <isae_robot_skillset_interfaces/msg/data_pose.hpp>
#include <isae_robot_skillset_interfaces/msg/data_pose_response.hpp>


#include <isae_robot_skillset_interfaces/msg/skill_detect_target_status.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_detect_target_input.hpp>

#include <isae_robot_skillset_interfaces/msg/skill_detect_target_output.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_detect_target_request.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_detect_target_response.hpp>

#include <isae_robot_skillset_interfaces/msg/skill_move_to_status.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_move_to_input.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_move_to_progress.hpp>

#include <isae_robot_skillset_interfaces/msg/skill_move_to_request.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_move_to_response.hpp>

#include <isae_robot_skillset_interfaces/msg/skill_take_picture_status.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_take_picture_input.hpp>


#include <isae_robot_skillset_interfaces/msg/skill_take_picture_request.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_take_picture_response.hpp>

#include <isae_robot_skillset_interfaces/msg/skill_track_target_status.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_track_target_input.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_track_target_progress.hpp>

#include <isae_robot_skillset_interfaces/msg/skill_track_target_request.hpp>
#include <isae_robot_skillset_interfaces/msg/skill_track_target_response.hpp>


class IsaeRobotSkillsetClient
{
  public:
    IsaeRobotSkillsetClient(const std::string &name, rclcpp::Node::SharedPtr node);
    inline isae_robot_skillset_interfaces::msg::SkillsetStatus get_status() { return status_; };

    //----- skills
    
    std::string start_detect_target();
    void interrupt_detect_target(std::string id);
    void interrupt_detect_target();
    
    std::string start_move_to();
    void interrupt_move_to(std::string id);
    void interrupt_move_to();
    
    std::string start_take_picture();
    void interrupt_take_picture(std::string id);
    void interrupt_take_picture();
    
    std::string start_track_target();
    void interrupt_track_target(std::string id);
    void interrupt_track_target();
    
    //----- data getters
    
    inline isae_robot_skillset_interfaces::msg::DataPoseResponse get_data_pose() const { return data_pose_; };
    void create_data_pose_subscription();
    
    //----- resource getters
    
    inline std::string get_resource_motion_status() const { return resource_state_.at("motion_status"); };
    
    inline std::string get_resource_battery_status() const { return resource_state_.at("battery_status"); };
    

  protected:
    std::string name_;
    rclcpp::Node::SharedPtr node_;

    //----- status
    isae_robot_skillset_interfaces::msg::SkillsetStatus status_;
    void request_status();
    double time_since_status();
    //----- events
    std::map<std::string, isae_robot_skillset_interfaces::msg::EventResponse> events_;
    std::map<std::string, std::string> events_ids_;
    std::map<std::string, rclcpp::Time> events_stamps_;
    std::string send_event(std::string event);
    double time_since_event(std::string event) const;
    //----- data
    
    isae_robot_skillset_interfaces::msg::DataPoseResponse data_pose_;
    std::string data_pose_request();
    void destroy_data_pose_subscription();
    
    //----- resources
    std::map<std::string, std::string> resource_state_;
    //----- skills
    
    isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus detect_target_status_;
    isae_robot_skillset_interfaces::msg::SkillDetectTargetInput detect_target_input_;
    
    isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput detect_target_output_;
    isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse detect_target_result_;
    
    isae_robot_skillset_interfaces::msg::SkillMoveToStatus move_to_status_;
    isae_robot_skillset_interfaces::msg::SkillMoveToInput move_to_input_;
    isae_robot_skillset_interfaces::msg::SkillMoveToProgress move_to_progress_;
    
    isae_robot_skillset_interfaces::msg::SkillMoveToResponse move_to_result_;
    
    isae_robot_skillset_interfaces::msg::SkillTakePictureStatus take_picture_status_;
    isae_robot_skillset_interfaces::msg::SkillTakePictureInput take_picture_input_;
    
    
    isae_robot_skillset_interfaces::msg::SkillTakePictureResponse take_picture_result_;
    
    isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus track_target_status_;
    isae_robot_skillset_interfaces::msg::SkillTrackTargetInput track_target_input_;
    isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress track_target_progress_;
    
    isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse track_target_result_;
    

  private:
    rclcpp::QoS qos_best_;
    rclcpp::QoS qos_reliable_;

    std::string generate_id() const;

    //----- status
    rclcpp::Publisher<std_msgs::msg::Empty>::SharedPtr status_pub_;
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillsetStatus>::SharedPtr status_sub_;
    void status_callback_(const isae_robot_skillset_interfaces::msg::SkillsetStatus::SharedPtr msg);
    //----- events
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::EventRequest>::SharedPtr event_pub_;
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::EventResponse>::SharedPtr event_sub_;
    void event_callback_(const isae_robot_skillset_interfaces::msg::EventResponse::SharedPtr msg);
    //----- data
    
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::DataPose>::SharedPtr data_pose_sub_;
    void data_pose_callback_(const isae_robot_skillset_interfaces::msg::DataPose::SharedPtr msg);
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::DataRequest>::SharedPtr data_pose_pub_;
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::DataPoseResponse>::SharedPtr data_pose_response_;
    void data_pose_response_callback_(const isae_robot_skillset_interfaces::msg::DataPoseResponse::SharedPtr msg);
    
    //----- skills
    
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest>::SharedPtr detect_target_request_pub_;
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr detect_target_interrupt_pub_;
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>::SharedPtr detect_target_response_sub_;
    void detect_target_response_callback(const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SharedPtr msg);
    
    
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillMoveToRequest>::SharedPtr move_to_request_pub_;
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr move_to_interrupt_pub_;
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillMoveToResponse>::SharedPtr move_to_response_sub_;
    void move_to_response_callback(const isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SharedPtr msg);
    
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillMoveToProgress>::SharedPtr move_to_progress_sub_;
    void move_to_progress_callback(const isae_robot_skillset_interfaces::msg::SkillMoveToProgress::SharedPtr msg);
    
    
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillTakePictureRequest>::SharedPtr take_picture_request_pub_;
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr take_picture_interrupt_pub_;
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse>::SharedPtr take_picture_response_sub_;
    void take_picture_response_callback(const isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SharedPtr msg);
    
    
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest>::SharedPtr track_target_request_pub_;
    rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr track_target_interrupt_pub_;
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>::SharedPtr track_target_response_sub_;
    void track_target_response_callback(const isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SharedPtr msg);
    
    rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress>::SharedPtr track_target_progress_sub_;
    void track_target_progress_callback(const isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress::SharedPtr msg);
    
    
};
