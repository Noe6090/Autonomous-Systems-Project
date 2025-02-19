#include "isae_robot_skillset/Node.hpp"

namespace isae_robot_skillset
{

    void IsaeRobotNode::event_callback_(const isae_robot_skillset_interfaces::msg::EventRequest::UniquePtr msg)
    {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' event '%s' request", msg->name.c_str());
        auto message = isae_robot_skillset_interfaces::msg::EventResponse();
        message.id = msg->id;
        message.response = isae_robot_skillset_interfaces::msg::EventResponse::UNDEFINED;
        
        if (msg->name == "estop") {
            message.response = event_estop_();
        }
        
        else if (msg->name == "battery_to_low") {
            message.response = event_battery_to_low_();
        }
        
        else if (msg->name == "battery_to_ok") {
            message.response = event_battery_to_ok_();
        }
        
        event_pub_->publish(message);
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
    }

    
    //-------------------------------------------------- estop --------------------------------------------------

    int IsaeRobotNode::event_estop_()
    {
        // guard
        
        
        // check effects
        if (!(
             resource_motion_status_->check_next(MotionStatusState::Idle)
        ))
        {
            return isae_robot_skillset_interfaces::msg::EventResponse::EFFECT_FAILURE;
        }
        
        // hook
        event_estop_hook();
        // set effects
        resource_motion_status_->set_next(MotionStatusState::Idle);
        
        skills_invariants_();
        return isae_robot_skillset_interfaces::msg::EventResponse::SUCCESS;
    }

    void IsaeRobotNode::event_estop_hook()
    {
    }

    void IsaeRobotNode::event_estop()
    {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'Anafi' event 'estop'");
        auto message = isae_robot_skillset_interfaces::msg::EventResponse();
        message.id = info_;
        message.response = event_estop_();
        event_pub_->publish(message);
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
    }

    
    //-------------------------------------------------- battery_to_low --------------------------------------------------

    int IsaeRobotNode::event_battery_to_low_()
    {
        // guard
        
        if (!((resource_battery_status_->current() == BatteryStatusState::BatteryOk)))
        {
            return isae_robot_skillset_interfaces::msg::EventResponse::GUARD_FAILURE;
        }
        
        
        // check effects
        if (!(
             resource_battery_status_->check_next(BatteryStatusState::BatteryLow)
        ))
        {
            return isae_robot_skillset_interfaces::msg::EventResponse::EFFECT_FAILURE;
        }
        
        // hook
        event_battery_to_low_hook();
        // set effects
        resource_battery_status_->set_next(BatteryStatusState::BatteryLow);
        
        skills_invariants_();
        return isae_robot_skillset_interfaces::msg::EventResponse::SUCCESS;
    }

    void IsaeRobotNode::event_battery_to_low_hook()
    {
    }

    void IsaeRobotNode::event_battery_to_low()
    {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'Anafi' event 'battery_to_low'");
        auto message = isae_robot_skillset_interfaces::msg::EventResponse();
        message.id = info_;
        message.response = event_battery_to_low_();
        event_pub_->publish(message);
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
    }

    
    //-------------------------------------------------- battery_to_ok --------------------------------------------------

    int IsaeRobotNode::event_battery_to_ok_()
    {
        // guard
        
        if (!((resource_battery_status_->current() == BatteryStatusState::BatteryLow)))
        {
            return isae_robot_skillset_interfaces::msg::EventResponse::GUARD_FAILURE;
        }
        
        
        // check effects
        if (!(
             resource_battery_status_->check_next(BatteryStatusState::BatteryOk)
        ))
        {
            return isae_robot_skillset_interfaces::msg::EventResponse::EFFECT_FAILURE;
        }
        
        // hook
        event_battery_to_ok_hook();
        // set effects
        resource_battery_status_->set_next(BatteryStatusState::BatteryOk);
        
        skills_invariants_();
        return isae_robot_skillset_interfaces::msg::EventResponse::SUCCESS;
    }

    void IsaeRobotNode::event_battery_to_ok_hook()
    {
    }

    void IsaeRobotNode::event_battery_to_ok()
    {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'Anafi' event 'battery_to_ok'");
        auto message = isae_robot_skillset_interfaces::msg::EventResponse();
        message.id = info_;
        message.response = event_battery_to_ok_();
        event_pub_->publish(message);
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
    }

    
}
