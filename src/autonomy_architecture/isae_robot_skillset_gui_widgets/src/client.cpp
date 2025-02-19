
#include <random>
#include "isae_robot_skillset_gui_widgets/client.hpp"

IsaeRobotSkillsetClient::IsaeRobotSkillsetClient(const std::string &name, rclcpp::Node::SharedPtr node)
    : name_(name)
    , node_(node)
    , qos_best_(1), qos_reliable_(1)
{
    //----- resource init
    
    resource_state_["motion_status"] = "";
    
    resource_state_["battery_status"] = "";
    
    qos_best_.best_effort();
    qos_best_.durability_volatile();
    qos_reliable_.reliable();
    qos_reliable_.durability_volatile();

    status_pub_ = node_->create_publisher<std_msgs::msg::Empty>(
        name+"/isae_robot_skillset/status_request", qos_reliable_);
    status_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::SkillsetStatus>(
        name+"/isae_robot_skillset/status", qos_reliable_, std::bind(&IsaeRobotSkillsetClient::status_callback_, this, std::placeholders::_1));

    event_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::EventRequest>(
        name+"/isae_robot_skillset/event_request", qos_reliable_);
    event_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::EventResponse>(
        name+"/isae_robot_skillset/event_response", qos_reliable_, std::bind(&IsaeRobotSkillsetClient::event_callback_, this, std::placeholders::_1));
    
    data_pose_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::DataRequest>(
        name+"/isae_robot_skillset/data/pose/request", qos_reliable_);
    data_pose_response_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::DataPoseResponse>(
        name+"/isae_robot_skillset/data/pose/response", qos_reliable_, std::bind(&IsaeRobotSkillsetClient::data_pose_response_callback_, this, std::placeholders::_1));
    
    
    detect_target_result_.id = "00000000";
    detect_target_status_.id = "";
    detect_target_status_.state = isae_robot_skillset_interfaces::msg::SkillDetectTargetStatus::READY;
    detect_target_request_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest>(
        name+"/isae_robot_skillset/skill/detect_target/request", qos_reliable_);
    detect_target_interrupt_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
        name+"/isae_robot_skillset/skill/detect_target/interrupt", qos_reliable_);
    
    detect_target_response_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse>(
        name+"/isae_robot_skillset/skill/detect_target/response", qos_reliable_, std::bind(&IsaeRobotSkillsetClient::detect_target_response_callback, this, std::placeholders::_1));
    
    move_to_result_.id = "00000000";
    move_to_status_.id = "";
    move_to_status_.state = isae_robot_skillset_interfaces::msg::SkillMoveToStatus::READY;
    move_to_request_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillMoveToRequest>(
        name+"/isae_robot_skillset/skill/move_to/request", qos_reliable_);
    move_to_interrupt_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
        name+"/isae_robot_skillset/skill/move_to/interrupt", qos_reliable_);
    
    move_to_progress_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::SkillMoveToProgress>(
        name+"/isae_robot_skillset/skill/move_to/progress", qos_best_, std::bind(&IsaeRobotSkillsetClient::move_to_progress_callback, this, std::placeholders::_1));
    
    move_to_response_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::SkillMoveToResponse>(
        name+"/isae_robot_skillset/skill/move_to/response", qos_reliable_, std::bind(&IsaeRobotSkillsetClient::move_to_response_callback, this, std::placeholders::_1));
    
    take_picture_result_.id = "00000000";
    take_picture_status_.id = "";
    take_picture_status_.state = isae_robot_skillset_interfaces::msg::SkillTakePictureStatus::READY;
    take_picture_request_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillTakePictureRequest>(
        name+"/isae_robot_skillset/skill/take_picture/request", qos_reliable_);
    take_picture_interrupt_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
        name+"/isae_robot_skillset/skill/take_picture/interrupt", qos_reliable_);
    
    take_picture_response_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::SkillTakePictureResponse>(
        name+"/isae_robot_skillset/skill/take_picture/response", qos_reliable_, std::bind(&IsaeRobotSkillsetClient::take_picture_response_callback, this, std::placeholders::_1));
    
    track_target_result_.id = "00000000";
    track_target_status_.id = "";
    track_target_status_.state = isae_robot_skillset_interfaces::msg::SkillTrackTargetStatus::READY;
    track_target_request_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest>(
        name+"/isae_robot_skillset/skill/track_target/request", qos_reliable_);
    track_target_interrupt_pub_ = node_->create_publisher<isae_robot_skillset_interfaces::msg::SkillInterrupt>(
        name+"/isae_robot_skillset/skill/track_target/interrupt", qos_reliable_);
    
    track_target_progress_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress>(
        name+"/isae_robot_skillset/skill/track_target/progress", qos_best_, std::bind(&IsaeRobotSkillsetClient::track_target_progress_callback, this, std::placeholders::_1));
    
    track_target_response_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse>(
        name+"/isae_robot_skillset/skill/track_target/response", qos_reliable_, std::bind(&IsaeRobotSkillsetClient::track_target_response_callback, this, std::placeholders::_1));
    
    auto now = node_->get_clock()->now();
    
    events_stamps_["estop"] = now;
    
    events_stamps_["battery_to_low"] = now;
    
    events_stamps_["battery_to_ok"] = now;
    
    
    isae_robot_skillset_interfaces::msg::ResourceState r_motion_status;
    r_motion_status.name = "motion_status"; 
    r_motion_status.state = "";
    status_.resources.push_back(r_motion_status);
    
    isae_robot_skillset_interfaces::msg::ResourceState r_battery_status;
    r_battery_status.name = "battery_status"; 
    r_battery_status.state = "";
    status_.resources.push_back(r_battery_status);
    
    status_pub_->publish(std_msgs::msg::Empty());
}

