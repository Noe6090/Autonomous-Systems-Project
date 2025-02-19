#include "isae_robot_skillset_gui_widgets/widget.hpp"

#include <gui_tools/gui_tools.h>

#include <sstream>

IsaeRobotSkillsetWidget::IsaeRobotSkillsetWidget(const std::string &name, rclcpp::Node::SharedPtr node,
      bool display_data, bool display_resources, bool display_events)
    : IsaeRobotSkillsetClient(name, node)
    , display_data_(display_data)
    , display_resources_(display_resources)
    , display_events_(display_events)
    , event_response_timeout_(3.0)
    , subscribe_pose_(false)
    , active_detect_target_(false)
    , active_move_to_(false)
    , active_take_picture_(false)
    , active_track_target_(false)
{
    
        
        	try {
            node_->declare_parameter("isae_robot.detect_target.timeout.data", 0.0); 
        } catch (rclcpp::exceptions::ParameterAlreadyDeclaredException& e) {
            RCLCPP_WARN(node_->get_logger(), "parameter isae_robot.detect_target.timeout.data already declared");
        } 
        this->detect_target_input_.timeout.data = node_->get_parameter("isae_robot.detect_target.timeout.data").as_double();
        

        
    
        
        	try {
            node_->declare_parameter("isae_robot.move_to.target.x", 0.0); 
        } catch (rclcpp::exceptions::ParameterAlreadyDeclaredException& e) {
            RCLCPP_WARN(node_->get_logger(), "parameter isae_robot.move_to.target.x already declared");
        } 
        this->move_to_input_.target.x = node_->get_parameter("isae_robot.move_to.target.x").as_double();
        
	try {
            node_->declare_parameter("isae_robot.move_to.target.y", 0.0); 
        } catch (rclcpp::exceptions::ParameterAlreadyDeclaredException& e) {
            RCLCPP_WARN(node_->get_logger(), "parameter isae_robot.move_to.target.y already declared");
        } 
        this->move_to_input_.target.y = node_->get_parameter("isae_robot.move_to.target.y").as_double();
        
	try {
            node_->declare_parameter("isae_robot.move_to.target.theta", 0.0); 
        } catch (rclcpp::exceptions::ParameterAlreadyDeclaredException& e) {
            RCLCPP_WARN(node_->get_logger(), "parameter isae_robot.move_to.target.theta already declared");
        } 
        this->move_to_input_.target.theta = node_->get_parameter("isae_robot.move_to.target.theta").as_double();
        

        
    
        
        	try {
            node_->declare_parameter("isae_robot.take_picture.object_name.data", ""); 
        } catch (rclcpp::exceptions::ParameterAlreadyDeclaredException& e) {
            RCLCPP_WARN(node_->get_logger(), "parameter isae_robot.take_picture.object_name.data already declared");
        } 
        this->take_picture_input_.object_name.data = node_->get_parameter("isae_robot.take_picture.object_name.data").as_string();
        

        
    
        
        	try {
            node_->declare_parameter("isae_robot.track_target.timeout.data", 0.0); 
        } catch (rclcpp::exceptions::ParameterAlreadyDeclaredException& e) {
            RCLCPP_WARN(node_->get_logger(), "parameter isae_robot.track_target.timeout.data already declared");
        } 
        this->track_target_input_.timeout.data = node_->get_parameter("isae_robot.track_target.timeout.data").as_double();
        

        
    
}

//-----------------------------------------------------------------------------

void IsaeRobotSkillsetWidget::display_start_detect_target() {
    
    active_detect_target_ = true;
    
    active_move_to_ = false;
    
    active_take_picture_ = false;
    
    active_track_target_ = false;
    
}

void IsaeRobotSkillsetWidget::display_start_move_to() {
    
    active_detect_target_ = false;
    
    active_move_to_ = true;
    
    active_take_picture_ = false;
    
    active_track_target_ = false;
    
}

void IsaeRobotSkillsetWidget::display_start_take_picture() {
    
    active_detect_target_ = false;
    
    active_move_to_ = false;
    
    active_take_picture_ = true;
    
    active_track_target_ = false;
    
}

void IsaeRobotSkillsetWidget::display_start_track_target() {
    
    active_detect_target_ = false;
    
    active_move_to_ = false;
    
    active_take_picture_ = false;
    
    active_track_target_ = true;
    
}



