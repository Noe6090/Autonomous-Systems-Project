import rclpy
from threading import Thread
from rclpy.executors import MultiThreadedExecutor

from isae_robot_skillset_client import *
from isae_robot_skillset_interfaces.msg import *
from geometry_msgs.msg import Pose2D
from std_msgs.msg import Float64, String
from skill_actions import *
from ff_wrapper import *

# ROS2 init
rclpy.init()

# Create Client Instance
isae_robot = IsaeRobotSkillsetClient(node_name="isae_robot_mission", 
                                     skillset_manager="aias_lab_skillset")

# Spin in separate thread
executor = MultiThreadedExecutor()
executor.add_node(isae_robot.node)
executor_thread = Thread(target=executor.spin)
executor_thread.start()

# Define waypoints (points to move to)
point = {'x': [-1.5, -1.5, -1.5, 0.0], 'y': [0.0, 3.0, 0.0, 0.0]}

i = 0
detection_status = False


while i < len(point['x']):
    # Start moving to the current waypoint
    skill_id = start_move_to(isae_robot, point['x'][i], point['y'][i])
    
    # Wait until the robot reaches the current point
    if wait_move_to(isae_robot, skill_id):
        # If we (-1.5, 3.0) or (0.0, 0.0)), start target detection
        if (point['x'][i] == -1.5 and point['y'][i] == 3.0) or (point['x'][i] == 0.0 and point['y'][i] == 0.0):
            skill_id_detection = start_detect_target(isae_robot, 2.0)
            detection_status = wait_detect_target(isae_robot, skill_id_detection)
    
    i += 1

# Check if target was detected
if not detection_status:
    print("Mission failed - NO target detected")
else:
    # Take a picture after detecting the target
    skill_id_pic = start_take_picture(isae_robot, "mission_1.png")
    picture_status = wait_take_picture(isae_robot, skill_id_pic)

    # Track the target after picture is taken
    track_status = True
    while track_status:
        if picture_status:
            # Start tracking the target
            skill_id_track = start_track_target(isae_robot)
            track_status = wait_track_target(isae_robot, skill_id_track)

    print("Mission completed successfully")


rclpy.shutdown()


executor_thread.join()

