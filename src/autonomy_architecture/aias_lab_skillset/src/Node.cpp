#include "AiasLabSkillsetNode.hpp"

#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <tf2/LinearMath/Quaternion.h>
#include <cv_bridge/cv_bridge.h>

using namespace std::placeholders;

AiasLabSkillsetNode::AiasLabSkillsetNode() : SKILLSET_NODE("skillset_mamanger", "aias-lab") {}

AiasLabSkillsetManager::AiasLabSkillsetManager() : AiasLabSkillsetNode(), 
    node_handle_(std::shared_ptr<AiasLabSkillsetManager>(this, [](auto *) {})),
    image_transport_(node_handle_)
{
    this->move_to_client_ = rclcpp_action::create_client<nav2_msgs::action::NavigateToPose>(
      this,
      "move_to/NavigateToPose");
    this->pose_sub_ = this->create_subscription<geometry_msgs::msg::PoseStamped>("pose", 1, 
        [=](const geometry_msgs::msg::PoseStamped& pose) {
            geometry_msgs::msg::Pose2D p;
            p.x = pose.pose.position.x;
            p.y = pose.pose.position.y;
            tf2::Quaternion q;
            tf2::fromMsg(pose.pose.orientation, q);
            tf2::Matrix3x3 m(q);
            double pitch, roll;
            m.getEulerYPR(p.theta, pitch, roll);
            this->set_data_pose(p); });
    this->mux_client_ = this->create_client<topic_tools_interfaces::srv::MuxSelect>("/cmd_mux/select");

    this->declare_parameter("image_transport", "compressed");
        
    image_sub_ = image_transport_.subscribe("image", 1, 
        [=](const sensor_msgs::msg::Image::ConstSharedPtr img) {
            cv_bridge::CvImagePtr cv_ptr = cv_bridge::toCvCopy(img, sensor_msgs::image_encodings::BGR8);
            _ipl_img = cv_ptr->image;
        });
}

bool AiasLabSkillsetManager::skill_move_to_validate_hook() {
    return this->move_to_client_->wait_for_action_server(3s);
}

void AiasLabSkillsetManager::skill_move_to_on_start() {
    auto goal_msg = nav2_msgs::action::NavigateToPose::Goal();
    auto inputs = this->skill_move_to_input();
    goal_msg.pose.pose.position.x = inputs->target.x;
    goal_msg.pose.pose.position.y = inputs->target.y;
    tf2::Quaternion q;
    q.setRPY(0, 0, inputs->target.theta);
    goal_msg.pose.pose.orientation = tf2::toMsg(q);

    RCLCPP_INFO_STREAM(this->get_logger(), 
        "Sending goal " << nav2_msgs::action::to_yaml(goal_msg));

    auto send_goal_options = rclcpp_action::Client<nav2_msgs::action::NavigateToPose>::SendGoalOptions();
    send_goal_options.goal_response_callback =
      std::bind(&AiasLabSkillsetManager::move_to_response_callback_, this, _1);
    send_goal_options.feedback_callback =
      std::bind(&AiasLabSkillsetManager::move_to_feedback_callback_, this, _1, _2);
    send_goal_options.result_callback =
      std::bind(&AiasLabSkillsetManager::move_to_result_callback_, this, _1);
    this->move_to_client_->async_send_goal(goal_msg, send_goal_options);
}

void AiasLabSkillsetManager::move_to_response_callback_(const MoveToGoalHandle::SharedPtr & goal_handle) {
    if (!goal_handle) {
        RCLCPP_ERROR(this->get_logger(), "MoveTo goal was rejected by server: returning failure");
        this->skill_move_to_failure_couldnot_reach();
    } else {
        RCLCPP_INFO(this->get_logger(), "MoveTo goal accepted by server, waiting for result");
        this->move_to_goal_handle_ = goal_handle;
    }
}

isae_robot_skillset_interfaces::msg::SkillMoveToProgress AiasLabSkillsetManager::skill_move_to_progress_hook() {
    isae_robot_skillset_interfaces::msg::SkillMoveToProgress progress;
    progress.distance.data = move_to_distance_remaining_;
    return progress;
}

void AiasLabSkillsetManager::move_to_feedback_callback_(MoveToGoalHandle::SharedPtr, const nav2_msgs::action::NavigateToPose::Feedback::ConstSharedPtr feedback) {
    move_to_distance_remaining_ = feedback->distance_remaining;
}

void AiasLabSkillsetManager::move_to_result_callback_(const MoveToGoalHandle::WrappedResult & result) {
    switch (result.code) {
        case rclcpp_action::ResultCode::SUCCEEDED:
            RCLCPP_INFO(this->get_logger(), "MoveTo goal was reached: returning success");
            this->skill_move_to_success_reached();
            break;
        default:
            RCLCPP_ERROR(this->get_logger(), "MoveTo goal was in error: returning failure");
            this->skill_move_to_failure_couldnot_reach();
            return;
    }
}

void AiasLabSkillsetManager::skill_move_to_invariant_is_busy_hook() {
    this->move_to_cancel_();
}

void AiasLabSkillsetManager::skill_move_to_invariant_is_battery_high_hook() {
    this->move_to_cancel_();
}

void AiasLabSkillsetManager::skill_move_to_on_interrupting() {
    this->move_to_cancel_();
}

void AiasLabSkillsetManager::move_to_cancel_() {
    RCLCPP_INFO(this->get_logger(), "Cancelling MoveTo action");
    this->move_to_client_->async_cancel_goal(this->move_to_goal_handle_, 
        [=](action_msgs::srv::CancelGoal::Response::SharedPtr response) {
            (void)response;
            RCLCPP_INFO(this->get_logger(), "MoveTo action cancelled");
            this->skill_move_to_interrupted();
        });
}