void IsaeRobotSkillsetWidget::event_button_estop() {
    if (ImGui::Button("estop##isae_robot")) {
        events_["estop"].id = this->send_event("estop");
        events_["estop"].response = isae_robot_skillset_interfaces::msg::EventResponse::UNDEFINED;
        events_ids_[events_["estop"].id] = "estop";
    }
}

void IsaeRobotSkillsetWidget::event_row_estop() {
    ImGui::TableNextRow();
    ImGui::TableNextColumn();
    event_button_estop();
    auto evt = events_["estop"];
    ImGui::TableNextColumn();
    ImVec4 color(1., 0., 0., 1.);
    std::string status = "UNKNOWN";
    switch (evt.response)
    {
    case isae_robot_skillset_interfaces::msg::EventResponse::SUCCESS:
        status = "SUCCESS"; 
        color.x = 0.0; color.y = 1.0;
        break;
    case isae_robot_skillset_interfaces::msg::EventResponse::UNDEFINED:
        status = "UNDEFINED"; break;
    case isae_robot_skillset_interfaces::msg::EventResponse::GUARD_FAILURE:
        status = "GUARD_FAILURE"; break;
    case isae_robot_skillset_interfaces::msg::EventResponse::EFFECT_FAILURE:
        status = "EFFECT_FAILURE"; break;
    }
    if (this->time_since_event("estop") > event_response_timeout_)
        color.x = color.y = color.z = .6;
    if (!evt.id.empty())
        ImGui::TextColored(color, "%s", status.c_str());
}

void IsaeRobotSkillsetWidget::event_button_battery_to_low() {
    if (ImGui::Button("battery_to_low##isae_robot")) {
        events_["battery_to_low"].id = this->send_event("battery_to_low");
        events_["battery_to_low"].response = isae_robot_skillset_interfaces::msg::EventResponse::UNDEFINED;
        events_ids_[events_["battery_to_low"].id] = "battery_to_low";
    }
}

void IsaeRobotSkillsetWidget::event_row_battery_to_low() {
    ImGui::TableNextRow();
    ImGui::TableNextColumn();
    event_button_battery_to_low();
    auto evt = events_["battery_to_low"];
    ImGui::TableNextColumn();
    ImVec4 color(1., 0., 0., 1.);
    std::string status = "UNKNOWN";
    switch (evt.response)
    {
    case isae_robot_skillset_interfaces::msg::EventResponse::SUCCESS:
        status = "SUCCESS"; 
        color.x = 0.0; color.y = 1.0;
        break;
    case isae_robot_skillset_interfaces::msg::EventResponse::UNDEFINED:
        status = "UNDEFINED"; break;
    case isae_robot_skillset_interfaces::msg::EventResponse::GUARD_FAILURE:
        status = "GUARD_FAILURE"; break;
    case isae_robot_skillset_interfaces::msg::EventResponse::EFFECT_FAILURE:
        status = "EFFECT_FAILURE"; break;
    }
    if (this->time_since_event("battery_to_low") > event_response_timeout_)
        color.x = color.y = color.z = .6;
    if (!evt.id.empty())
        ImGui::TextColored(color, "%s", status.c_str());
}

void IsaeRobotSkillsetWidget::event_button_battery_to_ok() {
    if (ImGui::Button("battery_to_ok##isae_robot")) {
        events_["battery_to_ok"].id = this->send_event("battery_to_ok");
        events_["battery_to_ok"].response = isae_robot_skillset_interfaces::msg::EventResponse::UNDEFINED;
        events_ids_[events_["battery_to_ok"].id] = "battery_to_ok";
    }
}

void IsaeRobotSkillsetWidget::event_row_battery_to_ok() {
    ImGui::TableNextRow();
    ImGui::TableNextColumn();
    event_button_battery_to_ok();
    auto evt = events_["battery_to_ok"];
    ImGui::TableNextColumn();
    ImVec4 color(1., 0., 0., 1.);
    std::string status = "UNKNOWN";
    switch (evt.response)
    {
    case isae_robot_skillset_interfaces::msg::EventResponse::SUCCESS:
        status = "SUCCESS"; 
        color.x = 0.0; color.y = 1.0;
        break;
    case isae_robot_skillset_interfaces::msg::EventResponse::UNDEFINED:
        status = "UNDEFINED"; break;
    case isae_robot_skillset_interfaces::msg::EventResponse::GUARD_FAILURE:
        status = "GUARD_FAILURE"; break;
    case isae_robot_skillset_interfaces::msg::EventResponse::EFFECT_FAILURE:
        status = "EFFECT_FAILURE"; break;
    }
    if (this->time_since_event("battery_to_ok") > event_response_timeout_)
        color.x = color.y = color.z = .6;
    if (!evt.id.empty())
        ImGui::TextColored(color, "%s", status.c_str());
}


