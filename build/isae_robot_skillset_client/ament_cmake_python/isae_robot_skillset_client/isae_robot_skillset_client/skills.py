from collections import defaultdict

from inflection import camelize
import rclpy.node
import threading
from typing import Dict
from .qos import *

from isae_robot_skillset_interfaces.msg import SkillInterrupt, SkillsetStatus
from .uid import new_id

from isae_robot_skillset_interfaces.msg import SkillDetectTargetRequest, SkillDetectTargetResponse, SkillDetectTargetStatus
from isae_robot_skillset_interfaces.msg import SkillDetectTargetInput
from isae_robot_skillset_interfaces.msg import SkillDetectTargetOutput

class DetectTargetSkill:
    def __init__(self, skillset_manager: str, node: rclpy.node.Node) -> None:
        self.__node = node
        self.__response_sub = node.create_subscription(SkillDetectTargetResponse,
            f"{skillset_manager}/isae_robot_skillset/skill/detect_target/response", 
            self.__response_cb,
            EVENT_QOS)
        
        self.__request_pub = node.create_publisher(SkillDetectTargetRequest,
            f"{skillset_manager}/isae_robot_skillset/skill/detect_target/request",
            1)
        self.__interrupt_pub = node.create_publisher(SkillInterrupt, 
            f"{skillset_manager}/isae_robot_skillset/skill/detect_target/interrupt",
            EVENT_QOS)
        self.__progress_msgs : Dict[str, SkillDetectTargetProgress] = dict()
        self.__response_msgs : Dict[str, SkillDetectTargetResponse] = dict()
        self.__events : Dict[str, threading.Event] = defaultdict(threading.Event)

        self.__status: SkillDetectTargetStatus = None

    def start(self, input: SkillDetectTargetInput) -> str:
        request = SkillDetectTargetRequest()
        request.id = new_id()
        request.input = input
        self.__node.get_logger().debug(f"starting skill 'detect_target' with id {request.id}")
        self.__events[request.id].clear()
        self.__request_pub.publish(request)
        return request.id

    def interrupt(self, id: str):
        self.__node.get_logger().debug(f"interrupting skill 'detect_target' with id {id}")
        self.__interrupt_pub.publish(SkillInterrupt(id=id))

    def wait_result(self, id: str) -> SkillDetectTargetResponse:
        self.__node.get_logger().debug(f"waiting skill 'detect_target' {id}")
        self.__events[id].wait()
        msg = self.__response_msgs[id]
        self.__node.get_logger().debug(f"got skill 'detect_target' response {msg}")
        return msg

    def __response_cb(self, msg: SkillDetectTargetResponse):
        self.__node.get_logger().debug(f"received '' response {msg}")
        self.__response_msgs[msg.id] = msg
        self.__events[msg.id].set()

    
    def update_status(self, status: SkillDetectTargetStatus):
        self.__status = status

    def status(self) -> SkillDetectTargetStatus:
        return self.__status

    def is_ready(self) -> bool:
        return self.__status.state == SkillDetectTargetStatus.READY

    def is_running(self) -> bool:
        return self.__status.state == SkillDetectTargetStatus.RUNNING

    def is_interrupting(self) -> bool:
        return self.__status.state == SkillDetectTargetStatus.INTERRUPTING



from isae_robot_skillset_interfaces.msg import SkillMoveToRequest, SkillMoveToResponse, SkillMoveToStatus
from isae_robot_skillset_interfaces.msg import SkillMoveToInput
from isae_robot_skillset_interfaces.msg import SkillMoveToProgress