bool AiasLabSkillsetManager::select_cmd_(std::string topic) {
    auto request = std::make_shared<topic_tools_interfaces::srv::MuxSelect::Request>();
    request->topic = topic;
    while (! this->mux_client_->wait_for_service(1s)) {
        if (!rclcpp::ok()) {
            RCLCPP_ERROR(this->get_logger(), "Cannot reach mux service");
            return false;
        }
    }
    auto future = this->mux_client_->async_send_request(request);
    return future.valid();
}

bool AiasLabSkillsetManager::select_move_to() {
    return this->select_cmd_("/move_to/cmd_vel");
}

bool AiasLabSkillsetManager::select_tracking() {
    return this->select_cmd_("/tracking/cmd_vel");
}

void AiasLabSkillsetManager::start_timer(std::function<void()> callback) {
    this->periodic_timer_ = this->create_wall_timer(1s, callback);
}

void AiasLabSkillsetManager::stop_timer() {
    this->periodic_timer_->reset();
}

void AiasLabSkillsetManager::skill_detect_target_start_hook() {
    this->detect_start_time_ = this->get_clock()->now();
    this->detect_blue_sub_ = this->create_subscription<geometry_msgs::msg::Point>("detection_blue", 10, 
        [=](const geometry_msgs::msg::Point p){ this->detect_callback_(p, "blue"); });
    this->detect_red_sub_ = this->create_subscription<geometry_msgs::msg::Point>("detection_red", 10, 
        [=](const geometry_msgs::msg::Point p){ this->detect_callback_(p, "red"); });
}

void AiasLabSkillsetManager::skill_detect_target_interrupt_hook() {
    this->detect_blue_sub_.reset();
    this->detect_red_sub_.reset();
}

void AiasLabSkillsetManager::detect_callback_(const geometry_msgs::msg::Point& p, std::string color) {
    auto in = this->skill_detect_target_input();
    if (p.x < 0 || p.y < 0) {
        // not detected: check time
        auto now = this->get_clock()->now();
        if (now - this->detect_start_time_ > rclcpp::Duration(ceil(in->timeout.data), 0)) {
            RCLCPP_ERROR(this->get_logger(), "detect timeout reached: returning failure");
            this->skill_detect_target_interrupt_hook();
            this->skill_detect_target_failure_no_target();
        }
    }
    else {
        RCLCPP_INFO(this->get_logger(), "detected target: returning success");
        isae_robot_skillset_interfaces::msg::SkillDetectTargetOutput out;
        out.target.data = color;
        this->skill_detect_target_interrupt_hook();
        this->skill_detect_target_success_target_found(out);
    }
}

void AiasLabSkillsetManager::skill_take_picture_on_start() {
	auto in = this->skill_take_picture_input();
	
	if (save_image(in->object_name.data)){
        	this->skill_take_picture_success_image_saved();
        	}
        else{
        	this->skill_take_picture_failure_error_saving();
        }
}

bool AiasLabSkillsetManager::save_image(std::string filename) {
    RCLCPP_INFO_STREAM(this->get_logger(), "saving image to file " << filename);
    try {
        return cv::imwrite(filename, _ipl_img);
    } catch (...) {
        return false;
    }
    
}

void AiasLabSkillsetManager::skill_track_target_on_start() {
	this->tracking_start_time_ = this->get_clock()->now();
	this->select_tracking();
	
	
	this->start_timer([this](){this->skill_track_target_callback_();});
	
	this->point_sub_ = this->create_subscription<geometry_msgs::msg::Point>("point", 1, [this](const geometry_msgs::msg::Point p) {this->point_ = p;  });
	
}

void AiasLabSkillsetManager::skill_track_target_callback_() {
	auto in = this->skill_track_target_input();

	// If box is not detected
	if (this->point_.x <0 || this->point_.y <0 ) {
		    auto now = this->get_clock()->now();
	    if (now - this->tracking_start_time_ > rclcpp::Duration(ceil(in->timeout.data), 0)) {
	        RCLCPP_ERROR(this->get_logger(), "detect timeout reached: returning failure");
	        this->skill_track_target_failure_error_tracking();
	    }
        }
        else {
	    RCLCPP_INFO(this->get_logger(), "detected target: returning success");	
	    this->skill_track_target_progress_hook();
	}
	

        
}

//The progress values will display the coordinates of the box within the camera view
isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress AiasLabSkillsetManager::skill_track_target_progress_hook() {
    isae_robot_skillset_interfaces::msg::SkillTrackTargetProgress progress;

    
    progress.detection.x = this->point_.x;
    progress.detection.y = this->point_.y;
    
    RCLCPP_INFO(this->get_logger(), "Tracking Progress: (%.2f, %.2f)", 
               progress.detection.x, progress.detection.y);

   return progress; 
}


void AiasLabSkillsetManager::track_target_cancel_() {
    RCLCPP_INFO(this->get_logger(), "Cancelling Track Target action");    
    this->stop_timer(); 
    this->select_move_to();
}


void AiasLabSkillsetManager::skill_track_target_invariant_is_busy_hook() {
    this->track_target_cancel_();
    RCLCPP_INFO(this->get_logger(), "Track Target invariant is busy"); 
}


void AiasLabSkillsetManager::skill_track_target_invariant_is_battery_high_hook() {
    this->track_target_cancel_();
    RCLCPP_INFO(this->get_logger(), "Track Target invariant battery"); 
}



void AiasLabSkillsetManager::skill_track_target_on_interrupting() {
   this->track_target_cancel_();
   this->skill_track_target_interrupted();
   RCLCPP_INFO(this->get_logger(), "Track Target skiill Interrupted"); 
   
}






	
