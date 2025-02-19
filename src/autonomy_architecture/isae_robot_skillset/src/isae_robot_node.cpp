#include "isae_robot_skillset/Node.hpp"

#include <iostream>

using namespace isae_robot_skillset;

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<IsaeRobotNode>("isae_robot", "generated skillset"));
    rclcpp::shutdown();
    return 0;
}