std::string IsaeRobotSkillsetClient::generate_id() const {
    std::random_device rd;
    auto seed_data = std::array<int, std::mt19937::state_size> {};
    std::generate(std::begin(seed_data), std::end(seed_data), std::ref(rd));
    std::seed_seq seq(std::begin(seed_data), std::end(seed_data));
    std::mt19937 generator(seq);

    std::array<uint8_t, 16> data{ { 0 } };
    std::uniform_int_distribution<uint32_t>  distribution;
    uint8_t bytes[16];
    for (int i = 0; i < 16; i += 4)
        *reinterpret_cast<uint32_t*>(bytes + i) = distribution(generator);
    // variant must be 10xxxxxx
    bytes[8] &= 0xBF;
    bytes[8] |= 0x80;
    // version must be 0100xxxx
    bytes[6] &= 0x4F;
    bytes[6] |= 0x40;
    std::copy(std::begin(bytes), std::end(bytes), std::begin(data));
    std::stringstream s;
    // manipulate stream as needed
    s << std::hex << std::setfill(static_cast<char>('0'))
        << std::setw(2) << (int)data[0]
        << std::setw(2) << (int)data[1]
        << std::setw(2) << (int)data[2]
        << std::setw(2) << (int)data[3]
        << '-'
        << std::setw(2) << (int)data[4]
        << std::setw(2) << (int)data[5]
        << '-'
        << std::setw(2) << (int)data[6]
        << std::setw(2) << (int)data[7]
        << '-'
        << std::setw(2) << (int)data[8]
        << std::setw(2) << (int)data[9]
        << '-'
        << std::setw(2) << (int)data[10]
        << std::setw(2) << (int)data[11]
        << std::setw(2) << (int)data[12]
        << std::setw(2) << (int)data[13]
        << std::setw(2) << (int)data[14]
        << std::setw(2) << (int)data[15];
    return s.str();
}

void IsaeRobotSkillsetClient::status_callback_(const isae_robot_skillset_interfaces::msg::SkillsetStatus::SharedPtr msg) {
    RCLCPP_DEBUG(node_->get_logger(), "[%s] received skillset status", name_.c_str());
    this->status_ = *msg;
    for (auto r: msg->resources)
        resource_state_[r.name] = r.state;
    detect_target_status_ = msg->skill_detect_target;
    move_to_status_ = msg->skill_move_to;
    take_picture_status_ = msg->skill_take_picture;
    track_target_status_ = msg->skill_track_target;
    
}

double IsaeRobotSkillsetClient::time_since_status() {
    rclcpp::Time now = node_->get_clock()->now();
    rclcpp::Time stamp = status_.stamp;
    return (now-stamp).seconds();
}

void IsaeRobotSkillsetClient::request_status() {
    RCLCPP_INFO(node_->get_logger(), "[%s] Request status", name_.c_str());
    status_pub_->publish(std_msgs::msg::Empty());
}

//-----------------------------------------------------------------------------

std::string IsaeRobotSkillsetClient::send_event(std::string event) {
    isae_robot_skillset_interfaces::msg::EventRequest request;
    request.id = generate_id();
    request.name = event;
    RCLCPP_INFO(node_->get_logger(), "[%s] send event %s (%s)", 
        name_.c_str(), request.name.c_str(), request.id.c_str());
    this->event_pub_->publish(request);
    return request.id;
}

