from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, GroupAction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import PathJoinSubstitution

from launch_ros.actions import Node, SetRemap
from launch_ros.substitutions import FindPackageShare


def generate_launch_description():
    
    return LaunchDescription([
        GroupAction([
            SetRemap("cmd_vel", "/tracking/cmd_vel"),
            IncludeLaunchDescription(
                PythonLaunchDescriptionSource([
                    PathJoinSubstitution([
                        FindPackageShare('target_tracking'),
                        'launch',
                        'target_tracking.launch.py'
                    ])
                ]),
            )
        ]),
        Node(
            package='visual_detection',
            executable='visual_detection_node', 
            name='visual_detection_red',
            namespace='',
            remappings=[
                ('image/compressed', '/camera1/image_raw/compressed'),
                ('detection', 'detection_red'),
            ],
            parameters=[{
                "image_transport": "compressed",
                "threshold": 30,
                "blue": 30,
                "red" : 220,
                "green": 30
            }]
        ),
        Node(
            package='topic_tools',
            executable='mux', 
            name='cmd_mux',
            namespace='',
            arguments=['/robot/cmd_vel', '/move_to/cmd_vel', '/tracking/cmd_vel'],
        ),
        Node(
            package='move_to',
            executable='move_to_node', 
            name='move_to',
            namespace=''
        ),
        Node(
            package='autonomy_architecture',
            executable='odom_to_pose', 
            name='odom_to_pose',
            namespace='',
            remappings=[
                ('input_odom', '/robot/odom'),
                ('output_pose', '/robot/pose'),
            ],
        ),
        Node(
            package='aias_lab_skillset',
            executable='aias_lab_skillset_node', 
            name='aias_lab_skillset',
            namespace='',
            remappings=[
                ('pose', '/robot/pose'),
                ('detection_blue', '/detection'),
                ('image/compressed', 'camera1/image_raw/compressed'),
                ('point', '/detection'),
            ]
        ),
    ])
