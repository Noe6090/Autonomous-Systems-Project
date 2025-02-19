import threading
import time
import rclpy
from rclpy.node import Node
from rclpy.executors import SingleThreadedExecutor, ExternalShutdownException

from std_msgs.msg import Empty
from isae_robot_skillset_interfaces.msg import SkillsetStatus

from .resources import Resources
from .data import *
from .events import Events
from .skills import *
from .qos import *

class IsaeRobotSkillsetClient:
    def __init__(self, node_name: str, skillset_manager: str, data_subscription : bool = False):
        self.__node = Node(node_name=node_name, use_global_arguments=False)
        # SkillsetStatus
        self.__status_event = threading.Event()
        self.__status_subscriptions = self.__node.create_subscription(SkillsetStatus,
            f"{skillset_manager}/isae_robot_skillset/status", 
            self.__status_callback,
            EVENT_QOS)
        self.__status_request = self.__node.create_publisher(Empty, 
            f"{skillset_manager}/isae_robot_skillset/status_request",
            EVENT_QOS)
        self.__resources = Resources()
        # Data
        self.__data = Data(skillset_manager, data_subscription, self.__node)
        # Events
        self.__events = Events(skillset_manager, self.__node)
        # Skills
        self.__skills = Skills(skillset_manager, self.__node)

        ## Spinning
        self.__executor = SingleThreadedExecutor()
        self.__spin_thread = threading.Thread(target=self.__spin)
        self.__spin_thread.start()
        ## Init
        time.sleep(2)
        self.__get_status()

    ######## SkillsetStatus
    def __status_callback(self, msg: SkillsetStatus) -> None:
        self.__node.get_logger().debug(f"received skillset status {msg}")
        self.__resources.update_status(msg)
        
        self.skills.detect_target.update_status(msg.skill_detect_target)
        
        self.skills.move_to.update_status(msg.skill_move_to)
        
        self.skills.take_picture.update_status(msg.skill_take_picture)
        
        self.skills.track_target.update_status(msg.skill_track_target)
        
        self.__status_event.set()

    def __get_status(self) -> None:
        self.__status_event.clear()
        self.__status_request.publish(Empty())
        self.__status_event.wait()

    ######## Properties
    @property
    def node(self) -> Node:
        return self.__node

    @property
    def resources(self) -> Resources:
        return self.__resources

    @property
    def data(self) -> Data:
        return self.__data

    @property
    def events(self) -> Events:
        return self.__events

    @property
    def skills(self) -> Skills:
        return self.__skills

    ######## Spinning
    def __spin(self):
        try:
            rclpy.spin(self.__node, self.__executor)
        except (ExternalShutdownException, KeyboardInterrupt):
            pass
