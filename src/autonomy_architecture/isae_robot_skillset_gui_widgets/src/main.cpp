#include <iostream>
#include <gui_tools/gui_tools.h>
#include <argagg/argagg.hpp>

#include <rclcpp/rclcpp.hpp>
#include "isae_robot_skillset_gui_widgets/widget.hpp"

using namespace std::chrono_literals;

//-----------------------------------------------------------------------------
// Commandline arguments
//-----------------------------------------------------------------------------
std::string manager_node_name;

//-----------------------------------------------------------------------------
bool parse_arg(int argc, const char* argv[])
{
    argagg::parser argparser{
        {
            {"help", {"-h", "--help"}, "shows this help message", 0},
            {"manager", {"-m", "--manager"}, "skillset manager node", 1},
        }
    };

    argagg::parser_results args;
    try
    {
        args = argparser.parse(argc, argv);
        if (args["help"])
        {
            argagg::fmt_ostream fmt(std::cerr);
            fmt << "Usage: program [options]\n" << argparser;
            return false;
        }
        manager_node_name = args["manager"].as<std::string>("isae_robot_skillset");
        return true;
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        std::cerr << std::endl;
        return true;
    }
}

//-----------------------------------------------------------------------------
// gui_tools
//-----------------------------------------------------------------------------
struct MainGui: gui_tools::App
{
    MainGui(rclcpp::Node::SharedPtr node, const std::string& title, int w, int h)
    : gui_tools::App(title, w, h, false, false)
    {
        node->declare_parameter("display_data", true);
        node->declare_parameter("display_resources", true);
        node->declare_parameter("display_events", true);

        widget = std::make_shared<IsaeRobotSkillsetWidget>(manager_node_name, node,
            node->get_parameter("display_data").get_parameter_value().get<bool>(),
            node->get_parameter("display_resources").get_parameter_value().get<bool>(),
            node->get_parameter("display_events").get_parameter_value().get<bool>());
    }
    bool update();
    std::shared_ptr<IsaeRobotSkillsetWidget> widget;
};

bool MainGui::update()
{
    // Initialize new ImGui Frame
    beginFrame();

    widget->update_window();
    widget->process();

    // Finalize and display ImGui Frame
    endFrame();

    // Check if application should close
    auto io = ImGui::GetIO();
    if(!io.WantCaptureKeyboard)
    {
        if(ImGui::IsKeyPressed(ImGuiKey_A)) // Q key on AZERTY
            return false;
        if(ImGui::IsKeyPressed(ImGuiKey_Escape))
            return false;
    }
    return (!windowShoudClose());
}

char* convert(const std::string & s)
{
   char *pc = new char[s.size()+1];
   std::strcpy(pc, s.c_str());
   return pc;
}

int main(int argc, char ** argv)
{
    std::vector<std::string> args = rclcpp::init_and_remove_ros_arguments(argc, argv);
    std::vector<const char*> cargs;
    std::transform(args.begin(), args.end(), std::back_inserter(cargs), convert);

    if(!parse_arg(args.size(), &cargs[0]))
        return 1;

    // ROS
    auto node = std::make_shared<rclcpp::Node>("isae_robot_skillset_gui");
    rclcpp::executors::SingleThreadedExecutor executor;
    executor.add_node(node);

    // Gui
    MainGui gui(node, "IsaeRobot Skillset GUI", 1024, 756);
    RCLCPP_DEBUG(node->get_logger(),"Create main window");

    while (gui.update() && rclcpp::ok())
    {
        executor.spin_some(10ms);
    }
    return 0;
}