void IsaeRobotSkillsetClient::event_callback_(const isae_robot_skillset_interfaces::msg::EventResponse::SharedPtr msg) {
    RCLCPP_INFO(node_->get_logger(), "[%s] received event %s response %d", 
        name_.c_str(), msg->id.c_str(), msg->response);
    events_[events_ids_[msg->id]] = *msg;
    events_stamps_[events_ids_[msg->id]] = node_->get_clock()->now();
}

double IsaeRobotSkillsetClient::time_since_event(std::string event) const {
    auto now = node_->get_clock()->now();
    return (now - events_stamps_.at(event)).seconds();
}


//-----------------------------------------------------------------------------
void IsaeRobotSkillsetClient::data_pose_response_callback_(const isae_robot_skillset_interfaces::msg::DataPoseResponse::SharedPtr msg) {
    RCLCPP_INFO(node_->get_logger(), "[%s] received data 'pose' response %s", 
        name_.c_str(), msg->id.c_str());
    this->data_pose_.has_data = msg->has_data;
    this->data_pose_.value = msg->value;
}

void IsaeRobotSkillsetClient::data_pose_callback_(const isae_robot_skillset_interfaces::msg::DataPose::SharedPtr msg) {
    RCLCPP_DEBUG(node_->get_logger(), "[%s] received data 'pose'", name_.c_str());
    this->data_pose_.has_data = true;
    this->data_pose_.value = msg->value;
}

std::string IsaeRobotSkillsetClient::data_pose_request() {
    isae_robot_skillset_interfaces::msg::DataRequest request;
    request.id = generate_id();
    this->data_pose_pub_->publish(request);
    return request.id;
}

void IsaeRobotSkillsetClient::create_data_pose_subscription() {
    if (! data_pose_sub_) {
        RCLCPP_INFO(node_->get_logger(), "[%s] create subsription to data 'pose'", name_.c_str());
        data_pose_sub_ = node_->create_subscription<isae_robot_skillset_interfaces::msg::DataPose>(
            name_+"/isae_robot_skillset/data/pose", qos_reliable_, 
            std::bind(&IsaeRobotSkillsetClient::data_pose_callback_, this, std::placeholders::_1));
    }
}

void IsaeRobotSkillsetClient::destroy_data_pose_subscription() {
    if (data_pose_sub_) {
        RCLCPP_INFO(node_->get_logger(), "[%s] reset subsription to data 'pose'", name_.c_str());
        data_pose_sub_.reset();
    }
}



//-----------------------------------------------------------------------------

void IsaeRobotSkillsetClient::detect_target_response_callback(const isae_robot_skillset_interfaces::msg::SkillDetectTargetResponse::SharedPtr msg) {
    RCLCPP_INFO(this->node_->get_logger(), "[%s] received detect_target %s result %d %s", 
        name_.c_str(), msg->id.c_str(), msg->result, msg->name.c_str());
    this->detect_target_result_ = *msg;
    this->detect_target_output_ = msg->output;
}

std::string IsaeRobotSkillsetClient::start_detect_target() {
    isae_robot_skillset_interfaces::msg::SkillDetectTargetRequest msg;
    msg.input = detect_target_input_;
    msg.id = generate_id();
    RCLCPP_INFO(this->node_->get_logger(), "[%s] start skill detect_target %s", 
        name_.c_str(), msg.id.c_str());
    detect_target_request_pub_->publish(msg);
    return msg.id;
}

void IsaeRobotSkillsetClient::interrupt_detect_target(std::string id) {
    isae_robot_skillset_interfaces::msg::SkillInterrupt msg;
    msg.id = id;
    RCLCPP_INFO(this->node_->get_logger(), "[%s] interrupt skill detect_target %s", 
        name_.c_str(), msg.id.c_str());
    detect_target_interrupt_pub_->publish(msg);
}

void IsaeRobotSkillsetClient::interrupt_detect_target() {
    this->interrupt_detect_target(detect_target_status_.id);
}

//-----------------------------------------------------------------------------

void IsaeRobotSkillsetClient::move_to_progress_callback(const isae_robot_skillset_interfaces::msg::SkillMoveToProgress::SharedPtr msg) {
    RCLCPP_DEBUG(node_->get_logger(), "[%s] received skill 'move_to' progress %s", 
        name_.c_str(), msg->id.c_str());
    this->move_to_progress_ = *msg;
}

