#ifndef ISAE_ROBOT_NODE_HPP
#define ISAE_ROBOT_NODE_HPP

#include "Resource.hpp"

#include <string>
#include <memory>
#include <mutex>
#include <stdint.h>
#include <tuple>

#include "rclcpp/rclcpp.hpp"
#include "rclcpp/time.hpp"
#include "rclcpp/duration.hpp"
#include "std_msgs/msg/empty.hpp"
#include "std_msgs/msg/string.hpp"

#include "isae_robot_skillset_interfaces/msg/skillset_status.hpp"
#include "isae_robot_skillset_interfaces/msg/resource_state.hpp"
#include "isae_robot_skillset_interfaces/msg/data_request.hpp"
#include "isae_robot_skillset_interfaces/msg/event_request.hpp"
#include "isae_robot_skillset_interfaces/msg/event_response.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_interrupt.hpp"
#include "isae_robot_skillset_interfaces/msg/data_pose.hpp"
#include "isae_robot_skillset_interfaces/msg/data_pose_response.hpp"


#include "isae_robot_skillset_interfaces/msg/skill_detect_target_input.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_detect_target_output.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_detect_target_request.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_detect_target_response.hpp"


#include "isae_robot_skillset_interfaces/msg/skill_move_to_input.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_move_to_request.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_move_to_response.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_move_to_progress.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_move_to_status.hpp"

#include "isae_robot_skillset_interfaces/msg/skill_take_picture_input.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_take_picture_request.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_take_picture_response.hpp"


#include "isae_robot_skillset_interfaces/msg/skill_track_target_input.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_track_target_request.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_track_target_response.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_track_target_progress.hpp"
#include "isae_robot_skillset_interfaces/msg/skill_track_target_status.hpp"


using namespace std::chrono_literals;

namespace isae_robot_skillset
{

    enum class SkillState
    {
        Ready,
        Running,
        Interrupting
    };
    
    //-------------------- isae_robot --------------------

    class IsaeRobotNodeDebug;

    class IsaeRobotNode : public rclcpp::Node
    {
        friend class IsaeRobotNodeDebug;

    public:
        IsaeRobotNode(const std::string node_name, const std::string info);
        virtual ~IsaeRobotNode() {}

        std::string info() const { return info_; }

    protected:
        //-------------------- Data --------------------
        //----- pose -----
        isae_robot_skillset_interfaces::msg::DataPose get_data_pose();
        void set_data_pose(geometry_msgs::msg::Pose2D data);
        isae_robot_skillset_interfaces::msg::DataPose get_data_pose_hook();
        void set_data_pose_hook(geometry_msgs::msg::Pose2D data);
        
        //-------------------- Resource --------------------
        std::string get_motion_status_state();
        std::string get_motion_status_state_hook();
        std::string get_battery_status_state();
        std::string get_battery_status_state_hook();
        
        //-------------------- Status --------------------
        isae_robot_skillset_interfaces::msg::SkillsetStatus get_skillset_status();
        //-------------------- Event Hook --------------------
        virtual void event_estop_hook();
        void event_estop();
        virtual void event_battery_to_low_hook();
        void event_battery_to_low();
        virtual void event_battery_to_ok_hook();
        void event_battery_to_ok();
        
        //-------------------- Skill detect_target --------------------
        const isae_robot_skillset_interfaces::msg::SkillDetectTargetInput::SharedPtr skill_detect_target_input() const; 
        inline SkillState skill_detect_target_state() const { return skill_detect_target_state_; }
        virtual bool skill_detect_target_validate_hook();
        virtual void skill_detect_target_start_hook();
        virtual void skill_detect_target_on_start();
        virtual void skill_detect_target_interrupt_hook();
        bool skill_detect_target_success_target_found(isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput output);
        bool skill_detect_target_failure_no_target();
        