class MoveToSkill:
    def __init__(self, skillset_manager: str, node: rclpy.node.Node) -> None:
        self.__node = node
        self.__response_sub = node.create_subscription(SkillMoveToResponse,
            f"{skillset_manager}/isae_robot_skillset/skill/move_to/response", 
            self.__response_cb,
            EVENT_QOS)
        self.__progress_sub = node.create_subscription(SkillMoveToProgress,
            f"{skillset_manager}/isae_robot_skillset/skill/move_to/progress", 
            self.__progress_cb,
            SOFT_STATE_QOS)
        self.__request_pub = node.create_publisher(SkillMoveToRequest,
            f"{skillset_manager}/isae_robot_skillset/skill/move_to/request",
            1)
        self.__interrupt_pub = node.create_publisher(SkillInterrupt, 
            f"{skillset_manager}/isae_robot_skillset/skill/move_to/interrupt",
            EVENT_QOS)
        self.__progress_msgs : Dict[str, SkillMoveToProgress] = dict()
        self.__response_msgs : Dict[str, SkillMoveToResponse] = dict()
        self.__events : Dict[str, threading.Event] = defaultdict(threading.Event)

        self.__status: SkillMoveToStatus = None

    def start(self, input: SkillMoveToInput) -> str:
        request = SkillMoveToRequest()
        request.id = new_id()
        request.input = input
        self.__node.get_logger().debug(f"starting skill 'move_to' with id {request.id}")
        self.__events[request.id].clear()
        self.__request_pub.publish(request)
        return request.id

    def interrupt(self, id: str):
        self.__node.get_logger().debug(f"interrupting skill 'move_to' with id {id}")
        self.__interrupt_pub.publish(SkillInterrupt(id=id))

    def wait_result(self, id: str) -> SkillMoveToResponse:
        self.__node.get_logger().debug(f"waiting skill 'move_to' {id}")
        self.__events[id].wait()
        msg = self.__response_msgs[id]
        self.__node.get_logger().debug(f"got skill 'move_to' response {msg}")
        return msg

    def __response_cb(self, msg: SkillMoveToResponse):
        self.__node.get_logger().debug(f"received '' response {msg}")
        self.__response_msgs[msg.id] = msg
        self.__events[msg.id].set()

    def __progress_cb(self, msg: SkillMoveToProgress):
        self.__node.get_logger().debug(f"received 'move_to' progress {msg}")
        self.__progress_msgs[msg.id] = msg

    
    def update_status(self, status: SkillMoveToStatus):
        self.__status = status

    def status(self) -> SkillMoveToStatus:
        return self.__status

    def is_ready(self) -> bool:
        return self.__status.state == SkillMoveToStatus.READY

    def is_running(self) -> bool:
        return self.__status.state == SkillMoveToStatus.RUNNING

    def is_interrupting(self) -> bool:
        return self.__status.state == SkillMoveToStatus.INTERRUPTING



from isae_robot_skillset_interfaces.msg import SkillTakePictureRequest, SkillTakePictureResponse, SkillTakePictureStatus
from isae_robot_skillset_interfaces.msg import SkillTakePictureInput

class TakePictureSkill:
    def __init__(self, skillset_manager: str, node: rclpy.node.Node) -> None:
        self.__node = node
        self.__response_sub = node.create_subscription(SkillTakePictureResponse,
            f"{skillset_manager}/isae_robot_skillset/skill/take_picture/response", 
            self.__response_cb,
            EVENT_QOS)
        
        self.__request_pub = node.create_publisher(SkillTakePictureRequest,
            f"{skillset_manager}/isae_robot_skillset/skill/take_picture/request",
            1)
        self.__interrupt_pub = node.create_publisher(SkillInterrupt, 
            f"{skillset_manager}/isae_robot_skillset/skill/take_picture/interrupt",
            EVENT_QOS)
        self.__progress_msgs : Dict[str, SkillTakePictureProgress] = dict()
        self.__response_msgs : Dict[str, SkillTakePictureResponse] = dict()
        self.__events : Dict[str, threading.Event] = defaultdict(threading.Event)

        self.__status: SkillTakePictureStatus = None

    def start(self, input: SkillTakePictureInput) -> str:
        request = SkillTakePictureRequest()
        request.id = new_id()
        request.input = input
        self.__node.get_logger().debug(f"starting skill 'take_picture' with id {request.id}")
        self.__events[request.id].clear()
        self.__request_pub.publish(request)
        return request.id

    def interrupt(self, id: str):
        self.__node.get_logger().debug(f"interrupting skill 'take_picture' with id {id}")
        self.__interrupt_pub.publish(SkillInterrupt(id=id))

    def wait_result(self, id: str) -> SkillTakePictureResponse:
        self.__node.get_logger().debug(f"waiting skill 'take_picture' {id}")
        self.__events[id].wait()
        msg = self.__response_msgs[id]
        self.__node.get_logger().debug(f"got skill 'take_picture' response {msg}")
        return msg

    def __response_cb(self, msg: SkillTakePictureResponse):
        self.__node.get_logger().debug(f"received '' response {msg}")
        self.__response_msgs[msg.id] = msg
        self.__events[msg.id].set()

    
    def update_status(self, status: SkillTakePictureStatus):
        self.__status = status

    def status(self) -> SkillTakePictureStatus:
        return self.__status

    def is_ready(self) -> bool:
        return self.__status.state == SkillTakePictureStatus.READY

    def is_running(self) -> bool:
        return self.__status.state == SkillTakePictureStatus.RUNNING

    def is_interrupting(self) -> bool:
        return self.__status.state == SkillTakePictureStatus.INTERRUPTING



