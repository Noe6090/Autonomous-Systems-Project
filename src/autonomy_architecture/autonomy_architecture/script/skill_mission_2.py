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

#Calling FF Planner

ff_result = call_ff("/home/etdisc/ros2_ws/src/autonomy_architecture/autonomy_architecture/pddl", "domain.pddl", "problem.pddl")
plan = parse_ff_result(ff_result)

i = 0

point = {'x': [-1.5,-1.5, 0.0], 'y' :[0.0, 3.0, 0.0]}

detection_status = False

for action in plan: 
	match (action[0]):
		case 'MOVE_TO': 
			skill_id_move = start_move_to(isae_robot,point['x'][i], point['y'][i])
			move_status = wait_move_to(isae_robot,skill_id_move)
			if (i==2):
				i = 0
			else: 
				i+=1
				
			print( "CASE: ", action[0], ";  case_status:", move_status) 
		case 'DETECT_TARGET':
			skill_id_detection = start_detect_target(isae_robot, 3.0)				
			detection_status = wait_detect_target (isae_robot, skill_id_detection)
			print( "CASE: ", action[0], ";  case_status:", detection_status) 
		case 'TAKE_PICTURE':
			if detection_status:
				skill_id_pic = start_take_picture( isae_robot, "mission_2.png")
				picture_status = wait_take_picture(isae_robot, skill_id_pic)
				print( "CASE: ", action[0], ";  case_status:",  picture_status)
			else:  
				print( "CASE: ", action[0], ";  case_status:",  False)
			
print("END OF PLAN")		

rclpy.shutdown()


executor_thread.join()