        //-------------------- Skill move_to --------------------
        const isae_robot_skillset_interfaces::msg::SkillMoveToInput::SharedPtr skill_move_to_input() const; 
        inline SkillState skill_move_to_state() const { return skill_move_to_state_; }
        virtual bool skill_move_to_validate_hook();
        virtual void skill_move_to_start_hook();
        virtual void skill_move_to_on_start();
        virtual void skill_move_to_invariant_is_busy_hook();
        virtual void skill_move_to_invariant_is_battery_high_hook();
        virtual isae_robot_skillset_interfaces::msg::SkillMoveToProgress skill_move_to_progress_hook();
        inline std::chrono::milliseconds skill_move_to_progress_period() const { return 1000ms; }
        virtual void skill_move_to_interrupt_hook();
        virtual void skill_move_to_on_interrupting();
        bool skill_move_to_interrupted();
        bool skill_move_to_success_reached();
        bool skill_move_to_failure_couldnot_reach();
        
        //-------------------- Skill take_picture --------------------
        const isae_robot_skillset_interfaces::msg::SkillTakePictureInput::SharedPtr skill_take_picture_input() const; 
        inline SkillState skill_take_picture_state() const { return skill_take_picture_state_; }
        virtual bool skill_take_picture_validate_hook();
        virtual void skill_take_picture_start_hook();
        virtual void skill_take_picture_on_start();
        virtual void skill_take_picture_interrupt_hook();
        bool skill_take_picture_success_image_saved();
        bool skill_take_picture_failure_error_saving();
        
        //-------------------- Skill track_target --------------------
        const isae_robot_skillset_interfaces::msg::SkillTrackTargetInput::SharedPtr skill_track_target_input() const; 
        inline SkillState skill_track_target_state() const { return skill_track_target_state_; }
        virtual bool skill_track_target_validate_hook();
        virtual void skill_track_target_start_hook();
        virtual void skill_track_target_on_start();
        virtual void skill_track_target_invariant_is_busy_hook();
        virtual void skill_track_target_invariant_is_battery_high_hook();
        virtual isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress skill_track_target_progress_hook();
        inline std::chrono::milliseconds skill_track_target_progress_period() const { return 1000ms; }
        virtual void skill_track_target_interrupt_hook();
        virtual void skill_track_target_on_interrupting();
        bool skill_track_target_interrupted();
        bool skill_track_target_failure_error_tracking();
        
    private:
        //-------------------- Skillset --------------------
        isae_robot_skillset_interfaces::msg::SkillsetStatus status_() const;
        //-------------------- Event --------------------
        int event_estop_();
        int event_battery_to_low_();
        int event_battery_to_ok_();
        void skills_invariants_();
        //-------------------- Skill --------------------
        isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse skill_detect_target_response_initialize_() const;
        isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse skill_detect_target_preconditions_();
        isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse skill_detect_target_start_();
        isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse skill_detect_target_invariants_();
        isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse skill_detect_target_all_invariants_();
        void skill_detect_target_interrupted_();isae_robot_skillset_interfaces::msg::SkillMoveToResponse skill_move_to_response_initialize_() const;
        isae_robot_skillset_interfaces::msg::SkillMoveToResponse skill_move_to_preconditions_();
        isae_robot_skillset_interfaces::msg::SkillMoveToResponse skill_move_to_start_();
        isae_robot_skillset_interfaces::msg::SkillMoveToResponse skill_move_to_invariants_();
        isae_robot_skillset_interfaces::msg::SkillMoveToResponse skill_move_to_all_invariants_();
        void skill_move_to_interrupted_();isae_robot_skillset_interfaces::msg::SkillTakePictureResponse skill_take_picture_response_initialize_() const;
        isae_robot_skillset_interfaces::msg::SkillTakePictureResponse skill_take_picture_preconditions_();
        isae_robot_skillset_interfaces::msg::SkillTakePictureResponse skill_take_picture_start_();
        isae_robot_skillset_interfaces::msg::SkillTakePictureResponse skill_take_picture_invariants_();
        isae_robot_skillset_interfaces::msg::SkillTakePictureResponse skill_take_picture_all_invariants_();
        void skill_take_picture_interrupted_();isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse skill_track_target_response_initialize_() const;
        isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse skill_track_target_preconditions_();
        isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse skill_track_target_start_();
        isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse skill_track_target_invariants_();
        isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse skill_track_target_all_invariants_();
        void skill_track_target_interrupted_();
        //---------- Callback ----------
        void status_callback_(const std_msgs::msg::Empty::UniquePtr msg);
        // void data_callback_(const std_msgs::msg::String::UniquePtr msg);
        void event_callback_(const isae_robot_skillset_interfaces::msg::EventRequest::UniquePtr msg);
        //---------- pose ----------
        