from isae_robot_skillset_interfaces.msg import SkillTrackTargetRequest, SkillTrackTargetResponse, SkillTrackTargetStatus
from isae_robot_skillset_interfaces.msg import SkillTrackTargetInput
from isae_robot_skillset_interfaces.msg import SkillTrackTargetProgress

class TrackTargetSkill:
    def __init__(self, skillset_manager: str, node: rclpy.node.Node) -> None:
        self.__node = node
        self.__response_sub = node.create_subscription(SkillTrackTargetResponse,
            f"{skillset_manager}/isae_robot_skillset/skill/track_target/response", 
            self.__response_cb,
            EVENT_QOS)
        self.__progress_sub = node.create_subscription(SkillTrackTargetProgress,
            f"{skillset_manager}/isae_robot_skillset/skill/track_target/progress", 
            self.__progress_cb,
            SOFT_STATE_QOS)
        self.__request_pub = node.create_publisher(SkillTrackTargetRequest,
            f"{skillset_manager}/isae_robot_skillset/skill/track_target/request",
            1)
        self.__interrupt_pub = node.create_publisher(SkillInterrupt, 
            f"{skillset_manager}/isae_robot_skillset/skill/track_target/interrupt",
            EVENT_QOS)
        self.__progress_msgs : Dict[str, SkillTrackTargetProgress] = dict()
        self.__response_msgs : Dict[str, SkillTrackTargetResponse] = dict()
        self.__events : Dict[str, threading.Event] = defaultdict(threading.Event)

        self.__status: SkillTrackTargetStatus = None

    def start(self, input: SkillTrackTargetInput) -> str:
        request = SkillTrackTargetRequest()
        request.id = new_id()
        request.input = input
        self.__node.get_logger().debug(f"starting skill 'track_target' with id {request.id}")
        self.__events[request.id].clear()
        self.__request_pub.publish(request)
        return request.id

    def interrupt(self, id: str):
        self.__node.get_logger().debug(f"interrupting skill 'track_target' with id {id}")
        self.__interrupt_pub.publish(SkillInterrupt(id=id))

    def wait_result(self, id: str) -> SkillTrackTargetResponse:
        self.__node.get_logger().debug(f"waiting skill 'track_target' {id}")
        self.__events[id].wait()
        msg = self.__response_msgs[id]
        self.__node.get_logger().debug(f"got skill 'track_target' response {msg}")
        return msg

    def __response_cb(self, msg: SkillTrackTargetResponse):
        self.__node.get_logger().debug(f"received '' response {msg}")
        self.__response_msgs[msg.id] = msg
        self.__events[msg.id].set()

    def __progress_cb(self, msg: SkillTrackTargetProgress):
        self.__node.get_logger().debug(f"received 'track_target' progress {msg}")
        self.__progress_msgs[msg.id] = msg

    
    def update_status(self, status: SkillTrackTargetStatus):
        self.__status = status

    def status(self) -> SkillTrackTargetStatus:
        return self.__status

    def is_ready(self) -> bool:
        return self.__status.state == SkillTrackTargetStatus.READY

    def is_running(self) -> bool:
        return self.__status.state == SkillTrackTargetStatus.RUNNING

    def is_interrupting(self) -> bool:
        return self.__status.state == SkillTrackTargetStatus.INTERRUPTING





class Skills:
    def __init__(self, skillset_manager: str, node: rclpy.node.Node) -> None:
        
        self.__detect_target = DetectTargetSkill(skillset_manager, node)
        
        self.__move_to = MoveToSkill(skillset_manager, node)
        
        self.__take_picture = TakePictureSkill(skillset_manager, node)
        
        self.__track_target = TrackTargetSkill(skillset_manager, node)
        self.__skills = ['detect_target', 'move_to', 'take_picture', 'track_target']

    
    @property
    def detect_target(self) -> DetectTargetSkill:
        return self.__detect_target
    
    @property
    def move_to(self) -> MoveToSkill:
        return self.__move_to
    
    @property
    def take_picture(self) -> TakePictureSkill:
        return self.__take_picture
    
    @property
    def track_target(self) -> TrackTargetSkill:
        return self.__track_target
    

    def __getitem__(self, item):
        return getattr(self, item)

    def __iter__(self):
        return iter(self.__skills)

    def __len__(self):
        return len(self.__skills)

    def __nonzero__(self):
        return len(self.__skills) > 0