void IsaeRobotSkillsetWidget::skill_response_text(int result_code) {
    std::string result;
    ImVec4 color(1., 0., 0., 1.);
    switch (result_code)
    {
    case 0: //isae_robot_skillset_interfaces::msg::SkillResult::SUCCESS:
        result = "SUCCESS"; 
        color.x = 0.; color.y = 1.;
        break;
    case 1: //isae_robot_skillset_interfaces::msg::SkillResult::ALREADY_RUNNING:
        result = "ALREADY RUNNING"; break;
    case 3: //isae_robot_skillset_interfaces::msg::SkillResult::VALIDATE_FAILURE:
        result = "VALIDATE FAILURE"; break;
    case 2: //isae_robot_skillset_interfaces::msg::SkillResult::PRECONDITION_FAILURE:
        result = "PRECONDITION FAILURE"; break;
    case 4: //isae_robot_skillset_interfaces::msg::SkillResult::START_FAILURE:
        result = "START FAILURE"; break;
    case 5: //isae_robot_skillset_interfaces::msg::SkillResult::INVARIANT_FAILURE:
        result = "INVARIANT FAILURE"; break;
    case 6: //isae_robot_skillset_interfaces::msg::SkillResult::INTERRUPT:
        result = "INTERRUPT";
        color.x = 1.; color.y = 1.;
        break;
    case 7: //isae_robot_skillset_interfaces::msg::SkillResult::FAILURE:
        result = "FAILURE"; break;            
    default:
        break;
    }
    ImGui::TextColored(color, "%s", result.c_str());
}

bool IsaeRobotSkillsetWidget::update_window()
{
    bool widget_alive = true;
    ImGui::Begin("IsaeRobot Skillset Manager", &widget_alive);
    update();
    ImGui::End();
    return widget_alive;
}

