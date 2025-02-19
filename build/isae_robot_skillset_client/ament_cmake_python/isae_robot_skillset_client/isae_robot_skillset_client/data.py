from .qos import HARD_STATE_QOS
import rclpy.node
import threading
from typing import Optional

from builtin_interfaces.msg import Time
from isae_robot_skillset_interfaces.msg import DataRequest

from .uid import new_id
from .qos import *

from isae_robot_skillset_interfaces.msg import DataPose, DataPoseResponse


class PoseData:
    def __init__(self, skillset_manager: str, subscription: bool, node: rclpy.node.Node) -> None:
        self.__event = threading.Event()
        self.__data : Optional[DataPose] = None
        self.__id : str = ""
        self.__request = node.create_publisher(DataRequest, 
            f"{skillset_manager}/isae_robot_skillset/data/pose/request",
            EVENT_QOS)

        if subscription:
            self.__sub = node.create_subscription(DataPose,
                f"{skillset_manager}/isae_robot_skillset/data/pose", 
                self.__data_callback,
                HARD_STATE_QOS)
        else:
            self.__sub = node.create_subscription(DataPoseResponse,
                f"{skillset_manager}/isae_robot_skillset/data/pose/response", 
                self.__response_callback,
                EVENT_QOS)
        self.__subscription_flag = subscription

    def __response_callback(self, msg: DataPoseResponse):
        if msg.has_data:
            data = DataPose()
            data.stamp = msg.stamp
            data.value = msg.value
            self.__data = data
        else:
            self.__data = None
        self.__event.set()

    def __data_callback(self, msg: DataPose):
            self.__data = msg

    @property
    def data(self) -> Optional[DataPose]:
        return self.__data

    def get(self) -> Optional[DataPose]:
        if self.__subscription_flag:
            return self.data
        else:
            self.__id = new_id()
            self.__event.clear()
            self.__request.publish(DataRequest(id=self.__id))
            self.__event.wait()
            return self.data


class Data:
    def __init__(self, skillset_manager: str, subscription: bool, node: rclpy.node.Node) -> None:
        
        self.__pose = PoseData(skillset_manager, subscription, node)
        self.__data = ['pose']

    
    @property
    def pose(self) -> PoseData:
        return self.__pose
    

    def __getitem__(self, item):
        return getattr(self, item)

    def __iter__(self):
        return iter(self.__data)

    def __len__(self):
        return len(self.__data)

    def __nonzero__(self):
        return len(self.__data) > 0
