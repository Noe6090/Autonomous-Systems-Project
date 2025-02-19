#include "isae_robot_skillset/Node.hpp"

namespace isae_robot_skillset
{
    void IsaeRobotNode::skills_invariants_() {
        bool effect = true;
        while (effect) {
            effect = false;
            if (skill_detect_target_state_ == SkillState::Running || skill_detect_target_state_ == SkillState::Interrupting) {
                auto message = skill_detect_target_invariants_();
                if (message.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_detect_target_state_ = SkillState::Ready;
                    // Effects
                    effect = message.effect;
                    skill_detect_target_response_pub_->publish(message);
                }
            }
            
            if (skill_move_to_state_ == SkillState::Running || skill_move_to_state_ == SkillState::Interrupting) {
                auto message = skill_move_to_invariants_();
                if (message.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
                    // Stop Skill
                    skill_move_to_state_ = SkillState::Ready;
                    // Effects
                    effect = message.effect;
                    skill_move_to_response_pub_->publish(message);
                }
            }
            
            if (skill_take_picture_state_ == SkillState::Running || skill_take_picture_state_ == SkillState::Interrupting) {
                auto message = skill_take_picture_invariants_();
                if (message.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
                    // Stop Skill
                    skill_take_picture_state_ = SkillState::Ready;
                    // Effects
                    effect = message.effect;
                    skill_take_picture_response_pub_->publish(message);
                }
            }
            
            if (skill_track_target_state_ == SkillState::Running || skill_track_target_state_ == SkillState::Interrupting) {
                auto message = skill_track_target_invariants_();
                if (message.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_track_target_state_ = SkillState::Ready;
                    // Effects
                    effect = message.effect;
                    skill_track_target_response_pub_->publish(message);
                }
            }
            
        }
    }
    //-------------------------------------------------- detect_target --------------------------------------------------
    const isae_robot_skillset_interfaces::msg::SkillDetectTargetInput::SharedPtr IsaeRobotNode::skill_detect_target_input() const
    {
        return skill_detect_target_input_;
    }
    //---------- Validate ----------
    bool IsaeRobotNode::skill_detect_target_validate_hook() {
        return true;
    }
    //---------- Start ----------
    void IsaeRobotNode::skill_detect_target_start_hook() {}
    void IsaeRobotNode::skill_detect_target_on_start() {}
    //---------- Invariant ----------
    //---------- Interrupt ----------
    void IsaeRobotNode::skill_detect_target_interrupted_() {
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'detect_target' interrupt");
        auto message = skill_detect_target_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::INTERRUPT;
        // Stop Skill
        skill_detect_target_state_ = SkillState::Ready;
        // Check effects
        // hook
        skill_detect_target_interrupt_hook();
        // Post
        // Response
        skill_detect_target_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
    }
    void IsaeRobotNode::skill_detect_target_interrupt_hook() {}
    //---------- Success ----------
    bool IsaeRobotNode::skill_detect_target_success_target_found(isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput output) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'detect_target' success 'target_found'");
        // Not Running -> false
        if (skill_detect_target_state_ != SkillState::Running) {
            mutex_.unlock();
            return false;
        }
        auto message = skill_detect_target_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS;
        message.name = "target_found";
        // Output
        message.output = output;
        // Stop Skill
        skill_detect_target_state_ = SkillState::Ready;
        // Check if effects fail
        // Post
        // Response
        skill_detect_target_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        return true;
    }
    //---------- Failure ----------
    bool IsaeRobotNode::skill_detect_target_failure_no_target() {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'detect_target' failure 'no_target'");
        // Not Running -> false
        if (skill_detect_target_state_ != SkillState::Running) {
            mutex_.unlock();
            return false;
        }
        auto message = skill_detect_target_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::FAILURE;
        message.name = "no_target";
        // Stop Skill
        skill_detect_target_state_ = SkillState::Ready;
        // Check effects
        // Post
        // Response
        skill_detect_target_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        return true;
    }//------------------------- Inner Function -------------------------
    isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse IsaeRobotNode::skill_detect_target_response_initialize_() const {
        isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse result;
        result.id = skill_detect_target_id_;
        result.result = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS;result.name = "";
        result.effect = false;
        result.postcondition = true;
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse IsaeRobotNode::skill_detect_target_preconditions_() {
        auto result = skill_detect_target_response_initialize_();
        bool all_success = true;
        
        if (!all_success) {
            result.result = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::PRECONDITION_FAILURE;
        }
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse IsaeRobotNode::skill_detect_target_start_() {
        auto message = skill_detect_target_response_initialize_();
        // hook
        skill_detect_target_start_hook();
        // set effects
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse IsaeRobotNode::skill_detect_target_invariants_() {
        auto message = skill_detect_target_response_initialize_();
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse IsaeRobotNode::skill_detect_target_all_invariants_() {
        auto message = skill_detect_target_response_initialize_();

        bool effect = true;
        while (effect) {
            effect = false;
            
            if (skill_detect_target_state_ == SkillState::Running || skill_detect_target_state_ == SkillState::Interrupting) {
                auto response = skill_detect_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_detect_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_detect_target_response_pub_->publish(response);
                    
                    message = response;
                    
                }
            }
            
            if (skill_move_to_state_ == SkillState::Running || skill_detect_target_state_ == SkillState::Interrupting) {
                auto response = skill_move_to_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_move_to_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_move_to_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_take_picture_state_ == SkillState::Running || skill_detect_target_state_ == SkillState::Interrupting) {
                auto response = skill_take_picture_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_take_picture_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_take_picture_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_track_target_state_ == SkillState::Running || skill_detect_target_state_ == SkillState::Interrupting) {
                auto response = skill_track_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_track_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_track_target_response_pub_->publish(response);
                    
                }
            }
            
        }
        return message;
    }

    //------------------------- Callback -------------------------

    void IsaeRobotNode::skill_detect_target_callback_(const isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest::UniquePtr request) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'detect_target' request");
        auto response = skill_detect_target_response_initialize_();
        // Already Running
        if (skill_detect_target_state_ == SkillState::Running || skill_detect_target_state_ == SkillState::Interrupting) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::ALREADY_RUNNING;
            skill_detect_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Skill id
        skill_detect_target_id_ = request->id;
        // Input
        skill_detect_target_input_ = std::make_shared<isae_robot_skillset_interfaces::msg::SkillDetectTargetInput>(request->input);
        // Precondition
        response = skill_detect_target_preconditions_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
            // other invariants
            if (response.effect) {
                skill_detect_target_all_invariants_();
            }
            // response
            skill_detect_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Validate
        if (!skill_detect_target_validate_hook()) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::VALIDATE_FAILURE;
            skill_detect_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Start
        response = skill_detect_target_start_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
            // response
            skill_detect_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Run
        skill_detect_target_state_ = SkillState::Running;
        // Check Invariant (Loop)
        // TODO: check if effect ?
        response = skill_detect_target_all_invariants_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SUCCESS) {
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        // callback
        this->skill_detect_target_on_start();
    }

    

    void IsaeRobotNode::skill_detect_target_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'detect_target' interrupt");
        if (skill_detect_target_id_ != msg->id) {
            RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'detect_target' worng id");
            mutex_.unlock();
            return;    
        }
        // Not Running -> finish
        if (skill_detect_target_state_ != SkillState::Running) {            
            mutex_.unlock();
            // TODO return something ?
            return;    
        }
        // if Interrupting
        skill_detect_target_interrupted_();
        mutex_.unlock();
        
    }
    //-------------------------------------------------- move_to --------------------------------------------------
    const isae_robot_skillset_interfaces::msg::SkillMoveToInput::SharedPtr IsaeRobotNode::skill_move_to_input() const
    {
        return skill_move_to_input_;
    }
    //---------- Validate ----------
    bool IsaeRobotNode::skill_move_to_validate_hook() {
        return true;
    }
    //---------- Start ----------
    void IsaeRobotNode::skill_move_to_start_hook() {}
    void IsaeRobotNode::skill_move_to_on_start() {}
    //---------- Invariant ----------
    void IsaeRobotNode::skill_move_to_invariant_is_busy_hook() {}
    void IsaeRobotNode::skill_move_to_invariant_is_battery_high_hook() {}
    //---------- Progress ----------
    isae_robot_skillset_interfaces::msg::SkillMoveToProgress IsaeRobotNode::skill_move_to_progress_hook() {
        isae_robot_skillset_interfaces::msg::SkillMoveToProgress message;
        return message;
        
    }
    //---------- Interrupt ----------
    void IsaeRobotNode::skill_move_to_interrupted_() {
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'move_to' interrupt");
        auto message = skill_move_to_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::INTERRUPT;
        // Stop Skill
        skill_move_to_state_ = SkillState::Ready;
        // Check effects
        if ((
             resource_motion_status_->check_next(MotionStatusState::Idle)
            )) {
            // hook
            skill_move_to_interrupt_hook();
            // Set effects
            resource_motion_status_->set_next(MotionStatusState::Idle);
            message.effect = true;
            // Invariants
            skills_invariants_();
        }
        // Post
        // Response
        skill_move_to_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
    }
    void IsaeRobotNode::skill_move_to_interrupt_hook() {}
    void IsaeRobotNode::skill_move_to_on_interrupting() {}
    bool IsaeRobotNode::skill_move_to_interrupted() {
        mutex_.lock();
        // Not Interrupting -> finish
        if (skill_move_to_state_ != SkillState::Interrupting) {            
            mutex_.unlock();
            return false;    
        }
        skill_move_to_interrupted_();
        mutex_.unlock();
        return true;
    }
    //---------- Success ----------
    bool IsaeRobotNode::skill_move_to_success_reached() {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'move_to' success 'reached'");
        // Not Running -> false
        if (skill_move_to_state_ != SkillState::Running) {
            mutex_.unlock();
            return false;
        }
        auto message = skill_move_to_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS;
        message.name = "reached";
        // Output
        // Stop Skill
        skill_move_to_state_ = SkillState::Ready;
        // Check if effects fail
        if ((
             resource_motion_status_->check_next(MotionStatusState::Idle)
            )) {
            // Set effects
            resource_motion_status_->set_next(MotionStatusState::Idle);
            message.effect = true;
            // Invariants
            skills_invariants_();
        }
        // Post
        // Response
        skill_move_to_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        return true;
    }
    //---------- Failure ----------
    bool IsaeRobotNode::skill_move_to_failure_couldnot_reach() {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'move_to' failure 'couldnot_reach'");
        // Not Running -> false
        if (skill_move_to_state_ != SkillState::Running) {
            mutex_.unlock();
            return false;
        }
        auto message = skill_move_to_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::FAILURE;
        message.name = "couldnot_reach";
        // Stop Skill
        skill_move_to_state_ = SkillState::Ready;
        // Check effects
        if ((
             resource_motion_status_->check_next(MotionStatusState::Idle)
            )) {
            // Set effects
            resource_motion_status_->set_next(MotionStatusState::Idle);
            message.effect = true;
            // Invariants
            skills_invariants_();
        }
        // Post
        // Response
        skill_move_to_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        return true;
    }//------------------------- Inner Function -------------------------
    isae_robot_skillset_interfaces::msg::SkillMoveToResponse IsaeRobotNode::skill_move_to_response_initialize_() const {
        isae_robot_skillset_interfaces::msg::SkillMoveToResponse result;
        result.id = skill_move_to_id_;
        result.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS;
        result.is_idle = true;
        
        result.is_battery_high = true;
        result.name = "";
        result.effect = false;
        result.postcondition = true;
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillMoveToResponse IsaeRobotNode::skill_move_to_preconditions_() {
        auto result = skill_move_to_response_initialize_();
        bool all_success = true;
        
        // ----- precondition is_idle -----
        result.is_idle = (resource_motion_status_->current() == MotionStatusState::Idle);
        all_success = all_success && result.is_idle;
        // ----- precondition is_battery_high -----
        result.is_battery_high = (resource_battery_status_->current() == BatteryStatusState::BatteryOk);
        all_success = all_success && result.is_battery_high;
        if (!all_success) {
            result.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::PRECONDITION_FAILURE;
        }
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillMoveToResponse IsaeRobotNode::skill_move_to_start_() {
        auto message = skill_move_to_response_initialize_();
        if (!(
             resource_motion_status_->check_next(MotionStatusState::Busy)
            )) {
            message.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::START_FAILURE;
            return message;
        }
        else {
            message.effect = true;
        }
        
        // hook
        skill_move_to_start_hook();
        // set effects
        resource_motion_status_->set_next(MotionStatusState::Busy);
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillMoveToResponse IsaeRobotNode::skill_move_to_invariants_() {
        auto message = skill_move_to_response_initialize_();
        // ----- invariant is_busy -----
        // guard
        if (!((resource_motion_status_->current() == MotionStatusState::Busy))) {
            message.name = "is_busy";
            message.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::INVARIANT_FAILURE;
            skill_move_to_invariant_is_busy_hook();
        }
        
        // ----- invariant is_battery_high -----
        // guard
        if (!((resource_battery_status_->current() == BatteryStatusState::BatteryOk))) {
            message.name = "is_battery_high";
            message.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::INVARIANT_FAILURE;
            // check effects
            if ((
                 resource_motion_status_->check_next(MotionStatusState::Idle)
                )) {
                skill_move_to_invariant_is_battery_high_hook();
                resource_motion_status_->set_next(MotionStatusState::Idle);
                message.effect = true;
            }
        }
        
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillMoveToResponse IsaeRobotNode::skill_move_to_all_invariants_() {
        auto message = skill_move_to_response_initialize_();

        bool effect = true;
        while (effect) {
            effect = false;
            
            if (skill_detect_target_state_ == SkillState::Running || skill_move_to_state_ == SkillState::Interrupting) {
                auto response = skill_detect_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
                    // Stop Skill
                    skill_detect_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_detect_target_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_move_to_state_ == SkillState::Running || skill_move_to_state_ == SkillState::Interrupting) {
                auto response = skill_move_to_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
                    // Stop Skill
                    skill_move_to_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_move_to_response_pub_->publish(response);
                    
                    message = response;
                    
                }
            }
            
            if (skill_take_picture_state_ == SkillState::Running || skill_move_to_state_ == SkillState::Interrupting) {
                auto response = skill_take_picture_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
                    // Stop Skill
                    skill_take_picture_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_take_picture_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_track_target_state_ == SkillState::Running || skill_move_to_state_ == SkillState::Interrupting) {
                auto response = skill_track_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
                    // Stop Skill
                    skill_track_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_track_target_response_pub_->publish(response);
                    
                }
            }
            
        }
        return message;
    }

    //------------------------- Callback -------------------------

    void IsaeRobotNode::skill_move_to_callback_(const isae_robot_skillset_interfaces::msg::SkillMoveToRequest::UniquePtr request) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'move_to' request");
        auto response = skill_move_to_response_initialize_();
        // Already Running
        if (skill_move_to_state_ == SkillState::Running || skill_move_to_state_ == SkillState::Interrupting) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::ALREADY_RUNNING;
            skill_move_to_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Skill id
        skill_move_to_id_ = request->id;
        // Input
        skill_move_to_input_ = std::make_shared<isae_robot_skillset_interfaces::msg::SkillMoveToInput>(request->input);
        // Precondition
        response = skill_move_to_preconditions_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
            // other invariants
            if (response.effect) {
                skill_move_to_all_invariants_();
            }
            // response
            skill_move_to_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Validate
        if (!skill_move_to_validate_hook()) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillMoveToResponse::VALIDATE_FAILURE;
            skill_move_to_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Start
        response = skill_move_to_start_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
            // response
            skill_move_to_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Run
        skill_move_to_state_ = SkillState::Running;
        // Check Invariant (Loop)
        // TODO: check if effect ?
        response = skill_move_to_all_invariants_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SUCCESS) {
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        // callback
        this->skill_move_to_on_start();
    }

    void IsaeRobotNode::skill_move_to_progress_callback_() {
        mutex_.lock();
        if (skill_move_to_state_ == SkillState::Running) {
            RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'move_to' progress");
            
            auto message = skill_move_to_progress_hook();
            message.id = skill_move_to_id_;
            
            skill_move_to_progress_pub_->publish(message);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
        }
        mutex_.unlock();
    }

    void IsaeRobotNode::skill_move_to_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'move_to' interrupt");
        if (skill_move_to_id_ != msg->id) {
            RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'move_to' worng id");
            mutex_.unlock();
            return;    
        }
        // Not Running -> finish
        if (skill_move_to_state_ != SkillState::Running) {            
            mutex_.unlock();
            // TODO return something ?
            return;    
        }
        // if Interrupting
        skill_move_to_state_ = SkillState::Interrupting;
        mutex_.unlock();
        skill_move_to_on_interrupting();
        return;
        // if Interrupted
    }
    //-------------------------------------------------- take_picture --------------------------------------------------
    const isae_robot_skillset_interfaces::msg::SkillTakePictureInput::SharedPtr IsaeRobotNode::skill_take_picture_input() const
    {
        return skill_take_picture_input_;
    }
    //---------- Validate ----------
    bool IsaeRobotNode::skill_take_picture_validate_hook() {
        return true;
    }
    //---------- Start ----------
    void IsaeRobotNode::skill_take_picture_start_hook() {}
    void IsaeRobotNode::skill_take_picture_on_start() {}
    //---------- Invariant ----------
    //---------- Interrupt ----------
    void IsaeRobotNode::skill_take_picture_interrupted_() {
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'take_picture' interrupt");
        auto message = skill_take_picture_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::INTERRUPT;
        // Stop Skill
        skill_take_picture_state_ = SkillState::Ready;
        // Check effects
        // hook
        skill_take_picture_interrupt_hook();
        // Post
        // Response
        skill_take_picture_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
    }
    void IsaeRobotNode::skill_take_picture_interrupt_hook() {}
    //---------- Success ----------
    bool IsaeRobotNode::skill_take_picture_success_image_saved() {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'take_picture' success 'image_saved'");
        // Not Running -> false
        if (skill_take_picture_state_ != SkillState::Running) {
            mutex_.unlock();
            return false;
        }
        auto message = skill_take_picture_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS;
        message.name = "image_saved";
        // Output
        // Stop Skill
        skill_take_picture_state_ = SkillState::Ready;
        // Check if effects fail
        // Post
        // Response
        skill_take_picture_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        return true;
    }
    //---------- Failure ----------
    bool IsaeRobotNode::skill_take_picture_failure_error_saving() {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'take_picture' failure 'error_saving'");
        // Not Running -> false
        if (skill_take_picture_state_ != SkillState::Running) {
            mutex_.unlock();
            return false;
        }
        auto message = skill_take_picture_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::FAILURE;
        message.name = "error_saving";
        // Stop Skill
        skill_take_picture_state_ = SkillState::Ready;
        // Check effects
        // Post
        // Response
        skill_take_picture_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        return true;
    }//------------------------- Inner Function -------------------------
    isae_robot_skillset_interfaces::msg::SkillTakePictureResponse IsaeRobotNode::skill_take_picture_response_initialize_() const {
        isae_robot_skillset_interfaces::msg::SkillTakePictureResponse result;
        result.id = skill_take_picture_id_;
        result.result = isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS;result.name = "";
        result.effect = false;
        result.postcondition = true;
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillTakePictureResponse IsaeRobotNode::skill_take_picture_preconditions_() {
        auto result = skill_take_picture_response_initialize_();
        bool all_success = true;
        
        if (!all_success) {
            result.result = isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::PRECONDITION_FAILURE;
        }
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillTakePictureResponse IsaeRobotNode::skill_take_picture_start_() {
        auto message = skill_take_picture_response_initialize_();
        // hook
        skill_take_picture_start_hook();
        // set effects
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillTakePictureResponse IsaeRobotNode::skill_take_picture_invariants_() {
        auto message = skill_take_picture_response_initialize_();
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillTakePictureResponse IsaeRobotNode::skill_take_picture_all_invariants_() {
        auto message = skill_take_picture_response_initialize_();

        bool effect = true;
        while (effect) {
            effect = false;
            
            if (skill_detect_target_state_ == SkillState::Running || skill_take_picture_state_ == SkillState::Interrupting) {
                auto response = skill_detect_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
                    // Stop Skill
                    skill_detect_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_detect_target_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_move_to_state_ == SkillState::Running || skill_take_picture_state_ == SkillState::Interrupting) {
                auto response = skill_move_to_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
                    // Stop Skill
                    skill_move_to_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_move_to_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_take_picture_state_ == SkillState::Running || skill_take_picture_state_ == SkillState::Interrupting) {
                auto response = skill_take_picture_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
                    // Stop Skill
                    skill_take_picture_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_take_picture_response_pub_->publish(response);
                    
                    message = response;
                    
                }
            }
            
            if (skill_track_target_state_ == SkillState::Running || skill_take_picture_state_ == SkillState::Interrupting) {
                auto response = skill_track_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
                    // Stop Skill
                    skill_track_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_track_target_response_pub_->publish(response);
                    
                }
            }
            
        }
        return message;
    }

    //------------------------- Callback -------------------------

    void IsaeRobotNode::skill_take_picture_callback_(const isae_robot_skillset_interfaces::msg::SkillTakePictureRequest::UniquePtr request) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'take_picture' request");
        auto response = skill_take_picture_response_initialize_();
        // Already Running
        if (skill_take_picture_state_ == SkillState::Running || skill_take_picture_state_ == SkillState::Interrupting) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::ALREADY_RUNNING;
            skill_take_picture_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Skill id
        skill_take_picture_id_ = request->id;
        // Input
        skill_take_picture_input_ = std::make_shared<isae_robot_skillset_interfaces::msg::SkillTakePictureInput>(request->input);
        // Precondition
        response = skill_take_picture_preconditions_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
            // other invariants
            if (response.effect) {
                skill_take_picture_all_invariants_();
            }
            // response
            skill_take_picture_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Validate
        if (!skill_take_picture_validate_hook()) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::VALIDATE_FAILURE;
            skill_take_picture_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Start
        response = skill_take_picture_start_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
            // response
            skill_take_picture_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Run
        skill_take_picture_state_ = SkillState::Running;
        // Check Invariant (Loop)
        // TODO: check if effect ?
        response = skill_take_picture_all_invariants_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SUCCESS) {
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        // callback
        this->skill_take_picture_on_start();
    }

    

    void IsaeRobotNode::skill_take_picture_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'take_picture' interrupt");
        if (skill_take_picture_id_ != msg->id) {
            RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'take_picture' worng id");
            mutex_.unlock();
            return;    
        }
        // Not Running -> finish
        if (skill_take_picture_state_ != SkillState::Running) {            
            mutex_.unlock();
            // TODO return something ?
            return;    
        }
        // if Interrupting
        skill_take_picture_interrupted_();
        mutex_.unlock();
        
    }
    //-------------------------------------------------- track_target --------------------------------------------------
    const isae_robot_skillset_interfaces::msg::SkillTrackTargetInput::SharedPtr IsaeRobotNode::skill_track_target_input() const
    {
        return skill_track_target_input_;
    }
    //---------- Validate ----------
    bool IsaeRobotNode::skill_track_target_validate_hook() {
        return true;
    }
    //---------- Start ----------
    void IsaeRobotNode::skill_track_target_start_hook() {}
    void IsaeRobotNode::skill_track_target_on_start() {}
    //---------- Invariant ----------
    void IsaeRobotNode::skill_track_target_invariant_is_busy_hook() {}
    void IsaeRobotNode::skill_track_target_invariant_is_battery_high_hook() {}
    //---------- Progress ----------
    isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress IsaeRobotNode::skill_track_target_progress_hook() {
        isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress message;
        return message;
        
    }
    //---------- Interrupt ----------
    void IsaeRobotNode::skill_track_target_interrupted_() {
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'track_target' interrupt");
        auto message = skill_track_target_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::INTERRUPT;
        // Stop Skill
        skill_track_target_state_ = SkillState::Ready;
        // Check effects
        if ((
             resource_motion_status_->check_next(MotionStatusState::Idle)
            )) {
            // hook
            skill_track_target_interrupt_hook();
            // Set effects
            resource_motion_status_->set_next(MotionStatusState::Idle);
            message.effect = true;
            // Invariants
            skills_invariants_();
        }
        // Post
        // Response
        skill_track_target_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
    }
    void IsaeRobotNode::skill_track_target_interrupt_hook() {}
    void IsaeRobotNode::skill_track_target_on_interrupting() {}
    bool IsaeRobotNode::skill_track_target_interrupted() {
        mutex_.lock();
        // Not Interrupting -> finish
        if (skill_track_target_state_ != SkillState::Interrupting) {            
            mutex_.unlock();
            return false;    
        }
        skill_track_target_interrupted_();
        mutex_.unlock();
        return true;
    }
    //---------- Success ----------
    //---------- Failure ----------
    bool IsaeRobotNode::skill_track_target_failure_error_tracking() {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'track_target' failure 'error_tracking'");
        // Not Running -> false
        if (skill_track_target_state_ != SkillState::Running) {
            mutex_.unlock();
            return false;
        }
        auto message = skill_track_target_response_initialize_();
        message.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::FAILURE;
        message.name = "error_tracking";
        // Stop Skill
        skill_track_target_state_ = SkillState::Ready;
        // Check effects
        if ((
             resource_motion_status_->check_next(MotionStatusState::Idle)
            )) {
            // Set effects
            resource_motion_status_->set_next(MotionStatusState::Idle);
            message.effect = true;
            // Invariants
            skills_invariants_();
        }
        // Post
        // Response
        skill_track_target_response_pub_->publish(message);
        // Status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        return true;
    }//------------------------- Inner Function -------------------------
    isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse IsaeRobotNode::skill_track_target_response_initialize_() const {
        isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse result;
        result.id = skill_track_target_id_;
        result.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS;
        result.is_idle = true;
        
        result.is_battery_high = true;
        result.name = "";
        result.effect = false;
        result.postcondition = true;
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse IsaeRobotNode::skill_track_target_preconditions_() {
        auto result = skill_track_target_response_initialize_();
        bool all_success = true;
        
        // ----- precondition is_idle -----
        result.is_idle = (resource_motion_status_->current() == MotionStatusState::Idle);
        all_success = all_success && result.is_idle;
        // ----- precondition is_battery_high -----
        result.is_battery_high = (resource_battery_status_->current() == BatteryStatusState::BatteryOk);
        all_success = all_success && result.is_battery_high;
        if (!all_success) {
            result.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::PRECONDITION_FAILURE;
        }
        return result;
    }

    isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse IsaeRobotNode::skill_track_target_start_() {
        auto message = skill_track_target_response_initialize_();
        if (!(
             resource_motion_status_->check_next(MotionStatusState::Busy)
            )) {
            message.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::START_FAILURE;
            return message;
        }
        else {
            message.effect = true;
        }
        
        // hook
        skill_track_target_start_hook();
        // set effects
        resource_motion_status_->set_next(MotionStatusState::Busy);
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse IsaeRobotNode::skill_track_target_invariants_() {
        auto message = skill_track_target_response_initialize_();
        // ----- invariant is_busy -----
        // guard
        if (!((resource_motion_status_->current() == MotionStatusState::Busy))) {
            message.name = "is_busy";
            message.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::INVARIANT_FAILURE;
            skill_track_target_invariant_is_busy_hook();
        }
        
        // ----- invariant is_battery_high -----
        // guard
        if (!((resource_battery_status_->current() == BatteryStatusState::BatteryOk))) {
            message.name = "is_battery_high";
            message.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::INVARIANT_FAILURE;
            // check effects
            if ((
                 resource_motion_status_->check_next(MotionStatusState::Idle)
                )) {
                skill_track_target_invariant_is_battery_high_hook();
                resource_motion_status_->set_next(MotionStatusState::Idle);
                message.effect = true;
            }
        }
        
        return message;
    }

    isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse IsaeRobotNode::skill_track_target_all_invariants_() {
        auto message = skill_track_target_response_initialize_();

        bool effect = true;
        while (effect) {
            effect = false;
            
            if (skill_detect_target_state_ == SkillState::Running || skill_track_target_state_ == SkillState::Interrupting) {
                auto response = skill_detect_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_detect_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_detect_target_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_move_to_state_ == SkillState::Running || skill_track_target_state_ == SkillState::Interrupting) {
                auto response = skill_move_to_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_move_to_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_move_to_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_take_picture_state_ == SkillState::Running || skill_track_target_state_ == SkillState::Interrupting) {
                auto response = skill_take_picture_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_take_picture_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_take_picture_response_pub_->publish(response);
                    
                }
            }
            
            if (skill_track_target_state_ == SkillState::Running || skill_track_target_state_ == SkillState::Interrupting) {
                auto response = skill_track_target_invariants_();
                if (response.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
                    // Stop Skill
                    skill_track_target_state_ = SkillState::Ready;
                    // Effects
                    effect = response.effect;
                    // Response
                    skill_track_target_response_pub_->publish(response);
                    
                    message = response;
                    
                }
            }
            
        }
        return message;
    }

    //------------------------- Callback -------------------------

    void IsaeRobotNode::skill_track_target_callback_(const isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest::UniquePtr request) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'track_target' request");
        auto response = skill_track_target_response_initialize_();
        // Already Running
        if (skill_track_target_state_ == SkillState::Running || skill_track_target_state_ == SkillState::Interrupting) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::ALREADY_RUNNING;
            skill_track_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Skill id
        skill_track_target_id_ = request->id;
        // Input
        skill_track_target_input_ = std::make_shared<isae_robot_skillset_interfaces::msg::SkillTrackTargetInput>(request->input);
        // Precondition
        response = skill_track_target_preconditions_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
            // other invariants
            if (response.effect) {
                skill_track_target_all_invariants_();
            }
            // response
            skill_track_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Validate
        if (!skill_track_target_validate_hook()) {
            // response
            response.result = isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::VALIDATE_FAILURE;
            skill_track_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Start
        response = skill_track_target_start_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
            // response
            skill_track_target_response_pub_->publish(response);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // Run
        skill_track_target_state_ = SkillState::Running;
        // Check Invariant (Loop)
        // TODO: check if effect ?
        response = skill_track_target_all_invariants_();
        if (response.result != isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SUCCESS) {
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
            mutex_.unlock();
            return;
        }
        // status
        auto status_message = status_();
        status_pub_->publish(status_message);
        mutex_.unlock();
        // callback
        this->skill_track_target_on_start();
    }

    void IsaeRobotNode::skill_track_target_progress_callback_() {
        mutex_.lock();
        if (skill_track_target_state_ == SkillState::Running) {
            RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'track_target' progress");
            
            auto message = skill_track_target_progress_hook();
            message.id = skill_track_target_id_;
            
            skill_track_target_progress_pub_->publish(message);
            // status
            auto status_message = status_();
            status_pub_->publish(status_message);
        }
        mutex_.unlock();
    }

    void IsaeRobotNode::skill_track_target_interrupt_callback_(const isae_robot_skillset_interfaces::msg::SkillInterrupt::UniquePtr msg) {
        mutex_.lock();
        RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'track_target' interrupt");
        if (skill_track_target_id_ != msg->id) {
            RCLCPP_DEBUG(this->get_logger(), "skillset 'isae_robot' skill 'track_target' worng id");
            mutex_.unlock();
            return;    
        }
        // Not Running -> finish
        if (skill_track_target_state_ != SkillState::Running) {            
            mutex_.unlock();
            // TODO return something ?
            return;    
        }
        // if Interrupting
        skill_track_target_state_ = SkillState::Interrupting;
        mutex_.unlock();
        skill_track_target_on_interrupting();
        return;
        // if Interrupted
    }
}
