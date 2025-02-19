from isae_robot_skillset_client import *
from isae_robot_skillset_interfaces.msg import *
from geometry_msgs.msg import Pose2D
from std_msgs.msg import Float64, String


def start_move_to(robot: IsaeRobotSkillsetClient, x: float, y: float) -> str:
    skill_input = SkillMoveToInput()
    skill_input.target.x = x
    skill_input.target.y = y
    return robot.skills.move_to.start(skill_input)

def wait_move_to(robot: IsaeRobotSkillsetClient, skill_id: str) -> bool:
    result = robot.skills.move_to.wait_result(skill_id)
    return result.result == SkillMoveToResponse.SUCCESS

def start_detect_target(robot: IsaeRobotSkillsetClient, timeout: float) -> str:
    skill_input = SkillDetectTargetInput()
    skill_input.timeout.data = timeout
    return robot.skills.detect_target.start(skill_input)

def wait_detect_target(robot: IsaeRobotSkillsetClient, skill_id: str) -> bool:
    result = robot.skills.detect_target.wait_result(skill_id)
    return result.result == SkillDetectTargetResponse.SUCCESS

def start_take_picture(robot: IsaeRobotSkillsetClient, filename: str) -> str:
    skill_input = SkillTakePictureInput()
    skill_input.object_name.data = filename
    return robot.skills.take_picture.start(skill_input)

def wait_take_picture(robot: IsaeRobotSkillsetClient, skill_id: str) -> bool:
    result = robot.skills.take_picture.wait_result(skill_id)
    return result.result == SkillTakePictureResponse.SUCCESS

def start_track_target(robot: IsaeRobotSkillsetClient) -> str:
    skill_input = SkillTrackTargetInput()
    return robot.skills.track_target.start(skill_input)

def wait_track_target(robot: IsaeRobotSkillsetClient, skill_id: str) -> bool:
    result = robot.skills.track_target.wait_result(skill_id)
    return result.result == SkillTrackTargetResponse.SUCCESS

