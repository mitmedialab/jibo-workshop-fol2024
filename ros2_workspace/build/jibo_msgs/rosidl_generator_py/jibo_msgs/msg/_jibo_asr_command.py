# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jibo_msgs:msg/JiboAsrCommand.idl
# generated code does not contain a copyright notice

# This is being done at the module level and not on the instance level to avoid looking
# for the same variable multiple times on each instance. This variable is not supposed to
# change during runtime so it makes sense to only look for it once.
from os import getenv

ros_python_check_fields = getenv('ROS_PYTHON_CHECK_FIELDS', default='')


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_JiboAsrCommand(type):
    """Metaclass of message 'JiboAsrCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STOP': 0,
        'START': 1,
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
                'jibo_msgs.msg.JiboAsrCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__jibo_asr_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__jibo_asr_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__jibo_asr_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__jibo_asr_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__jibo_asr_command

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STOP': cls.__constants['STOP'],
            'START': cls.__constants['START'],
        }

    @property
    def STOP(self):
        """Message constant 'STOP'."""
        return Metaclass_JiboAsrCommand.__constants['STOP']

    @property
    def START(self):
        """Message constant 'START'."""
        return Metaclass_JiboAsrCommand.__constants['START']


class JiboAsrCommand(metaclass=Metaclass_JiboAsrCommand):
    """
    Message class 'JiboAsrCommand'.

    Constants:
      STOP
      START
    """

    __slots__ = [
        '_header',
        '_heyjibo',
        '_continuous',
        '_incremental',
        '_alternatives',
        '_detectend',
        '_rule',
        '_command',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'heyjibo': 'boolean',
        'continuous': 'boolean',
        'incremental': 'boolean',
        'alternatives': 'boolean',
        'detectend': 'boolean',
        'rule': 'string',
        'command': 'int8',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
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
        self.heyjibo = kwargs.get('heyjibo', bool())
        self.continuous = kwargs.get('continuous', bool())
        self.incremental = kwargs.get('incremental', bool())
        self.alternatives = kwargs.get('alternatives', bool())
        self.detectend = kwargs.get('detectend', bool())
        self.rule = kwargs.get('rule', str())
        self.command = kwargs.get('command', int())

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
        if self.heyjibo != other.heyjibo:
            return False
        if self.continuous != other.continuous:
            return False
        if self.incremental != other.incremental:
            return False
        if self.alternatives != other.alternatives:
            return False
        if self.detectend != other.detectend:
            return False
        if self.rule != other.rule:
            return False
        if self.command != other.command:
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
    def continuous(self):
        """Message field 'continuous'."""
        return self._continuous

    @continuous.setter
    def continuous(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'continuous' field must be of type 'bool'"
        self._continuous = value

    @builtins.property
    def incremental(self):
        """Message field 'incremental'."""
        return self._incremental

    @incremental.setter
    def incremental(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'incremental' field must be of type 'bool'"
        self._incremental = value

    @builtins.property
    def alternatives(self):
        """Message field 'alternatives'."""
        return self._alternatives

    @alternatives.setter
    def alternatives(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'alternatives' field must be of type 'bool'"
        self._alternatives = value

    @builtins.property
    def detectend(self):
        """Message field 'detectend'."""
        return self._detectend

    @detectend.setter
    def detectend(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'detectend' field must be of type 'bool'"
        self._detectend = value

    @builtins.property
    def rule(self):
        """Message field 'rule'."""
        return self._rule

    @rule.setter
    def rule(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'rule' field must be of type 'str'"
        self._rule = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'command' field must be an integer in [-128, 127]"
        self._command = value
