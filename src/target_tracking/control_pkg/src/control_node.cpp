#include <chrono>
#include <functional>

#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "geometry_msgs/msg/point.hpp"
#include "sensor_msgs/msg/camera_info.hpp"

using namespace std::chrono_literals;

class ControlNode : public rclcpp::Node
{
  int image_height;
  int image_width;  
  public:
    ControlNode()
    : Node("control_node")
    {
      publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("cmd_vel", 1);
      point_sub_ = this->create_subscription<geometry_msgs::msg::Point>("point", 1, 
        [=](const geometry_msgs::msg::Point& msg) { this->detection_callback(msg); });
      camera_sub_ = this->create_subscription<sensor_msgs::msg::CameraInfo>("camera_info",1,
      [=](const sensor_msgs::msg::CameraInfo& msg) { this->computeImageSize(msg); });
    }
    
    private:
    void computeImageSize(const sensor_msgs::msg::CameraInfo& image)
    {
    this->image_height = image.height;
    this->image_width = image.width;  
    }
    
	

    private:
    void detection_callback(const geometry_msgs::msg::Point& point)
    {
      auto cmd = geometry_msgs::msg::Twist();
            
      
      // If box is detected, the robot stops spinning
      if (point.x !=-1.0 && point.y !=-1.0 ){ 
            cmd.angular.z = 0.0; 

          // Adjustements if the box is higher or lower than the middle view point

          //Box is higher 
          if (point.y < (image_height/3)-1) { 
            cmd.linear.x = 0.5;  
            }
          //Box is lower
          else if (point.y > 2*(image_height/3)+1) {     
            cmd.linear.x = -0.5; 
            }   
          else {
            cmd.linear.x = 0; 
            } 
            
          // Adjustements if the box is leaning more to the left or right than the middle view point

          //Box is in the left
          if(point.x < (image_width/2)-1) {  
            cmd.angular.z = 0.2; //camera moves right
            }
          //Box is in the right
          else if  (point.x > (image_width/2)+1){     
            cmd.angular.z= -0.2; 
            }
          else {
            cmd.angular.z = 0; 
            }   
      }
      // If box is NOT detected, robot spins
      else {cmd.angular.z = 0.2;}
      	
     
     publisher_->publish(cmd);
    }
    
    
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
    rclcpp::Subscription<geometry_msgs::msg::Point>::SharedPtr point_sub_;
    rclcpp::Subscription<sensor_msgs::msg::CameraInfo>::SharedPtr camera_sub_;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<ControlNode>());
  rclcpp::shutdown();
  return 0;
}
