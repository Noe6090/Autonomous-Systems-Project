#include "isae_robot_skillset/Node.hpp"

namespace isae_robot_skillset
{

    IsaeRobotNode::IsaeRobotNode(const std::string node_name, const std::string info)
        : Node(node_name)
        , info_(info)
        , data_pose_stamp_(0)
        , resource_motion_status_(std::make_shared<MotionStatus>())
        , resource_battery_status_(std::make_shared<BatteryStatus>())
        , skill_detect_target_state_(SkillState::Ready)
        , skill_detect_target_id_("")
        , skill_detect_target_input_(std::make_shared<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput>()) 
        , skill_move_to_state_(SkillState::Ready)
        , skill_move_to_id_("")
        , skill_move_to_input_(std::make_shared<isae_robot_skillset_interfaces::msg::SkillMoveToInput>()) 
        , skill_take_picture_state_(SkillState::Ready)
        , skill_take_picture_id_("")
        , skill_take_picture_input_(std::make_shared<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>()) 
        , skill_track_target_state_(SkillState::Ready)
        , skill_track_target_id_("")
        , skill_track_target_input_(std::make_shared<isae_robot_skillset_interfaces::msg::SkillTrackTargetInput>()) 
        {
        //-------------------- QoS --------------------
        auto qos_soft = rclcpp::QoS(1).best_effort().keep_last(1).durability_volatile();
        auto qos_hard = rclcpp::QoS(1).reliable().keep_last(1).transient_local();
        auto qos_event = rclcpp::QoS(1).reliable().keep_all().durability_volatile();
        //-------------------- Skillset --------------------
        status_sub_ = this->create_subscription<std_msgs::msg::Empty>(
            "~/isae_robot_skillset/status_request", qos_event, 
            [this](std_msgs::msg::Empty::UniquePtr msg) { 
                this->IsaeRobotNode::status_callback_(std::move(msg)); 
            });
        event_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::EventRequest>(
            "~/isae_robot_skillset/event_request", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::EventRequest::UniquePtr msg) {
                this->IsaeRobotNode::event_callback_(std::move(msg));
            });
        status_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::SkillsetStatus>(
            "~/isae_robot_skillset/status", qos_event);
        event_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::EventResponse>(
            "~/isae_robot_skillset/event_response", qos_event);
        //-------------------- Data --------------------
        //---------- Data pose ----------
        data_pose_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::DataPose>(
            "~/isae_robot_skillset/data/pose", qos_hard);
        
