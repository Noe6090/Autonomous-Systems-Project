#include "isae_robot_skillset/Resource.hpp"

namespace isae_robot_skillset
{
    //-------------------------------------------------- motion_status --------------------------------------------------

    std::vector<MotionStatusState> MotionStatus::states() const
    {
        return std::vector<MotionStatusState>{
            MotionStatusState::Idle, MotionStatusState::Busy, 
        };
    }

    std::vector<Arc<MotionStatusState>> MotionStatus::transitions() const
    {
        return std::vector<Arc<MotionStatusState>>{
            Arc<MotionStatusState>(MotionStatusState::Idle, MotionStatusState::Busy), 
            Arc<MotionStatusState>(MotionStatusState::Busy, MotionStatusState::Idle), 
            };
    }

    bool MotionStatus::check_next(MotionStatusState dst) const
    {
        if (current() == dst) {
            return true;
        }

        switch (current()) {
        case MotionStatusState::Idle:
            return (dst == MotionStatusState::Busy);
        case MotionStatusState::Busy:
            return (dst == MotionStatusState::Idle);
        default: return false;
        }
    
    }
    //-------------------------------------------------- battery_status --------------------------------------------------

    std::vector<BatteryStatusState> BatteryStatus::states() const
    {
        return std::vector<BatteryStatusState>{
            BatteryStatusState::BatteryOk, BatteryStatusState::BatteryLow, 
        };
    }

    std::vector<Arc<BatteryStatusState>> BatteryStatus::transitions() const
    {
        return std::vector<Arc<BatteryStatusState>>{
            Arc<BatteryStatusState>(BatteryStatusState::BatteryOk, BatteryStatusState::BatteryLow), 
            Arc<BatteryStatusState>(BatteryStatusState::BatteryLow, BatteryStatusState::BatteryOk), 
            };
    }

    bool BatteryStatus::check_next(BatteryStatusState dst) const
    {
        if (current() == dst) {
            return true;
        }

        switch (current()) {
        case BatteryStatusState::BatteryOk:
            return (dst == BatteryStatusState::BatteryLow);
        case BatteryStatusState::BatteryLow:
            return (dst == BatteryStatusState::BatteryOk);
        default: return false;
        }
    
    }
    
}


std::string to_string(const isae_robot_skillset::MotionStatusState &x)
{
    switch (x)
    {
    case isae_robot_skillset::MotionStatusState::Idle:
        return "Idle";
    case isae_robot_skillset::MotionStatusState::Busy:
        return "Busy";
    }
    return "";
}

std::ostream &operator<<(std::ostream &out, const isae_robot_skillset::MotionStatusState &x)
{
    switch (x)
    {
    case isae_robot_skillset::MotionStatusState::Idle:
        out << "Idle";
        break;
    case isae_robot_skillset::MotionStatusState::Busy:
        out << "Busy";
        break;
    }
    return out;
}

std::string to_string(const isae_robot_skillset::BatteryStatusState &x)
{
    switch (x)
    {
    case isae_robot_skillset::BatteryStatusState::BatteryOk:
        return "BatteryOk";
    case isae_robot_skillset::BatteryStatusState::BatteryLow:
        return "BatteryLow";
    }
    return "";
}

std::ostream &operator<<(std::ostream &out, const isae_robot_skillset::BatteryStatusState &x)
{
    switch (x)
    {
    case isae_robot_skillset::BatteryStatusState::BatteryOk:
        out << "BatteryOk";
        break;
    case isae_robot_skillset::BatteryStatusState::BatteryLow:
        out << "BatteryLow";
        break;
    }
    return out;
}