void IsaeRobotSkillsetClient::move_to_response_callback(const isae_robot_skillset_interfaces::msg::SkillMoveToResponse::SharedPtr msg) {
    RCLCPP_INFO(this->node_->get_logger(), "[%s] received move_to %s result %d %s", 
        name_.c_str(), msg->id.c_str(), msg->result, msg->name.c_str());
    this->move_to_result_ = *msg;
    
}

std::string IsaeRobotSkillsetClient::start_move_to() {
    isae_robot_skillset_interfaces::msg::SkillMoveToRequest msg;
    msg.input = move_to_input_;
    msg.id = generate_id();
    RCLCPP_INFO(this->node_->get_logger(), "[%s] start skill move_to %s", 
        name_.c_str(), msg.id.c_str());
    move_to_request_pub_->publish(msg);
    return msg.id;
}

void IsaeRobotSkillsetClient::interrupt_move_to(std::string id) {
    isae_robot_skillset_interfaces::msg::SkillInterrupt msg;
    msg.id = id;
    RCLCPP_INFO(this->node_->get_logger(), "[%s] interrupt skill move_to %s", 
        name_.c_str(), msg.id.c_str());
    move_to_interrupt_pub_->publish(msg);
}

void IsaeRobotSkillsetClient::interrupt_move_to() {
    this->interrupt_move_to(move_to_status_.id);
}

//-----------------------------------------------------------------------------

void IsaeRobotSkillsetClient::take_picture_response_callback(const isae_robot_skillset_interfaces::msg::SkillTakePictureResponse::SharedPtr msg) {
    RCLCPP_INFO(this->node_->get_logger(), "[%s] received take_picture %s result %d %s", 
        name_.c_str(), msg->id.c_str(), msg->result, msg->name.c_str());
    this->take_picture_result_ = *msg;
    
}

std::string IsaeRobotSkillsetClient::start_take_picture() {
    isae_robot_skillset_interfaces::msg::SkillTakePictureRequest msg;
    msg.input = take_picture_input_;
    msg.id = generate_id();
    RCLCPP_INFO(this->node_->get_logger(), "[%s] start skill take_picture %s", 
        name_.c_str(), msg.id.c_str());
    take_picture_request_pub_->publish(msg);
    return msg.id;
}

void IsaeRobotSkillsetClient::interrupt_take_picture(std::string id) {
    isae_robot_skillset_interfaces::msg::SkillInterrupt msg;
    msg.id = id;
    RCLCPP_INFO(this->node_->get_logger(), "[%s] interrupt skill take_picture %s", 
        name_.c_str(), msg.id.c_str());
    take_picture_interrupt_pub_->publish(msg);
}

void IsaeRobotSkillsetClient::interrupt_take_picture() {
    this->interrupt_take_picture(take_picture_status_.id);
}

//-----------------------------------------------------------------------------

void IsaeRobotSkillsetClient::track_target_progress_callback(const isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress::SharedPtr msg) {
    RCLCPP_DEBUG(node_->get_logger(), "[%s] received skill 'track_target' progress %s", 
        name_.c_str(), msg->id.c_str());
    this->track_target_progress_ = *msg;
}

void IsaeRobotSkillsetClient::track_target_response_callback(const isae_robot_skillset_interfaces::msg::SkillTrackTargetResponse::SharedPtr msg) {
    RCLCPP_INFO(this->node_->get_logger(), "[%s] received track_target %s result %d %s", 
        name_.c_str(), msg->id.c_str(), msg->result, msg->name.c_str());
    this->track_target_result_ = *msg;
    
}

std::string IsaeRobotSkillsetClient::start_track_target() {
    isae_robot_skillset_interfaces::msg::SkillTrackTargetRequest msg;
    msg.input = track_target_input_;
    msg.id = generate_id();
    RCLCPP_INFO(this->node_->get_logger(), "[%s] start skill track_target %s", 
        name_.c_str(), msg.id.c_str());
    track_target_request_pub_->publish(msg);
    return msg.id;
}

void IsaeRobotSkillsetClient::interrupt_track_target(std::string id) {
    isae_robot_skillset_interfaces::msg::SkillInterrupt msg;
    msg.id = id;
    RCLCPP_INFO(this->node_->get_logger(), "[%s] interrupt skill track_target %s", 
        name_.c_str(), msg.id.c_str());
    track_target_interrupt_pub_->publish(msg);
}

void IsaeRobotSkillsetClient::interrupt_track_target() {
    this->interrupt_track_target(track_target_status_.id);
}