void IsaeRobotSkillsetWidget::update()
{
    ImGui::Text("Status received: %6.1f", this->time_since_status());
    ImGui::SameLine();
    if (ImGui::Button("request status##isae_robot")) {
        this->request_status();
    }
    
	if (this->display_data_ && ImGui::CollapsingHeader("Data", ImGuiTreeNodeFlags_DefaultOpen)) {
        
        if (ImGui::TreeNode("pose")) {
            if (ImGui::Button("request data##isae_robot")) {
                this->data_pose_request();
            }
            ImGui::SameLine();
            ImGui::Checkbox("subscribe##isae_robot-pose", &subscribe_pose_);
            if (this->data_pose_.has_data) {
                if (ImGui::TreeNodeEx("pose", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %.6f", "x", this->data_pose_.value.x);
	ImGui::Text("%s: %.6f", "y", this->data_pose_.value.y);
	ImGui::Text("%s: %.6f", "theta", this->data_pose_.value.theta);
	ImGui::TreePop();
}
            }
            else
                ImGui::Text("%s", "no Data");
            ImGui::TreePop();
        }
        
    }
    
    
	if (this->display_resources_ && ImGui::CollapsingHeader("Resources", ImGuiTreeNodeFlags_DefaultOpen)) {
        ImGui::BeginTable("#isae_robot_resource_table", 2);
        ImGui::TableSetupColumn("name");
        ImGui::TableSetupColumn("state");
        ImGui::TableHeadersRow(); 
        for (auto r: status_.resources) {
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::Text("%s", r.name.c_str());
            ImGui::TableNextColumn();
            ImGui::Text("%s", r.state.c_str());
        }
        ImGui::EndTable();
    }
    
    
	if (this->display_events_ && ImGui::CollapsingHeader("Events", ImGuiTreeNodeFlags_DefaultOpen)) {
        ImGui::BeginTable("#isae_robot_events", 2);
        ImGui::TableSetupColumn("#isae_robot_event", ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableSetupColumn("#isae_robot_response", ImGuiTableColumnFlags_WidthStretch);
        
        event_row_estop();
        
        event_row_battery_to_low();
        
        event_row_battery_to_ok();
        
        ImGui::EndTable();
    }
    
    
	if (ImGui::CollapsingHeader("IsaeRobot Skills", ImGuiTreeNodeFlags_DefaultOpen)) {
        
        {
            // Colored RadioButton
            static ImVec4 running_color({0.0, 1.0, 0.0, 1.0});
            static ImVec4 interrupting_color({1.0, 0.6, 0.0, 1.0});
            std::string label = "##color_isae_robot_detect_target";
            ImGui::BeginDisabled();
            if (detect_target_status_.state == 1 /* RUNNING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, running_color);
            if (detect_target_status_.state == 2 /* INTERRUPTING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, interrupting_color);
            ImGui::RadioButton(label.c_str(), (detect_target_status_.state > 0));
            if (detect_target_status_.state > 0 /* RUNNING or INTERRUPTING */)
                ImGui::PopStyleColor();
            ImGui::EndDisabled();    
        }
        // end Colored RadioButton
        ImGui::SameLine();
        if (ImGui::TreeNodeEx("detect_target")) {
            ImGui::Text("%s", detect_target_status_.id.substr(0, 8).c_str());
            ImGui::SameLine();
            if (ImGui::Button("start##isae_robot-detect_target"))
                detect_target_status_.id = this->start_detect_target();
            ImGui::SameLine();
            if (ImGui::Button("interrupt##isae_robot-detect_target"))
                this->interrupt_detect_target(detect_target_status_.id);
            if (detect_target_result_.id.compare(detect_target_status_.id) == 0) {
                ImGui::SameLine();
                skill_response_text(detect_target_result_.result);
            }
            
            if (ImGui::TreeNodeEx("input", ImGuiTreeNodeFlags_DefaultOpen)) {
                
                if (ImGui::TreeNodeEx("timeout", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::InputDouble("data", &this->detect_target_input_.timeout.data, 0.1, 1.0);
	ImGui::TreePop();
}
                
                ImGui::TreePop();
            }
            
            
            
            if (ImGui::TreeNodeEx("output", ImGuiTreeNodeFlags_DefaultOpen)) {
                if (detect_target_result_.id.compare(detect_target_status_.id) == 0) {
                    
                    if (ImGui::TreeNodeEx("target", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %s", "data", this->detect_target_output_.target.data.c_str());
	ImGui::TreePop();
}
                    
                }
                ImGui::TreePop();
            }
            
            ImGui::Separator();
            ImGui::TreePop();
        }
        
        {
            // Colored RadioButton
            static ImVec4 running_color({0.0, 1.0, 0.0, 1.0});
            static ImVec4 interrupting_color({1.0, 0.6, 0.0, 1.0});
            std::string label = "##color_isae_robot_move_to";
            ImGui::BeginDisabled();
            if (move_to_status_.state == 1 /* RUNNING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, running_color);
            if (move_to_status_.state == 2 /* INTERRUPTING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, interrupting_color);
            ImGui::RadioButton(label.c_str(), (move_to_status_.state > 0));
            if (move_to_status_.state > 0 /* RUNNING or INTERRUPTING */)
                ImGui::PopStyleColor();
            ImGui::EndDisabled();    
        }
        // end Colored RadioButton
        ImGui::SameLine();
        if (ImGui::TreeNodeEx("move_to")) {
            ImGui::Text("%s", move_to_status_.id.substr(0, 8).c_str());
            ImGui::SameLine();
            if (ImGui::Button("start##isae_robot-move_to"))
                move_to_status_.id = this->start_move_to();
            ImGui::SameLine();
            if (ImGui::Button("interrupt##isae_robot-move_to"))
                this->interrupt_move_to(move_to_status_.id);
            if (move_to_result_.id.compare(move_to_status_.id) == 0) {
                ImGui::SameLine();
                skill_response_text(move_to_result_.result);
            }
            
            if (ImGui::TreeNodeEx("input", ImGuiTreeNodeFlags_DefaultOpen)) {
                
                if (ImGui::TreeNodeEx("target", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::InputDouble("x", &this->move_to_input_.target.x, 0.1, 1.0);
	ImGui::InputDouble("y", &this->move_to_input_.target.y, 0.1, 1.0);
	ImGui::InputDouble("theta", &this->move_to_input_.target.theta, 0.1, 1.0);
	ImGui::TreePop();
}
                
                ImGui::TreePop();
            }
            
            
            if (ImGui::TreeNodeEx("progress", ImGuiTreeNodeFlags_DefaultOpen)) {
                if (move_to_progress_.id.compare(move_to_status_.id) == 0) {
                    
                    if (ImGui::TreeNodeEx("distance", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %.6f", "data", this->move_to_progress_.distance.data);
	ImGui::TreePop();
}
                    
                }
                ImGui::TreePop();
            }
            
            
            ImGui::Separator();
            ImGui::TreePop();
        }
        
        {
            // Colored RadioButton
            static ImVec4 running_color({0.0, 1.0, 0.0, 1.0});
            static ImVec4 interrupting_color({1.0, 0.6, 0.0, 1.0});
            std::string label = "##color_isae_robot_take_picture";
            ImGui::BeginDisabled();
            if (take_picture_status_.state == 1 /* RUNNING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, running_color);
            if (take_picture_status_.state == 2 /* INTERRUPTING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, interrupting_color);
            ImGui::RadioButton(label.c_str(), (take_picture_status_.state > 0));
            if (take_picture_status_.state > 0 /* RUNNING or INTERRUPTING */)
                ImGui::PopStyleColor();
            ImGui::EndDisabled();    
        }
        // end Colored RadioButton
        ImGui::SameLine();
        if (ImGui::TreeNodeEx("take_picture")) {
            ImGui::Text("%s", take_picture_status_.id.substr(0, 8).c_str());
            ImGui::SameLine();
            if (ImGui::Button("start##isae_robot-take_picture"))
                take_picture_status_.id = this->start_take_picture();
            ImGui::SameLine();
            if (ImGui::Button("interrupt##isae_robot-take_picture"))
                this->interrupt_take_picture(take_picture_status_.id);
            if (take_picture_result_.id.compare(take_picture_status_.id) == 0) {
                ImGui::SameLine();
                skill_response_text(take_picture_result_.result);
            }
            
            if (ImGui::TreeNodeEx("input", ImGuiTreeNodeFlags_DefaultOpen)) {
                
                if (ImGui::TreeNodeEx("object_name", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::InputText("data", &this->take_picture_input_.object_name.data, 80);
	ImGui::TreePop();
}
                
                ImGui::TreePop();
            }
            
            
            
            ImGui::Separator();
            ImGui::TreePop();
        }
        
        {
            // Colored RadioButton
            static ImVec4 running_color({0.0, 1.0, 0.0, 1.0});
            static ImVec4 interrupting_color({1.0, 0.6, 0.0, 1.0});
            std::string label = "##color_isae_robot_track_target";
            ImGui::BeginDisabled();
            if (track_target_status_.state == 1 /* RUNNING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, running_color);
            if (track_target_status_.state == 2 /* INTERRUPTING */)
                ImGui::PushStyleColor(ImGuiCol_CheckMark, interrupting_color);
            ImGui::RadioButton(label.c_str(), (track_target_status_.state > 0));
            if (track_target_status_.state > 0 /* RUNNING or INTERRUPTING */)
                ImGui::PopStyleColor();
            ImGui::EndDisabled();    
        }
        // end Colored RadioButton
        ImGui::SameLine();
        if (ImGui::TreeNodeEx("track_target")) {
            ImGui::Text("%s", track_target_status_.id.substr(0, 8).c_str());
            ImGui::SameLine();
            if (ImGui::Button("start##isae_robot-track_target"))
                track_target_status_.id = this->start_track_target();
            ImGui::SameLine();
            if (ImGui::Button("interrupt##isae_robot-track_target"))
                this->interrupt_track_target(track_target_status_.id);
            if (track_target_result_.id.compare(track_target_status_.id) == 0) {
                ImGui::SameLine();
                skill_response_text(track_target_result_.result);
            }
            
            if (ImGui::TreeNodeEx("input", ImGuiTreeNodeFlags_DefaultOpen)) {
                
                if (ImGui::TreeNodeEx("timeout", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::InputDouble("data", &this->track_target_input_.timeout.data, 0.1, 1.0);
	ImGui::TreePop();
}
                
                ImGui::TreePop();
            }
            
            
            if (ImGui::TreeNodeEx("progress", ImGuiTreeNodeFlags_DefaultOpen)) {
                if (track_target_progress_.id.compare(track_target_status_.id) == 0) {
                    
                    if (ImGui::TreeNodeEx("detection", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %.6f", "x", this->track_target_progress_.detection.x);
	ImGui::Text("%s: %.6f", "y", this->track_target_progress_.detection.y);
	ImGui::Text("%s: %.6f", "theta", this->track_target_progress_.detection.theta);
	ImGui::TreePop();
}
                    
                }
                ImGui::TreePop();
            }
            
            
            ImGui::Separator();
            ImGui::TreePop();
        }
        
    }
    
    ImGui::Separator();
    ImGui::Separator();
    
    if (this->active_detect_target_) {
        ImGui::Text("%s", "DETECT_TARGET");
        
        if (ImGui::TreeNodeEx(" input", ImGuiTreeNodeFlags_DefaultOpen)) {
            
            if (ImGui::TreeNodeEx("timeout", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %.6f", "data", this->detect_target_input_.timeout.data);
	ImGui::TreePop();
}
            
            ImGui::TreePop();
        }
        
        if (ImGui::Button("START##isae_robot-detect_target", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            detect_target_status_.id = this->start_detect_target();
        // ImGui::SameLine();
        if (ImGui::Button("INTERRUPT##isae_robot-detect_target", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            this->interrupt_detect_target(detect_target_status_.id);
        if (detect_target_result_.id.compare(detect_target_status_.id) == 0) {
            skill_response_text(detect_target_result_.result);
        }
    }
    
    if (this->active_move_to_) {
        ImGui::Text("%s", "MOVE_TO");
        
        if (ImGui::TreeNodeEx(" input", ImGuiTreeNodeFlags_DefaultOpen)) {
            
            if (ImGui::TreeNodeEx("target", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %.6f", "x", this->move_to_input_.target.x);
	ImGui::Text("%s: %.6f", "y", this->move_to_input_.target.y);
	ImGui::Text("%s: %.6f", "theta", this->move_to_input_.target.theta);
	ImGui::TreePop();
}
            
            ImGui::TreePop();
        }
        
        if (ImGui::Button("START##isae_robot-move_to", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            move_to_status_.id = this->start_move_to();
        // ImGui::SameLine();
        if (ImGui::Button("INTERRUPT##isae_robot-move_to", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            this->interrupt_move_to(move_to_status_.id);
        if (move_to_result_.id.compare(move_to_status_.id) == 0) {
            skill_response_text(move_to_result_.result);
        }
    }
    
    if (this->active_take_picture_) {
        ImGui::Text("%s", "TAKE_PICTURE");
        
        if (ImGui::TreeNodeEx(" input", ImGuiTreeNodeFlags_DefaultOpen)) {
            
            if (ImGui::TreeNodeEx("object_name", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %s", "data", this->take_picture_input_.object_name.data.c_str());
	ImGui::TreePop();
}
            
            ImGui::TreePop();
        }
        
        if (ImGui::Button("START##isae_robot-take_picture", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            take_picture_status_.id = this->start_take_picture();
        // ImGui::SameLine();
        if (ImGui::Button("INTERRUPT##isae_robot-take_picture", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            this->interrupt_take_picture(take_picture_status_.id);
        if (take_picture_result_.id.compare(take_picture_status_.id) == 0) {
            skill_response_text(take_picture_result_.result);
        }
    }
    
    if (this->active_track_target_) {
        ImGui::Text("%s", "TRACK_TARGET");
        
        if (ImGui::TreeNodeEx(" input", ImGuiTreeNodeFlags_DefaultOpen)) {
            
            if (ImGui::TreeNodeEx("timeout", ImGuiTreeNodeFlags_DefaultOpen)) {
	ImGui::Text("%s: %.6f", "data", this->track_target_input_.timeout.data);
	ImGui::TreePop();
}
            
            ImGui::TreePop();
        }
        
        if (ImGui::Button("START##isae_robot-track_target", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            track_target_status_.id = this->start_track_target();
        // ImGui::SameLine();
        if (ImGui::Button("INTERRUPT##isae_robot-track_target", ImVec2(10*ImGui::GetFontSize(), 2*ImGui::GetTextLineHeight())))
            this->interrupt_track_target(track_target_status_.id);
        if (track_target_result_.id.compare(track_target_status_.id) == 0) {
            skill_response_text(track_target_result_.result);
        }
    }
    
}

void IsaeRobotSkillsetWidget::process() {
    
    if (subscribe_pose_)
        this->create_data_pose_subscription();
    else
        this->destroy_data_pose_subscription();
    
}
