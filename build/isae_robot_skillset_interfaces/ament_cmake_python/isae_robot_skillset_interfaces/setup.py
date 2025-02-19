from setuptools import find_packages
from setuptools import setup

setup(
    name='isae_robot_skillset_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('isae_robot_skillset_interfaces', 'isae_robot_skillset_interfaces.*')),
)
