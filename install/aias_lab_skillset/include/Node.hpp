#ifndef AIAS_LAB_SKILLSET_NODE_HPP
#define AIAS_LAB_SKILLSET_NODE_HPP


#if defined(SKILLSET_DEBUG_MODE)
#include "isae_robot_skillset/NodeDebug.hpp"
#define SKILLSET_NODE isae_robot_skillset::IsaeRobotNodeDebug
#else
#include "isae_robot_skillset/Node.hpp"
#define SKILLSET_NODE isae_robot_skillset::IsaeRobotNode
#endif
using namespace std::chrono_literals;

class AiasLabSkillsetNode : public SKILLSET_NODE
{
public:
    AiasLabSkillsetNode();
    //-------------------- Event Hook --------------------
    // void event_estop_hook();
    // void event_battery_to_low_hook();
    // void event_battery_to_ok_hook();
    
    //-------------------- Skill Hook --------------------
    // bool skill_detect_target_validate_hook();
    // void skill_detect_target_start_hook();
    // void skill_detect_target_on_start();
    
    // void skill_detect_target_interrupt_hook();
    
    
    // bool skill_move_to_validate_hook();
    // void skill_move_to_start_hook();
    // void skill_move_to_on_start();
    // void skill_move_to_invariant_is_busy_hook();
    // void skill_move_to_invariant_is_battery_high_hook();
    // isae_robot_skillset_interfaces::msg::SkillMoveToProgress skill_move_to_progress_hook();
    // void skill_move_to_interrupt_hook();
    
    // void skill_move_to_on_interrupting();
    
    
    // bool skill_take_picture_validate_hook();
    // void skill_take_picture_start_hook();
    // void skill_take_picture_on_start();
    
    // void skill_take_picture_interrupt_hook();
    
    
    // bool skill_track_target_validate_hook();
    // void skill_track_target_start_hook();
    // void skill_track_target_on_start();
    // void skill_track_target_invariant_is_busy_hook();
    // void skill_track_target_invariant_is_battery_high_hook();
    // isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress skill_track_target_progress_hook();
    // void skill_track_target_interrupt_hook();
    
    // void skill_track_target_on_interrupting();
    
    
};
#endif
