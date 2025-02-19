#include <cstdio>
#include <rclcpp/rclcpp.hpp>
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/pose_stamped.hpp"


rclcpp::Node::SharedPtr ptr_node = nullptr;

rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr sub_;
rclcpp::Publisher<geometry_msgs::msg::PoseStamped>::SharedPtr pub_;

void getOdom(const nav_msgs::msg::Odometry::SharedPtr _msg)
{
    rclcpp::Time begin = ptr_node->get_clock()->now();

    RCLCPP_DEBUG(ptr_node->get_logger(),"I have received Odometry! ;-)");

    geometry_msgs::msg::PoseStamped pose_msg;
    pose_msg.header = _msg->header;
    pose_msg.pose.position.x = _msg->pose.pose.position.x;
    pose_msg.pose.position.y = _msg->pose.pose.position.y;
    pose_msg.pose.position.z = _msg->pose.pose.position.z;
    pose_msg.pose.orientation.w = _msg->pose.pose.orientation.w;
    pose_msg.pose.orientation.x = _msg->pose.pose.orientation.x;
    pose_msg.pose.orientation.y = _msg->pose.pose.orientation.y;
    pose_msg.pose.orientation.z = _msg->pose.pose.orientation.z;


    pub_->publish(pose_msg);

    rclcpp::Time end = ptr_node->get_clock()->now();
    RCLCPP_DEBUG(ptr_node->get_logger(), "begin : %ld", begin.nanoseconds());
    RCLCPP_DEBUG(ptr_node->get_logger(), "end : %ld", end.nanoseconds());
    RCLCPP_DEBUG(ptr_node->get_logger(), "duration : %ld (ns) %ld (ms)", (end.nanoseconds() - begin.nanoseconds()), ((end.nanoseconds() - begin.nanoseconds()))/1000000);
}

int main(int argc, char ** argv)
{
    (void) argc;
    (void) argv;
    rclcpp::init(argc, argv);

    ptr_node = rclcpp::Node::make_shared("odom_to_pose");
    auto sensor_qos = rclcpp::QoS(rclcpp::SensorDataQoS());
    sub_ = ptr_node->create_subscription<nav_msgs::msg::Odometry>("input_odom", sensor_qos,getOdom);
    pub_ = ptr_node->create_publisher<geometry_msgs::msg::PoseStamped>("output_pose", 1);

    rclcpp::spin(ptr_node);
    rclcpp::shutdown();
    return 0;
}
