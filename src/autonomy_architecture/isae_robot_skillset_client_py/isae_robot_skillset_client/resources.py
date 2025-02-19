from importlib import resources
from isae_robot_skillset_interfaces.msg import SkillsetStatus

class Resources:
    def __init__(self) -> None:
        self.__motion_status : str = "Idle"
        self.__battery_status : str = "BatteryOk"
        self.__resources = ['motion_status', 'battery_status']
    
    @property
    def motion_status(self) -> str:
        return self.__motion_status
    
    @property
    def battery_status(self) -> str:
        return self.__battery_status
    

    def __getitem__(self, item):
        return getattr(self, item)

    def __iter__(self):
        return iter(self.__resources)

    def __len__(self):
        return len(self.__resources)

    def __nonzero__(self):
        return len(self.__resources) > 0
    
    def update_status(self, status: SkillsetStatus) -> None:
        for r in status.resources:
            if r.name == 'motion_status':
                self.__motion_status = r.state
            elif r.name == 'battery_status':
                self.__battery_status = r.state
            
