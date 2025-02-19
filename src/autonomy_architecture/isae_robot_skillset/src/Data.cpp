#include "isae_robot_skillset/Node.hpp"

namespace isae_robot_skillset
{
    
    //-------------------------------------------------- pose --------------------------------------------------

    isae_robot_skillset_interfaces::msg::DataPose IsaeRobotNode::get_data_pose()
    {
        isae_robot_skillset_interfaces::msg::DataPose message;
        mutex_.lock();
        message.stamp = data_pose_stamp_;
        message.value = data_pose_;
        mutex_.unlock();
        return message;
    }

    void IsaeRobotNode::set_data_pose(geometry_msgs::msg::Pose2D data)
    {
        mutex_.lock();
        // Data
        data_pose_ = data;
        data_pose_stamp_ = rclcpp::Node::now();
        // Message
        isae_robot_skillset_interfaces::msg::DataPose message;
        message.stamp = data_pose_stamp_;
        message.value = data_pose_;
        data_pose_pub_->publish(message);
        mutex_.unlock();
    }

    isae_robot_skillset_interfaces::msg::DataPose IsaeRobotNode::get_data_pose_hook()
    {
        isae_robot_skillset_interfaces::msg::DataPose message;
        message.stamp = data_pose_stamp_;
        message.value = data_pose_;
        return message;
    }

    void IsaeRobotNode::set_data_pose_hook(geometry_msgs::msg::Pose2D data)
    {
        // Data
        data_pose_ = data;
        data_pose_stamp_ = rclcpp::Node::now();
        // Message
        isae_robot_skillset_interfaces::msg::DataPose message;
        message.stamp = data_pose_stamp_;
        message.value = data_pose_;
        data_pose_pub_->publish(message);
    }

    

    void IsaeRobotNode::data_pose_request_callback_(const isae_robot_skillset_interfaces::msg::DataRequest::UniquePtr msg)
    {
        isae_robot_skillset_interfaces::msg::DataPoseResponse message;
        message.id = msg->id;
        mutex_.lock();
        if (data_pose_stamp_.nanoseconds() > 0) {
            message.has_data = true;
            message.stamp = data_pose_stamp_;
            message.value = data_pose_;
        }
        else {
            message.has_data = false;
            message.stamp = data_pose_stamp_;
        }
        mutex_.unlock();
        data_pose_response_pub_->publish(message);
    }

    
}
