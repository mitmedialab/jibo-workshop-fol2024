# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jibo_msgs:msg/JiboAsrResult.idl
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


class Metaclass_JiboAsrResult(type):
    """Metaclass of message 'JiboAsrResult'."""

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
                'jibo_msgs.msg.JiboAsrResult')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__jibo_asr_result
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__jibo_asr_result
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__jibo_asr_result
            cls._TYPE_SUPPORT = module.type_support_msg__msg__jibo_asr_result
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__jibo_asr_result

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


class JiboAsrResult(metaclass=Metaclass_JiboAsrResult):
    """Message class 'JiboAsrResult'."""

    __slots__ = [
        '_header',
        '_transcription',
        '_heyjibo',
        '_confidence',
        '_heuristic_score',
        '_slotaction',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'transcription': 'string',
        'heyjibo': 'boolean',
        'confidence': 'double',
        'heuristic_score': 'double',
        'slotaction': 'string',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
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
        self.transcription = kwargs.get('transcription', str())
        self.heyjibo = kwargs.get('heyjibo', bool())
        self.confidence = kwargs.get('confidence', float())
        self.heuristic_score = kwargs.get('heuristic_score', float())
        self.slotaction = kwargs.get('slotaction', str())

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
        if self.transcription != other.transcription:
            return False
        if self.heyjibo != other.heyjibo:
            return False
        if self.confidence != other.confidence:
            return False
        if self.heuristic_score != other.heuristic_score:
            return False
        if self.slotaction != other.slotaction:
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
    def transcription(self):
        """Message field 'transcription'."""
        return self._transcription

    @transcription.setter
    def transcription(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'transcription' field must be of type 'str'"
        self._transcription = value

    @builtins.property
    def heyjibo(self):
        """Message field 'heyjibo'."""
        return self._heyjibo

    @heyjibo.setter
    def heyjibo(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'heyjibo' field must be of type 'bool'"
        self._heyjibo = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'confidence' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._confidence = value

    @builtins.property
    def heuristic_score(self):
        """Message field 'heuristic_score'."""
        return self._heuristic_score

    @heuristic_score.setter
    def heuristic_score(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'heuristic_score' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'heuristic_score' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._heuristic_score = value

    @builtins.property
    def slotaction(self):
        """Message field 'slotaction'."""
        return self._slotaction

    @slotaction.setter
    def slotaction(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'slotaction' field must be of type 'str'"
        self._slotaction = value
