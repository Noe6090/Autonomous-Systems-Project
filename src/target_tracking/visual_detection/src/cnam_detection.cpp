#include <cstdio>
#include "rclcpp/rclcpp.hpp"

#include "opencv2/opencv.hpp"

#include "sensor_msgs/msg/image.hpp"
#include "cv_bridge/cv_bridge.h"
#include "geometry_msgs/msg/point.hpp"
#include "image_transport/image_transport.hpp"

//for binarisation function:
#include "DetectionCnam_codels.hpp"

rclcpp::Node::SharedPtr ptr_node = nullptr;

rclcpp::Publisher<geometry_msgs::msg::Point>::SharedPtr pub_;

static const std::string OPENCV_WINDOW = "Image window";


void getImage(const sensor_msgs::msg::Image::ConstSharedPtr _msg)
{
    rclcpp::Time begin = ptr_node->get_clock()->now();

    int b;
    int g;
    int r;
    int seuil;

    //necessary for transform ros image type into opencv image type
    cv_bridge::CvImagePtr cv_ptr;
    try
    {
        cv_ptr = cv_bridge::toCvCopy(_msg, sensor_msgs::image_encodings::BGR8);
    }
    catch (cv_bridge::Exception& e)
    {
        RCLCPP_ERROR(ptr_node->get_logger(),"cv_bridge exception: %s", e.what());
        return;
    }

#if CV_VERSION_MAJOR == 4
    IplImage _ipl_img=cvIplImage(cv_ptr->image);
#else
    IplImage _ipl_img=cv_ptr->image;
#endif

    IplImage *ptr_ipl_img= &_ipl_img;
    RCLCPP_DEBUG(ptr_node->get_logger(), "received image of size: %d x %d", ptr_ipl_img->width, ptr_ipl_img->height);

    //For see OpenCV Image:
    //
    // Update GUI Window
    // cv::imshow(OPENCV_WINDOW, cv_ptr->image);
    // cv::waitKey(3);

    ptr_node->get_parameter("blue", b);
    ptr_node->get_parameter("green", g);
    ptr_node->get_parameter("red", r);
    ptr_node->get_parameter("threshold", seuil);
    RCLCPP_DEBUG(ptr_node->get_logger(),"parameters: b=%d, g=%d, r=%d, threshold=%d", b, g, r, seuil);

    //declare a CvPoint
    CvPoint point;
    geometry_msgs::msg::Point msg;

    //call binarisation method!
    point = binarisation(ptr_ipl_img, b, g, r, seuil);

    // if (point.x != -1 || point.y != -1) {
    //     RCLCPP_INFO(ptr_node->get_logger(), "x = %d, y = %d", point.x, point.y);
    //     float cibleY = ptr_ipl_img->height*3/4;
    //     float cmd_x_pixel_value = 2.0 / ptr_ipl_img->width;
    //     float cmd_y_pixel_value = 2.0/(ptr_ipl_img->height - cibleY);
    //     cmd.angular.z = - ((point.x * cmd_x_pixel_value) - 1.0);
    //     cmd.linear.x = - ((point.y - cibleY) * cmd_y_pixel_value);

    //     RCLCPP_DEBUG(ptr_node->get_logger(),"cmd.linear.x: %f",cmd.linear.x);
    // }
    // else {
    //     cmd.angular.z = 0.0;
    //     cmd.angular.x = 0.0;
    // }
    msg.x = point.x;
    msg.y = point.y;
    RCLCPP_DEBUG(ptr_node->get_logger(), "detection: %d, %d", point.x, point.y);
    pub_->publish(msg);
}



int main(int argc, char ** argv)
{
    (void) argc;
    (void) argv;
    rclcpp::init(argc, argv);

    ptr_node = rclcpp::Node::make_shared("visual_detection");
    ptr_node->declare_parameter("image_transport", "compressed");
    image_transport::ImageTransport img_transport(ptr_node);
    image_transport::Subscriber sub_ = img_transport.subscribe("image", 1, getImage);
    
    pub_ = ptr_node->create_publisher<geometry_msgs::msg::Point>("detection", 1);

    ptr_node->declare_parameter<std::uint8_t>("blue",  180);
    ptr_node->declare_parameter<std::uint8_t>("green", 100);
    ptr_node->declare_parameter<std::uint8_t>("red",   50);
    ptr_node->declare_parameter<std::uint8_t>("threshold", 30);

    rclcpp::spin(ptr_node);
    rclcpp::shutdown();
    return 0;
}
