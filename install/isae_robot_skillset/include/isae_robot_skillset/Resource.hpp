#ifndef ISAE_ROBOT_RESOURCE_HPP
#define ISAE_ROBOT_RESOURCE_HPP

#include <string>
#include <vector>
#include <ostream>

namespace isae_robot_skillset
{
    template <typename T>
    class Arc
    {
    public:
        Arc(T src, T dst) : src_(src), dst_(dst) {}
        inline T src() const { return src_; }
        inline T dst() const { return dst_; }
    private:
        T src_;
        T dst_;
    };

    template <typename T>
    class Resource
    {
    public:
        Resource(T initial) : current_(initial) {}
        virtual ~Resource() {};
        //
        virtual std::string name() const = 0;
        inline T current() const { return current_; };
        virtual std::vector<T> states() const = 0;
        virtual std::vector<Arc<T>> transitions() const = 0;
        virtual bool check_next(T dst) const = 0;
        //
        void set_next(T dst) {
            current_ = dst;
        }
    private:
        T current_;
    };

    //------------------------- motion_status -------------------------
    enum class MotionStatusState
    {
        Idle, Busy, 
    };

    class MotionStatus : public Resource<MotionStatusState>
    {
    public:
        MotionStatus() : Resource(MotionStatusState::Idle) {}
        ~MotionStatus() {}

        inline std::string name() const { return std::string("motion_status"); };
        std::vector<MotionStatusState> states() const;
        std::vector<Arc<MotionStatusState>> transitions() const;
        bool check_next(MotionStatusState dst) const;
    };

    //------------------------- battery_status -------------------------
    enum class BatteryStatusState
    {
        BatteryOk, BatteryLow, 
    };

    class BatteryStatus : public Resource<BatteryStatusState>
    {
    public:
        BatteryStatus() : Resource(BatteryStatusState::BatteryOk) {}
        ~BatteryStatus() {}

        inline std::string name() const { return std::string("battery_status"); };
        std::vector<BatteryStatusState> states() const;
        std::vector<Arc<BatteryStatusState>> transitions() const;
        bool check_next(BatteryStatusState dst) const;
    };

    
}


std::string to_string(const isae_robot_skillset::MotionStatusState &x);
std::ostream &operator<<(std::ostream &out, const isae_robot_skillset::MotionStatusState &x);

std::string to_string(const isae_robot_skillset::BatteryStatusState &x);
std::ostream &operator<<(std::ostream &out, const isae_robot_skillset::BatteryStatusState &x);


#endif
