#include "isae_robot_skillset/NodeDebug.hpp"

namespace isae_robot_skillset
{

    IsaeRobotNodeDebug::IsaeRobotNodeDebug(const std::string node_name, const std::string info) : IsaeRobotNode(node_name, info)
    {
        
        //---------- Resource motion_status ----------
        this->declare_parameter("resource_motion_status", "Idle");
        resource_motion_status_handler_ = std::make_shared<rclcpp::ParameterEventHandler>(this);
        resource_motion_status_handle_ = resource_motion_status_handler_->add_parameter_callback("resource_motion_status",
            [this](const rclcpp::Parameter &parameter)
            {
                    this->resource_motion_status_hook_(parameter);
            });
        
        //---------- Resource battery_status ----------
        this->declare_parameter("resource_battery_status", "BatteryOk");
        resource_battery_status_handler_ = std::make_shared<rclcpp::ParameterEventHandler>(this);
        resource_battery_status_handle_ = resource_battery_status_handler_->add_parameter_callback("resource_battery_status",
            [this](const rclcpp::Parameter &parameter)
            {
                    this->resource_battery_status_hook_(parameter);
            });
        
    }

    
    void IsaeRobotNodeDebug::resource_motion_status_hook_(const rclcpp::Parameter &parameter)
    {
        auto state = parameter.as_string();
        
        if (state == "Idle")
        {
            this->resource_motion_status_->set_next(MotionStatusState::Idle);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
        }
        else if (state == "Busy")
        {
            this->resource_motion_status_->set_next(MotionStatusState::Busy);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "resource 'motion_status' state '%s' undefined", state.c_str());
        }
    }
    
    void IsaeRobotNodeDebug::resource_battery_status_hook_(const rclcpp::Parameter &parameter)
    {
        auto state = parameter.as_string();
        
        if (state == "BatteryOk")
        {
            this->resource_battery_status_->set_next(BatteryStatusState::BatteryOk);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
        }
        else if (state == "BatteryLow")
        {
            this->resource_battery_status_->set_next(BatteryStatusState::BatteryLow);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
        }
        else
        {
            RCLCPP_WARN(this->get_logger(), "resource 'battery_status' state '%s' undefined", state.c_str());
        }
    }
    
}
