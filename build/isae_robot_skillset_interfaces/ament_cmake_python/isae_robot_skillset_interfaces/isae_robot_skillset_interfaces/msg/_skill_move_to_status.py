# generated from rosidl_generator_py/resource/_idl.py.em
# with input from isae_robot_skillset_interfaces:msg/SkillMoveToStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SkillMoveToStatus(type):
    """Metaclass of message 'SkillMoveToStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'READY': 0,
        'RUNNING': 1,
        'INTERRUPTING': 2,
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
                'isae_robot_skillset_interfaces.msg.SkillMoveToStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__skill_move_to_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__skill_move_to_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__skill_move_to_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__skill_move_to_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__skill_move_to_status

            from isae_robot_skillset_interfaces.msg import SkillMoveToInput
            if SkillMoveToInput.__class__._TYPE_SUPPORT is None:
                SkillMoveToInput.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'READY': cls.__constants['READY'],
            'RUNNING': cls.__constants['RUNNING'],
            'INTERRUPTING': cls.__constants['INTERRUPTING'],
        }

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_SkillMoveToStatus.__constants['READY']

    @property
    def RUNNING(self):
        """Message constant 'RUNNING'."""
        return Metaclass_SkillMoveToStatus.__constants['RUNNING']

    @property
    def INTERRUPTING(self):
        """Message constant 'INTERRUPTING'."""
        return Metaclass_SkillMoveToStatus.__constants['INTERRUPTING']


class SkillMoveToStatus(metaclass=Metaclass_SkillMoveToStatus):
    """
    Message class 'SkillMoveToStatus'.

    Constants:
      READY
      RUNNING
      INTERRUPTING
    """

    __slots__ = [
        '_name',
        '_id',
        '_state',
        '_input',
    ]

    _fields_and_field_types = {
        'name': 'string',
        'id': 'string',
        'state': 'uint8',
        'input': 'isae_robot_skillset_interfaces/SkillMoveToInput',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['isae_robot_skillset_interfaces', 'msg'], 'SkillMoveToInput'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.name = kwargs.get('name', str())
        self.id = kwargs.get('id', str())
        self.state = kwargs.get('state', int())
        from isae_robot_skillset_interfaces.msg import SkillMoveToInput
        self.input = kwargs.get('input', SkillMoveToInput())

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
        if self.name != other.name:
            return False
        if self.id != other.id:
            return False
        if self.state != other.state:
            return False
        if self.input != other.input:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'name' field must be of type 'str'"
        self._name = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'id' field must be of type 'str'"
        self._id = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property  # noqa: A003
    def input(self):  # noqa: A003
        """Message field 'input'."""
        return self._input

    @input.setter  # noqa: A003
    def input(self, value):  # noqa: A003
        if __debug__:
            from isae_robot_skillset_interfaces.msg import SkillMoveToInput
            assert \
                isinstance(value, SkillMoveToInput), \
                "The 'input' field must be a sub message of type 'SkillMoveToInput'"
        self._input = value
