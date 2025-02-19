# generated from rosidl_generator_py/resource/_idl.py.em
# with input from isae_robot_skillset_interfaces:msg/SkillTakePictureResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SkillTakePictureResponse(type):
    """Metaclass of message 'SkillTakePictureResponse'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SUCCESS': 0,
        'ALREADY_RUNNING': 1,
        'PRECONDITION_FAILURE': 2,
        'VALIDATE_FAILURE': 3,
        'START_FAILURE': 4,
        'INVARIANT_FAILURE': 5,
        'INTERRUPT': 6,
        'FAILURE': 7,
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
                'isae_robot_skillset_interfaces.msg.SkillTakePictureResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__skill_take_picture_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__skill_take_picture_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__skill_take_picture_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__skill_take_picture_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__skill_take_picture_response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SUCCESS': cls.__constants['SUCCESS'],
            'ALREADY_RUNNING': cls.__constants['ALREADY_RUNNING'],
            'PRECONDITION_FAILURE': cls.__constants['PRECONDITION_FAILURE'],
            'VALIDATE_FAILURE': cls.__constants['VALIDATE_FAILURE'],
            'START_FAILURE': cls.__constants['START_FAILURE'],
            'INVARIANT_FAILURE': cls.__constants['INVARIANT_FAILURE'],
            'INTERRUPT': cls.__constants['INTERRUPT'],
            'FAILURE': cls.__constants['FAILURE'],
        }

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_SkillTakePictureResponse.__constants['SUCCESS']

    @property
    def ALREADY_RUNNING(self):
        """Message constant 'ALREADY_RUNNING'."""
        return Metaclass_SkillTakePictureResponse.__constants['ALREADY_RUNNING']

    @property
    def PRECONDITION_FAILURE(self):
        """Message constant 'PRECONDITION_FAILURE'."""
        return Metaclass_SkillTakePictureResponse.__constants['PRECONDITION_FAILURE']

    @property
    def VALIDATE_FAILURE(self):
        """Message constant 'VALIDATE_FAILURE'."""
        return Metaclass_SkillTakePictureResponse.__constants['VALIDATE_FAILURE']

    @property
    def START_FAILURE(self):
        """Message constant 'START_FAILURE'."""
        return Metaclass_SkillTakePictureResponse.__constants['START_FAILURE']

    @property
    def INVARIANT_FAILURE(self):
        """Message constant 'INVARIANT_FAILURE'."""
        return Metaclass_SkillTakePictureResponse.__constants['INVARIANT_FAILURE']

    @property
    def INTERRUPT(self):
        """Message constant 'INTERRUPT'."""
        return Metaclass_SkillTakePictureResponse.__constants['INTERRUPT']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_SkillTakePictureResponse.__constants['FAILURE']


class SkillTakePictureResponse(metaclass=Metaclass_SkillTakePictureResponse):
    """
    Message class 'SkillTakePictureResponse'.

    Constants:
      SUCCESS
      ALREADY_RUNNING
      PRECONDITION_FAILURE
      VALIDATE_FAILURE
      START_FAILURE
      INVARIANT_FAILURE
      INTERRUPT
      FAILURE
    """

    __slots__ = [
        '_id',
        '_result',
        '_name',
        '_effect',
        '_postcondition',
    ]

    _fields_and_field_types = {
        'id': 'string',
        'result': 'uint8',
        'name': 'string',
        'effect': 'boolean',
        'postcondition': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.id = kwargs.get('id', str())
        self.result = kwargs.get('result', int())
        self.name = kwargs.get('name', str())
        self.effect = kwargs.get('effect', bool())
        self.postcondition = kwargs.get('postcondition', bool())

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
        if self.id != other.id:
            return False
        if self.result != other.result:
            return False
        if self.name != other.name:
            return False
        if self.effect != other.effect:
            return False
        if self.postcondition != other.postcondition:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

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
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value

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

    @builtins.property
    def effect(self):
        """Message field 'effect'."""
        return self._effect

    @effect.setter
    def effect(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'effect' field must be of type 'bool'"
        self._effect = value

    @builtins.property
    def postcondition(self):
        """Message field 'postcondition'."""
        return self._postcondition

    @postcondition.setter
    def postcondition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'postcondition' field must be of type 'bool'"
        self._postcondition = value