        data_pose_request_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::DataRequest>(
            "~/isae_robot_skillset/data/pose/request", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::DataRequest::UniquePtr msg) { 
                this->IsaeRobotNode::data_pose_request_callback_(std::move(msg)); 
            });
        data_pose_response_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::DataPoseResponse>(
            "~/isae_robot_skillset/data/pose/response", qos_event);
        
        //-------------------- Skill --------------------
        
        //---------- Skill detect_target ----------
        skill_detect_target_request_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest>(
            "~/isae_robot_skillset/skill/detect_target/request", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest::UniquePtr msg) { 
                this->IsaeRobotNode::skill_detect_target_callback_(std::move(msg)); 
            });
        skill_detect_target_response_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>(
            "~/isae_robot_skillset/skill/detect_target/response", qos_event);
        
        skill_detect_target_interrupt_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
            "~/isae_robot_skillset/skill/detect_target/interrupt", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) { 
                this->IsaeRobotNode::skill_detect_target_interrupt_callback_(std::move(msg)); 
            });
        
        //---------- Skill move_to ----------
        skill_move_to_request_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillMoveToRequest>(
            "~/isae_robot_skillset/skill/move_to/request", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillMoveToRequest::UniquePtr msg) { 
                this->IsaeRobotNode::skill_move_to_callback_(std::move(msg)); 
            });
        skill_move_to_response_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::SkillMoveToResponse>(
            "~/isae_robot_skillset/skill/move_to/response", qos_event);
        skill_move_to_progress_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::SkillMoveToProgress>(
            "~/isae_robot_skillset/skill/move_to/progress", qos_soft);
        skill_move_to_progress_timer_ = this->create_wall_timer(
            1000ms, 
            [this](){
                this->skill_move_to_progress_callback_();
            });
        skill_move_to_interrupt_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
            "~/isae_robot_skillset/skill/move_to/interrupt", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) { 
                this->IsaeRobotNode::skill_move_to_interrupt_callback_(std::move(msg)); 
            });
        
        //---------- Skill take_picture ----------
        skill_take_picture_request_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillTakePictureRequest>(
            "~/isae_robot_skillset/skill/take_picture/request", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillTakePictureRequest::UniquePtr msg) { 
                this->IsaeRobotNode::skill_take_picture_callback_(std::move(msg)); 
            });
        skill_take_picture_response_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse>(
            "~/isae_robot_skillset/skill/take_picture/response", qos_event);
        
        skill_take_picture_interrupt_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
            "~/isae_robot_skillset/skill/take_picture/interrupt", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) { 
                this->IsaeRobotNode::skill_take_picture_interrupt_callback_(std::move(msg)); 
            });
        
        //---------- Skill track_target ----------
        skill_track_target_request_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest>(
            "~/isae_robot_skillset/skill/track_target/request", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest::UniquePtr msg) { 
                this->IsaeRobotNode::skill_track_target_callback_(std::move(msg)); 
            });
        skill_track_target_response_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>(
            "~/isae_robot_skillset/skill/track_target/response", qos_event);
        skill_track_target_progress_pub_ = this->create_publisher<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress>(
            "~/isae_robot_skillset/skill/track_target/progress", qos_soft);
        skill_track_target_progress_timer_ = this->create_wall_timer(
            1000ms, 
            [this](){
                this->skill_track_target_progress_callback_();
            });
        skill_track_target_interrupt_sub_ = this->create_subscription<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
            "~/isae_robot_skillset/skill/track_target/interrupt", qos_event, 
            [this](isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) { 
                this->IsaeRobotNode::skill_track_target_interrupt_callback_(std::move(msg)); 
            });
        
    }

    isae_robot_skillset_interfaces::msg::SkillsetStatus IsaeRobotNode::status_() const {
        auto message = isae_robot_skillset_interfaces::msg::SkillsetStatus();
        // Stamp
        message.stamp = rclcpp::Node::now();
        // resources
        auto rs = isae_robot_skillset_interfaces::msg::ResourceState();
        
        rs = isae_robot_skillset_interfaces::msg::ResourceState();
        rs.name = "motion_status";
        rs.state = to_string(resource_motion_status_->current());
        message.resources.push_back(rs);
        
        rs = isae_robot_skillset_interfaces::msg::ResourceState();
        rs.name = "battery_status";
        rs.state = to_string(resource_battery_status_->current());
        message.resources.push_back(rs);
        
        // skills
        
        message.skill_detect_target = isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus();
        message.skill_detect_target.name = "detect_target";
        message.skill_detect_target.id = skill_detect_target_id_;
        switch (skill_detect_target_state_)
        {
        case SkillState::Ready:
            message.skill_detect_target.state = isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::READY;
            break;        
        case SkillState::Running:
            message.skill_detect_target.state = isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::RUNNING;
            break;        
        case SkillState::Interrupting:
            message.skill_detect_target.state = isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::INTERRUPTING;
            break;        
        default:
            break;
        }
        message.skill_detect_target.input = *skill_detect_target_input_;
        
        message.skill_move_to = isae_robot_skillset_interfaces::msg::SkillMoveToStatus();
        message.skill_move_to.name = "move_to";
        message.skill_move_to.id = skill_move_to_id_;
        switch (skill_move_to_state_)
        {
        case SkillState::Ready:
            message.skill_move_to.state = isae_robot_skillset_interfaces::msg::SkillMoveToStatus::READY;
            break;        
        case SkillState::Running:
            message.skill_move_to.state = isae_robot_skillset_interfaces::msg::SkillMoveToStatus::RUNNING;
            break;        
        case SkillState::Interrupting:
            message.skill_move_to.state = isae_robot_skillset_interfaces::msg::SkillMoveToStatus::INTERRUPTING;
            break;        
        default:
            break;
        }
        message.skill_move_to.input = *skill_move_to_input_;
        
        message.skill_take_picture = isae_robot_skillset_interfaces::msg::SkillTakePictureStatus();
        message.skill_take_picture.name = "take_picture";
        message.skill_take_picture.id = skill_take_picture_id_;
        switch (skill_take_picture_state_)
        {
        case SkillState::Ready:
            message.skill_take_picture.state = isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::READY;
            break;        
        case SkillState::Running:
            message.skill_take_picture.state = isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::RUNNING;
            break;        
        case SkillState::Interrupting:
            message.skill_take_picture.state = isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::INTERRUPTING;
            break;        
        default:
            break;
        }
        message.skill_take_picture.input = *skill_take_picture_input_;
        
        message.skill_track_target = isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus();
        message.skill_track_target.name = "track_target";
        message.skill_track_target.id = skill_track_target_id_;
        switch (skill_track_target_state_)
        {
        case SkillState::Ready:
            message.skill_track_target.state = isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::READY;
            break;        
        case SkillState::Running:
            message.skill_track_target.state = isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::RUNNING;
            break;        
        case SkillState::Interrupting:
            message.skill_track_target.state = isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::INTERRUPTING;
            break;        
        default:
            break;
        }
        message.skill_track_target.input = *skill_track_target_input_;
        
        // Info
        message.info = info_;
        return message;
    }

    void IsaeRobotNode::status_callback_(const std_msgs::msg::Empty::UniquePtr msg)
    {
        mutex_.lock();
        (void)msg;
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' status request");
        auto message = status_();
        status_pub_->publish(message);
        mutex_.unlock();
    }

    //-------------------------------------------------- Resources --------------------------------------------------
    
    std::string IsaeRobotNode::get_motion_status_state()
    {
        mutex_.lock();
        std::string state = to_string(resource_motion_status_->current());
        mutex_.unlock();
        return state;
    }
    std::string IsaeRobotNode::get_motion_status_state_hook()
    {
        std::string state = to_string(resource_motion_status_->current());
        return state;
    }
    
    std::string IsaeRobotNode::get_battery_status_state()
    {
        mutex_.lock();
        std::string state = to_string(resource_battery_status_->current());
        mutex_.unlock();
        return state;
    }
    std::string IsaeRobotNode::get_battery_status_state_hook()
    {
        std::string state = to_string(resource_battery_status_->current());
        return state;
    }
    

    //-------------------------------------------------- Skillset Status --------------------------------------------------
    isae_robot_skillset_interfaces::msg::SkillsetStatus IsaeRobotNode::get_skillset_status()
    {
        mutex_.lock();
        auto status = this->status_();
        mutex_.unlock();
        return status;
    }
}
