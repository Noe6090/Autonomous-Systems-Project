# generated from rosidl_generator_py/resource/_idl.py.em
# with input from isae_robot_skillset_interfaces:msg/SkillsetStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SkillsetStatus(type):
    """Metaclass of message 'SkillsetStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('isae_robot_skillset_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'isae_robot_skillset_interfaces.msg.SkillsetStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__skillset_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__skillset_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__skillset_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__skillset_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__skillset_status

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from isae_robot_skillset_interfaces.msg import ResourceState
            if ResourceState.__class__._TYPE_SUPPORT is None:
                ResourceState.__class__.__import_type_support__()

            from isae_robot_skillset_interfaces.msg import SkillDetectTargetStatus
            if SkillDetectTargetStatus.__class__._TYPE_SUPPORT is None:
                SkillDetectTargetStatus.__class__.__import_type_support__()

            from isae_robot_skillset_interfaces.msg import SkillMoveToStatus
            if SkillMoveToStatus.__class__._TYPE_SUPPORT is None:
                SkillMoveToStatus.__class__.__import_type_support__()

            from isae_robot_skillset_interfaces.msg import SkillTakePictureStatus
            if SkillTakePictureStatus.__class__._TYPE_SUPPORT is None:
                SkillTakePictureStatus.__class__.__import_type_support__()

            from isae_robot_skillset_interfaces.msg import SkillTrackTargetStatus
            if SkillTrackTargetStatus.__class__._TYPE_SUPPORT is None:
                SkillTrackTargetStatus.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SkillsetStatus(metaclass=Metaclass_SkillsetStatus):
    """Message class 'SkillsetStatus'."""

    __slots__ = [
        '_stamp',
        '_resources',
        '_skill_detect_target',
        '_skill_move_to',
        '_skill_take_picture',
        '_skill_track_target',
        '_info',
    ]

    _fields_and_field_types = {
        'stamp': 'builtin_interfaces/Time',
        'resources': 'sequence<isae_robot_skillset_interfaces/ResourceState>',
        'skill_detect_target': 'isae_robot_skillset_interfaces/SkillDetectTargetStatus',
        'skill_move_to': 'isae_robot_skillset_interfaces/SkillMoveToStatus',
        'skill_take_picture': 'isae_robot_skillset_interfaces/SkillTakePictureStatus',
        'skill_track_target': 'isae_robot_skillset_interfaces/SkillTrackTargetStatus',
        'info': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['isae_robot_skillset_interfaces', 'msg'], 'ResourceState')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['isae_robot_skillset_interfaces', 'msg'], 'SkillDetectTargetStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['isae_robot_skillset_interfaces', 'msg'], 'SkillMoveToStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['isae_robot_skillset_interfaces', 'msg'], 'SkillTakePictureStatus'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['isae_robot_skillset_interfaces', 'msg'], 'SkillTrackTargetStatus'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())
        self.resources = kwargs.get('resources', [])
        from isae_robot_skillset_interfaces.msg import SkillDetectTargetStatus
        self.skill_detect_target = kwargs.get('skill_detect_target', SkillDetectTargetStatus())
        from isae_robot_skillset_interfaces.msg import SkillMoveToStatus
        self.skill_move_to = kwargs.get('skill_move_to', SkillMoveToStatus())
        from isae_robot_skillset_interfaces.msg import SkillTakePictureStatus
        self.skill_take_picture = kwargs.get('skill_take_picture', SkillTakePictureStatus())
        from isae_robot_skillset_interfaces.msg import SkillTrackTargetStatus
        self.skill_track_target = kwargs.get('skill_track_target', SkillTrackTargetStatus())
        self.info = kwargs.get('info', str())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.stamp != other.stamp:
            return False
        if self.resources != other.resources:
            return False
        if self.skill_detect_target != other.skill_detect_target:
            return False
        if self.skill_move_to != other.skill_move_to:
            return False
        if self.skill_take_picture != other.skill_take_picture:
            return False
        if self.skill_track_target != other.skill_track_target:
            return False
        if self.info != other.info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value

    @builtins.property
    def resources(self):
        """Message field 'resources'."""
        return self._resources

    @resources.setter
    def resources(self, value):
        if __debug__:
            from isae_robot_skillset_interfaces.msg import ResourceState
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 all(isinstance(v, ResourceState) for v in value) and
                 True), \
                "The 'resources' field must be a set or sequence and each value of type 'ResourceState'"
        self._resources = value

    @builtins.property
    def skill_detect_target(self):
        """Message field 'skill_detect_target'."""
        return self._skill_detect_target

    @skill_detect_target.setter
    def skill_detect_target(self, value):
        if __debug__:
            from isae_robot_skillset_interfaces.msg import SkillDetectTargetStatus
            assert \
                isinstance(value, SkillDetectTargetStatus), \
                "The 'skill_detect_target' field must be a sub message of type 'SkillDetectTargetStatus'"
        self._skill_detect_target = value

    @builtins.property
    def skill_move_to(self):
        """Message field 'skill_move_to'."""
        return self._skill_move_to

    @skill_move_to.setter
    def skill_move_to(self, value):
        if __debug__:
            from isae_robot_skillset_interfaces.msg import SkillMoveToStatus
            assert \
                isinstance(value, SkillMoveToStatus), \
                "The 'skill_move_to' field must be a sub message of type 'SkillMoveToStatus'"
        self._skill_move_to = value

    @builtins.property
    def skill_take_picture(self):
        """Message field 'skill_take_picture'."""
        return self._skill_take_picture

    @skill_take_picture.setter
    def skill_take_picture(self, value):
        if __debug__:
            from isae_robot_skillset_interfaces.msg import SkillTakePictureStatus
            assert \
                isinstance(value, SkillTakePictureStatus), \
                "The 'skill_take_picture' field must be a sub message of type 'SkillTakePictureStatus'"
        self._skill_take_picture = value

    @builtins.property
    def skill_track_target(self):
        """Message field 'skill_track_target'."""
        return self._skill_track_target

    @skill_track_target.setter
    def skill_track_target(self, value):
        if __debug__:
            from isae_robot_skillset_interfaces.msg import SkillTrackTargetStatus
            assert \
                isinstance(value, SkillTrackTargetStatus), \
                "The 'skill_track_target' field must be a sub message of type 'SkillTrackTargetStatus'"
        self._skill_track_target = value

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value