        void data_pose_request_callback_(const isae_robot_skillset_interfaces::msg::DataRequest::UniquePtr msg);
        
        //---------- detect_target ----------
        void skill_detect_target_callback_(const isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest::UniquePtr msg);
        void skill_detect_target_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg);
        //---------- move_to ----------
        void skill_move_to_callback_(const isae_robot_skillset_interfaces::msg::SkillMoveToRequest::UniquePtr msg);void skill_move_to_progress_callback_();
        void skill_move_to_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg);
        //---------- take_picture ----------
        void skill_take_picture_callback_(const isae_robot_skillset_interfaces::msg::SkillTakePictureRequest::UniquePtr msg);
        void skill_take_picture_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg);
        //---------- track_target ----------
        void skill_track_target_callback_(const isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest::UniquePtr msg);void skill_track_target_progress_callback_();
        void skill_track_target_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg);

        std::mutex mutex_;
        std::string info_;

        //---------- Data ----------
        rclcpp::Time data_pose_stamp_;
        geometry_msgs::msg::Pose2D data_pose_;
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::DataPose>::SharedPtr data_pose_pub_;
        
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::DataRequest>::SharedPtr data_pose_request_sub_;
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::DataPoseResponse>::SharedPtr data_pose_response_pub_;
        
        //---------- Resource ----------
        std::shared_ptr<MotionStatus> resource_motion_status_;
        std::shared_ptr<BatteryStatus> resource_battery_status_;
        
        //---------- Topics ----------
        rclcpp::Subscription<std_msgs::msg::Empty>::SharedPtr status_sub_;
        // rclcpp::Subscription<std_msgs::msg::String>::SharedPtr data_sub_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::EventRequest>::SharedPtr event_sub_;
        //
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillsetStatus>::SharedPtr status_pub_;
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::EventResponse>::SharedPtr event_pub_;
        
        //---------- detect_target ----------
        SkillState skill_detect_target_state_;
        std::string skill_detect_target_id_;
        isae_robot_skillset_interfaces::msg::SkillDetectTargetInput::SharedPtr skill_detect_target_input_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest>::SharedPtr skill_detect_target_request_sub_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr skill_detect_target_interrupt_sub_;
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>::SharedPtr skill_detect_target_response_pub_;
        //---------- move_to ----------
        SkillState skill_move_to_state_;
        std::string skill_move_to_id_;
        isae_robot_skillset_interfaces::msg::SkillMoveToInput::SharedPtr skill_move_to_input_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillMoveToRequest>::SharedPtr skill_move_to_request_sub_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr skill_move_to_interrupt_sub_;
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillMoveToResponse>::SharedPtr skill_move_to_response_pub_;rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillMoveToProgress>::SharedPtr skill_move_to_progress_pub_;
        rclcpp::TimerBase::SharedPtr skill_move_to_progress_timer_;
        //---------- take_picture ----------
        SkillState skill_take_picture_state_;
        std::string skill_take_picture_id_;
        isae_robot_skillset_interfaces::msg::SkillTakePictureInput::SharedPtr skill_take_picture_input_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillTakePictureRequest>::SharedPtr skill_take_picture_request_sub_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr skill_take_picture_interrupt_sub_;
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse>::SharedPtr skill_take_picture_response_pub_;
        //---------- track_target ----------
        SkillState skill_track_target_state_;
        std::string skill_track_target_id_;
        isae_robot_skillset_interfaces::msg::SkillTrackTargetInput::SharedPtr skill_track_target_input_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest>::SharedPtr skill_track_target_request_sub_;
        rclcpp::Subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>::SharedPtr skill_track_target_interrupt_sub_;
        rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>::SharedPtr skill_track_target_response_pub_;rclcpp::Publisher<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress>::SharedPtr skill_track_target_progress_pub_;
        rclcpp::TimerBase::SharedPtr skill_track_target_progress_timer_;
    };
}
#endif
