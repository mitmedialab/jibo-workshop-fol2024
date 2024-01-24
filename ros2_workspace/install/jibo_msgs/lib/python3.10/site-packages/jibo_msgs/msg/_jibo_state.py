# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jibo_msgs:msg/JiboState.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JiboState(type):
    """Metaclass of message 'JiboState'."""

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
            module = import_type_support('jibo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'jibo_msgs.msg.JiboState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__jibo_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__jibo_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__jibo_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__jibo_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__jibo_state

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class JiboState(metaclass=Metaclass_JiboState):
    """Message class 'JiboState'."""

    __slots__ = [
        '_header',
        '_in_motion',
        '_audio',
        '_tts_msg',
        '_volume',
        '_doing_motion',
        '_is_playing_sound',
        '_is_listening',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'in_motion': 'string',
        'audio': 'string',
        'tts_msg': 'string',
        'volume': 'float',
        'doing_motion': 'boolean',
        'is_playing_sound': 'boolean',
        'is_listening': 'boolean',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        if 'check_fields' in kwargs:
            self._check_fields = kwargs['check_fields']
        else:
            self._check_fields = ros_python_check_fields == '1'
        if self._check_fields:
            assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
                'Invalid arguments passed to constructor: %s' % \
                ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.in_motion = kwargs.get('in_motion', str())
        self.audio = kwargs.get('audio', str())
        self.tts_msg = kwargs.get('tts_msg', str())
        self.volume = kwargs.get('volume', float())
        self.doing_motion = kwargs.get('doing_motion', bool())
        self.is_playing_sound = kwargs.get('is_playing_sound', bool())
        self.is_listening = kwargs.get('is_listening', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.get_fields_and_field_types().keys(), self.SLOT_TYPES):
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
                    if self._check_fields:
                        assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.header != other.header:
            return False
        if self.in_motion != other.in_motion:
            return False
        if self.audio != other.audio:
            return False
        if self.tts_msg != other.tts_msg:
            return False
        if self.volume != other.volume:
            return False
        if self.doing_motion != other.doing_motion:
            return False
        if self.is_playing_sound != other.is_playing_sound:
            return False
        if self.is_listening != other.is_listening:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if self._check_fields:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def in_motion(self):
        """Message field 'in_motion'."""
        return self._in_motion

    @in_motion.setter
    def in_motion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'in_motion' field must be of type 'str'"
        self._in_motion = value

    @builtins.property
    def audio(self):
        """Message field 'audio'."""
        return self._audio

    @audio.setter
    def audio(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'audio' field must be of type 'str'"
        self._audio = value

    @builtins.property
    def tts_msg(self):
        """Message field 'tts_msg'."""
        return self._tts_msg

    @tts_msg.setter
    def tts_msg(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'tts_msg' field must be of type 'str'"
        self._tts_msg = value

    @builtins.property
    def volume(self):
        """Message field 'volume'."""
        return self._volume

    @volume.setter
    def volume(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'volume' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'volume' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._volume = value

    @builtins.property
    def doing_motion(self):
        """Message field 'doing_motion'."""
        return self._doing_motion

    @doing_motion.setter
    def doing_motion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'doing_motion' field must be of type 'bool'"
        self._doing_motion = value

    @builtins.property
    def is_playing_sound(self):
        """Message field 'is_playing_sound'."""
        return self._is_playing_sound

    @is_playing_sound.setter
    def is_playing_sound(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_playing_sound' field must be of type 'bool'"
        self._is_playing_sound = value

    @builtins.property
    def is_listening(self):
        """Message field 'is_listening'."""
        return self._is_listening

    @is_listening.setter
    def is_listening(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'is_listening' field must be of type 'bool'"
        self._is_listening = value
