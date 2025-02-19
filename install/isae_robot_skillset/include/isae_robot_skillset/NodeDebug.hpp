#ifndef ISAE_ROBOT_NODE_DEBUG_HPP
#define ISAE_ROBOT_NODE_DEBUG_HPP

#include "Node.hpp"

namespace isae_robot_skillset
{
    class IsaeRobotNodeDebug: public IsaeRobotNode
    {
    public:
        IsaeRobotNodeDebug(const std::string node_name, const std::string info);
        virtual ~IsaeRobotNodeDebug() {}

    private:
        
        void resource_motion_status_hook_(const rclcpp::Parameter &parameter);
        std::shared_ptr<rclcpp::ParameterEventHandler> resource_motion_status_handler_;
        std::shared_ptr<rclcpp::ParameterCallbackHandle> resource_motion_status_handle_;
        
        void resource_battery_status_hook_(const rclcpp::Parameter &parameter);
        std::shared_ptr<rclcpp::ParameterEventHandler> resource_battery_status_handler_;
        std::shared_ptr<rclcpp::ParameterCallbackHandle> resource_battery_status_handle_;
        
    };
}
#endif
