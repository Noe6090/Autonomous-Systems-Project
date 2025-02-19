#include "AiasLabSkillsetNode.hpp"

#include <iostream>

int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<AiasLabSkillsetManager>());
    rclcpp::shutdown();
    return 0;
}
