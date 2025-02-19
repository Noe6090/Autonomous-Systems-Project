from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration, ThisLaunchFileDir
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node

def generate_launch_description():
    
    return LaunchDescription([
        Node(
            package='visual_detection',
            executable='visual_detection_node', 
            name='visual_detection',
            namespace='',
            # arguments=['--ros-args', '--log-level',  'visual_detection:=debug'],
            remappings=[
                ('image/compressed', '/camera1/image_raw/compressed'),
            ],
            parameters=[{
                "image_transport": "compressed",
                "threshold": 50,
                "blue": 150,
                "red" : 20, 
                "green" : 20
            }]
        ),
        Node(
            package='control_pkg',
            executable='control_node', 
            name='robot_controller',
            namespace='',
            #arguments=['--ros-args' ,'--remap'],
            remappings=[
                ('cmd_vel', '/robot/cmd_vel'),
                ('point', '/detection'),
                ('camera_info', '/camera1/camera_info')
            ]
        ),
    ])
