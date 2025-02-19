#pragma once

#include "client.hpp"


class IsaeRobotSkillsetWidget: public IsaeRobotSkillsetClient
{
  public:
    IsaeRobotSkillsetWidget(const std::string &name, rclcpp::Node::SharedPtr node,
      bool display_data = true, bool display_resources = true, bool display_events = true);

    void update();
    bool update_window();
    void process();
    
    void display_start_detect_target();
    inline void set_detect_target_inputs(isae_robot_skillset_interfaces::msg::SkillDetectTargetInput input) { detect_target_input_ = input; };
    inline void set_detect_target_input_timeout(std_msgs::msg::Float64 input) { detect_target_input_.timeout = input; };
    
    
    
    void display_start_move_to();
    inline void set_move_to_inputs(isae_robot_skillset_interfaces::msg::SkillMoveToInput input) { move_to_input_ = input; };
    inline void set_move_to_input_target(geometry_msgs::msg::Pose2D input) { move_to_input_.target = input; };
    
    
    
    void display_start_take_picture();
    inline void set_take_picture_inputs(isae_robot_skillset_interfaces::msg::SkillTakePictureInput input) { take_picture_input_ = input; };
    inline void set_take_picture_input_object_name(std_msgs::msg::String input) { take_picture_input_.object_name = input; };
    
    
    
    void display_start_track_target();
    inline void set_track_target_inputs(isae_robot_skillset_interfaces::msg::SkillTrackTargetInput input) { track_target_input_ = input; };
    inline void set_track_target_input_timeout(std_msgs::msg::Float64 input) { track_target_input_.timeout = input; };
    
    
    
  private:
    bool display_data_;
    bool display_resources_;
    bool display_events_;

    
    void event_row_estop();
    void event_button_estop();
    
    void event_row_battery_to_low();
    void event_button_battery_to_low();
    
    void event_row_battery_to_ok();
    void event_button_battery_to_ok();
    
    double event_response_timeout_;

    void skill_response_text(int result_code); 
    void skill_state_button(std::string skill, unsigned int state);
    
    bool subscribe_pose_;
    
    
    bool active_detect_target_;
    
    bool active_move_to_;
    
    bool active_take_picture_;
    
    bool active_track_target_;
    
};
