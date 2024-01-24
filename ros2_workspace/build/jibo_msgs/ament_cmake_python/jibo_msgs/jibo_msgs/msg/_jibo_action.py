# generated from rosidl_generator_py/resource/_idl.py.em
# with input from jibo_msgs:msg/JiboAction.idl
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


class Metaclass_JiboAction(type):
    """Metaclass of message 'JiboAction'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ANIMTRANS_RESET': 0,
        'ANIMTRANS_KEEP_LASTFRAME': 1,
        'ATTENTION_MODE_OFF': 0,
        'ATTENTION_MODE_ON': 1,
        'EMOJI_SHARK': 'Emoji/Emoji_Shark_01_01.keys',
        'EMOJI_BEER': 'Emoji/Emoji_Beer_01_01.keys',
        'EMOJI_PARTY_PINK': 'Emoji/Emoji_PartyPink_01_01.keys',
        'EMOJI_PARTY_BLUE': 'Emoji/Emoji_PartyBlue_01_01.keys',
        'EMOJI_RAINCLOUD': 'Emoji/Emoji_RainCloud_01_01.keys',
        'RING_IN_ANIM': 'Misc/ring_in.keys',
        'HAPPY_GO_LUCKY_DANCE': 'Dances/Happy_Lucky_01_01.keys',
        'EYE_FIDGET': 'Misc/eye_fidget.keys',
        'LOOK_DOWN': 'Poses/Directional/Body_Look_Center_Down_01_01.keys',
        'DEFAULT': 'default.keys',
        'QUESTION_ANIM_AND_EMOJI': 'Misc/Question_01_02.keys',
        'HAPPY_ANIM_AND_SOUND': 'Misc/Eye_to_Happy_01.keys',
        'CELEBRATE_ANIM': 'Dances/Celebrate_01.keys',
        'LAUGH_ANIM': 'Misc/Laughter_01_03.keys',
        'SAD_ANIM_SHAKE_HEAD': 'Misc/Sad_03.keys',
        'RING_IN_SOUND': 'SFX_Global_CheckmarkButton.m4a',
        'LOOK_LEFT_RIGHT': 'Misc/checking_05_01.keys',
        'LOOK_DOWN_CENTER': 'Misc/embarassed_01_02.keys',
        'ROBOT_SILENT_NOD': 'silent/youre_welcome_02.keys',
        'ROBOT_SILENT_HAPPY_DANCE': 'Dances/Side_Shaker_01_01.keys',
        'ROBOT_SILENT_YES': 'silent/nod_twice_01.keys',
        'ROBOT_SILENT_PUZZLED': 'silent/confused_01.keys',
        'ROBOT_SILENT_FRUSTRATED': 'silent/frustrated_02.keys',
        'ROBOT_SILENT_SAD': 'silent/sad_03.keys',
        'ROBOT_SILENT_INTERESTED': 'silent/interested_02.keys',
        'ROBOT_SILENT_EXCITED': 'silent/excited_03.keys',
        'ROBOT_SAD': 'Misc/sad_02.keys',
        'ROBOT_UNSURE': 'Misc/thinking_06_02.keys',
        'ROBOT_COMFORT': 'Misc/relieved_01.keys',
        'ROBOT_ASK_HELP': 'Misc/puzzled_01_02.keys',
        'ROBOT_DISAPPOINTED': 'Misc/no_4.keys',
        'ROBOT_EXCITED': 'Misc/success_02.keys',
        'ROBOT_INTERESTED': 'Misc/interested_01.keys',
        'ROBOT_YES': 'Misc/yep_02.keys',
        'ROBOT_HAPPY_DANCE': 'Dances/dance_circuit_saver_00.keys',
        'ROBOT_CURIOUS': 'Misc/puzzled_02_02.keys',
        'ROBOT_ATTENTION': 'Misc/pose_forward.keys',
        'ROBOT_CELEBRATION': 'Dances/dance_disco_00.keys',
        'ROBOT_ENCOURAGING': 'Misc/greetings_9.keys',
        'ROBOT_WINK': 'Misc/eye_medium_blink_01.keys',
        'ROBOT_THINKING': 'Misc/thinking_08.keys',
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
                'jibo_msgs.msg.JiboAction')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__jibo_action
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__jibo_action
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__jibo_action
            cls._TYPE_SUPPORT = module.type_support_msg__msg__jibo_action
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__jibo_action

            from jibo_msgs.msg import JiboVec3
            if JiboVec3.__class__._TYPE_SUPPORT is None:
                JiboVec3.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ANIMTRANS_RESET': cls.__constants['ANIMTRANS_RESET'],
            'ANIMTRANS_KEEP_LASTFRAME': cls.__constants['ANIMTRANS_KEEP_LASTFRAME'],
            'ATTENTION_MODE_OFF': cls.__constants['ATTENTION_MODE_OFF'],
            'ATTENTION_MODE_ON': cls.__constants['ATTENTION_MODE_ON'],
            'EMOJI_SHARK': cls.__constants['EMOJI_SHARK'],
            'EMOJI_BEER': cls.__constants['EMOJI_BEER'],
            'EMOJI_PARTY_PINK': cls.__constants['EMOJI_PARTY_PINK'],
            'EMOJI_PARTY_BLUE': cls.__constants['EMOJI_PARTY_BLUE'],
            'EMOJI_RAINCLOUD': cls.__constants['EMOJI_RAINCLOUD'],
            'RING_IN_ANIM': cls.__constants['RING_IN_ANIM'],
            'HAPPY_GO_LUCKY_DANCE': cls.__constants['HAPPY_GO_LUCKY_DANCE'],
            'EYE_FIDGET': cls.__constants['EYE_FIDGET'],
            'LOOK_DOWN': cls.__constants['LOOK_DOWN'],
            'DEFAULT': cls.__constants['DEFAULT'],
            'QUESTION_ANIM_AND_EMOJI': cls.__constants['QUESTION_ANIM_AND_EMOJI'],
            'HAPPY_ANIM_AND_SOUND': cls.__constants['HAPPY_ANIM_AND_SOUND'],
            'CELEBRATE_ANIM': cls.__constants['CELEBRATE_ANIM'],
            'LAUGH_ANIM': cls.__constants['LAUGH_ANIM'],
            'SAD_ANIM_SHAKE_HEAD': cls.__constants['SAD_ANIM_SHAKE_HEAD'],
            'RING_IN_SOUND': cls.__constants['RING_IN_SOUND'],
            'LOOK_LEFT_RIGHT': cls.__constants['LOOK_LEFT_RIGHT'],
            'LOOK_DOWN_CENTER': cls.__constants['LOOK_DOWN_CENTER'],
            'ROBOT_SILENT_NOD': cls.__constants['ROBOT_SILENT_NOD'],
            'ROBOT_SILENT_HAPPY_DANCE': cls.__constants['ROBOT_SILENT_HAPPY_DANCE'],
            'ROBOT_SILENT_YES': cls.__constants['ROBOT_SILENT_YES'],
            'ROBOT_SILENT_PUZZLED': cls.__constants['ROBOT_SILENT_PUZZLED'],
            'ROBOT_SILENT_FRUSTRATED': cls.__constants['ROBOT_SILENT_FRUSTRATED'],
            'ROBOT_SILENT_SAD': cls.__constants['ROBOT_SILENT_SAD'],
            'ROBOT_SILENT_INTERESTED': cls.__constants['ROBOT_SILENT_INTERESTED'],
            'ROBOT_SILENT_EXCITED': cls.__constants['ROBOT_SILENT_EXCITED'],
            'ROBOT_SAD': cls.__constants['ROBOT_SAD'],
            'ROBOT_UNSURE': cls.__constants['ROBOT_UNSURE'],
            'ROBOT_COMFORT': cls.__constants['ROBOT_COMFORT'],
            'ROBOT_ASK_HELP': cls.__constants['ROBOT_ASK_HELP'],
            'ROBOT_DISAPPOINTED': cls.__constants['ROBOT_DISAPPOINTED'],
            'ROBOT_EXCITED': cls.__constants['ROBOT_EXCITED'],
            'ROBOT_INTERESTED': cls.__constants['ROBOT_INTERESTED'],
            'ROBOT_YES': cls.__constants['ROBOT_YES'],
            'ROBOT_HAPPY_DANCE': cls.__constants['ROBOT_HAPPY_DANCE'],
            'ROBOT_CURIOUS': cls.__constants['ROBOT_CURIOUS'],
            'ROBOT_ATTENTION': cls.__constants['ROBOT_ATTENTION'],
            'ROBOT_CELEBRATION': cls.__constants['ROBOT_CELEBRATION'],
            'ROBOT_ENCOURAGING': cls.__constants['ROBOT_ENCOURAGING'],
            'ROBOT_WINK': cls.__constants['ROBOT_WINK'],
            'ROBOT_THINKING': cls.__constants['ROBOT_THINKING'],
        }

    @property
    def ANIMTRANS_RESET(self):
        """Message constant 'ANIMTRANS_RESET'."""
        return Metaclass_JiboAction.__constants['ANIMTRANS_RESET']

    @property
    def ANIMTRANS_KEEP_LASTFRAME(self):
        """Message constant 'ANIMTRANS_KEEP_LASTFRAME'."""
        return Metaclass_JiboAction.__constants['ANIMTRANS_KEEP_LASTFRAME']

    @property
    def ATTENTION_MODE_OFF(self):
        """Message constant 'ATTENTION_MODE_OFF'."""
        return Metaclass_JiboAction.__constants['ATTENTION_MODE_OFF']

    @property
    def ATTENTION_MODE_ON(self):
        """Message constant 'ATTENTION_MODE_ON'."""
        return Metaclass_JiboAction.__constants['ATTENTION_MODE_ON']

    @property
    def EMOJI_SHARK(self):
        """Message constant 'EMOJI_SHARK'."""
        return Metaclass_JiboAction.__constants['EMOJI_SHARK']

    @property
    def EMOJI_BEER(self):
        """Message constant 'EMOJI_BEER'."""
        return Metaclass_JiboAction.__constants['EMOJI_BEER']

    @property
    def EMOJI_PARTY_PINK(self):
        """Message constant 'EMOJI_PARTY_PINK'."""
        return Metaclass_JiboAction.__constants['EMOJI_PARTY_PINK']

    @property
    def EMOJI_PARTY_BLUE(self):
        """Message constant 'EMOJI_PARTY_BLUE'."""
        return Metaclass_JiboAction.__constants['EMOJI_PARTY_BLUE']

    @property
    def EMOJI_RAINCLOUD(self):
        """Message constant 'EMOJI_RAINCLOUD'."""
        return Metaclass_JiboAction.__constants['EMOJI_RAINCLOUD']

    @property
    def RING_IN_ANIM(self):
        """Message constant 'RING_IN_ANIM'."""
        return Metaclass_JiboAction.__constants['RING_IN_ANIM']

    @property
    def HAPPY_GO_LUCKY_DANCE(self):
        """Message constant 'HAPPY_GO_LUCKY_DANCE'."""
        return Metaclass_JiboAction.__constants['HAPPY_GO_LUCKY_DANCE']

    @property
    def EYE_FIDGET(self):
        """Message constant 'EYE_FIDGET'."""
        return Metaclass_JiboAction.__constants['EYE_FIDGET']

    @property
    def LOOK_DOWN(self):
        """Message constant 'LOOK_DOWN'."""
        return Metaclass_JiboAction.__constants['LOOK_DOWN']

    @property
    def DEFAULT(self):
        """Message constant 'DEFAULT'."""
        return Metaclass_JiboAction.__constants['DEFAULT']

    @property
    def QUESTION_ANIM_AND_EMOJI(self):
        """Message constant 'QUESTION_ANIM_AND_EMOJI'."""
        return Metaclass_JiboAction.__constants['QUESTION_ANIM_AND_EMOJI']

    @property
    def HAPPY_ANIM_AND_SOUND(self):
        """Message constant 'HAPPY_ANIM_AND_SOUND'."""
        return Metaclass_JiboAction.__constants['HAPPY_ANIM_AND_SOUND']

    @property
    def CELEBRATE_ANIM(self):
        """Message constant 'CELEBRATE_ANIM'."""
        return Metaclass_JiboAction.__constants['CELEBRATE_ANIM']

    @property
    def LAUGH_ANIM(self):
        """Message constant 'LAUGH_ANIM'."""
        return Metaclass_JiboAction.__constants['LAUGH_ANIM']

    @property
    def SAD_ANIM_SHAKE_HEAD(self):
        """Message constant 'SAD_ANIM_SHAKE_HEAD'."""
        return Metaclass_JiboAction.__constants['SAD_ANIM_SHAKE_HEAD']

    @property
    def RING_IN_SOUND(self):
        """Message constant 'RING_IN_SOUND'."""
        return Metaclass_JiboAction.__constants['RING_IN_SOUND']

    @property
    def LOOK_LEFT_RIGHT(self):
        """Message constant 'LOOK_LEFT_RIGHT'."""
        return Metaclass_JiboAction.__constants['LOOK_LEFT_RIGHT']

    @property
    def LOOK_DOWN_CENTER(self):
        """Message constant 'LOOK_DOWN_CENTER'."""
        return Metaclass_JiboAction.__constants['LOOK_DOWN_CENTER']

    @property
    def ROBOT_SILENT_NOD(self):
        """Message constant 'ROBOT_SILENT_NOD'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_NOD']

    @property
    def ROBOT_SILENT_HAPPY_DANCE(self):
        """Message constant 'ROBOT_SILENT_HAPPY_DANCE'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_HAPPY_DANCE']

    @property
    def ROBOT_SILENT_YES(self):
        """Message constant 'ROBOT_SILENT_YES'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_YES']

    @property
    def ROBOT_SILENT_PUZZLED(self):
        """Message constant 'ROBOT_SILENT_PUZZLED'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_PUZZLED']

    @property
    def ROBOT_SILENT_FRUSTRATED(self):
        """Message constant 'ROBOT_SILENT_FRUSTRATED'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_FRUSTRATED']

    @property
    def ROBOT_SILENT_SAD(self):
        """Message constant 'ROBOT_SILENT_SAD'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_SAD']

    @property
    def ROBOT_SILENT_INTERESTED(self):
        """Message constant 'ROBOT_SILENT_INTERESTED'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_INTERESTED']

    @property
    def ROBOT_SILENT_EXCITED(self):
        """Message constant 'ROBOT_SILENT_EXCITED'."""
        return Metaclass_JiboAction.__constants['ROBOT_SILENT_EXCITED']

    @property
    def ROBOT_SAD(self):
        """Message constant 'ROBOT_SAD'."""
        return Metaclass_JiboAction.__constants['ROBOT_SAD']

    @property
    def ROBOT_UNSURE(self):
        """Message constant 'ROBOT_UNSURE'."""
        return Metaclass_JiboAction.__constants['ROBOT_UNSURE']

    @property
    def ROBOT_COMFORT(self):
        """Message constant 'ROBOT_COMFORT'."""
        return Metaclass_JiboAction.__constants['ROBOT_COMFORT']

    @property
    def ROBOT_ASK_HELP(self):
        """Message constant 'ROBOT_ASK_HELP'."""
        return Metaclass_JiboAction.__constants['ROBOT_ASK_HELP']

    @property
    def ROBOT_DISAPPOINTED(self):
        """Message constant 'ROBOT_DISAPPOINTED'."""
        return Metaclass_JiboAction.__constants['ROBOT_DISAPPOINTED']

    @property
    def ROBOT_EXCITED(self):
        """Message constant 'ROBOT_EXCITED'."""
        return Metaclass_JiboAction.__constants['ROBOT_EXCITED']

    @property
    def ROBOT_INTERESTED(self):
        """Message constant 'ROBOT_INTERESTED'."""
        return Metaclass_JiboAction.__constants['ROBOT_INTERESTED']

    @property
    def ROBOT_YES(self):
        """Message constant 'ROBOT_YES'."""
        return Metaclass_JiboAction.__constants['ROBOT_YES']

    @property
    def ROBOT_HAPPY_DANCE(self):
        """Message constant 'ROBOT_HAPPY_DANCE'."""
        return Metaclass_JiboAction.__constants['ROBOT_HAPPY_DANCE']

    @property
    def ROBOT_CURIOUS(self):
        """Message constant 'ROBOT_CURIOUS'."""
        return Metaclass_JiboAction.__constants['ROBOT_CURIOUS']

    @property
    def ROBOT_ATTENTION(self):
        """Message constant 'ROBOT_ATTENTION'."""
        return Metaclass_JiboAction.__constants['ROBOT_ATTENTION']

    @property
    def ROBOT_CELEBRATION(self):
        """Message constant 'ROBOT_CELEBRATION'."""
        return Metaclass_JiboAction.__constants['ROBOT_CELEBRATION']

    @property
    def ROBOT_ENCOURAGING(self):
        """Message constant 'ROBOT_ENCOURAGING'."""
        return Metaclass_JiboAction.__constants['ROBOT_ENCOURAGING']

    @property
    def ROBOT_WINK(self):
        """Message constant 'ROBOT_WINK'."""
        return Metaclass_JiboAction.__constants['ROBOT_WINK']

    @property
    def ROBOT_THINKING(self):
        """Message constant 'ROBOT_THINKING'."""
        return Metaclass_JiboAction.__constants['ROBOT_THINKING']


class JiboAction(metaclass=Metaclass_JiboAction):
    """
    Message class 'JiboAction'.

    Constants:
      ANIMTRANS_RESET
      ANIMTRANS_KEEP_LASTFRAME
      ATTENTION_MODE_OFF
      ATTENTION_MODE_ON
      EMOJI_SHARK
      EMOJI_BEER
      EMOJI_PARTY_PINK
      EMOJI_PARTY_BLUE
      EMOJI_RAINCLOUD
      RING_IN_ANIM
      HAPPY_GO_LUCKY_DANCE
      EYE_FIDGET
      LOOK_DOWN
      DEFAULT
      QUESTION_ANIM_AND_EMOJI
      HAPPY_ANIM_AND_SOUND
      CELEBRATE_ANIM
      LAUGH_ANIM
      SAD_ANIM_SHAKE_HEAD
      RING_IN_SOUND
      LOOK_LEFT_RIGHT
      LOOK_DOWN_CENTER
      ROBOT_SILENT_NOD
      ROBOT_SILENT_HAPPY_DANCE
      ROBOT_SILENT_YES
      ROBOT_SILENT_PUZZLED
      ROBOT_SILENT_FRUSTRATED
      ROBOT_SILENT_SAD
      ROBOT_SILENT_INTERESTED
      ROBOT_SILENT_EXCITED
      ROBOT_SAD
      ROBOT_UNSURE
      ROBOT_COMFORT
      ROBOT_ASK_HELP
      ROBOT_DISAPPOINTED
      ROBOT_EXCITED
      ROBOT_INTERESTED
      ROBOT_YES
      ROBOT_HAPPY_DANCE
      ROBOT_CURIOUS
      ROBOT_ATTENTION
      ROBOT_CELEBRATION
      ROBOT_ENCOURAGING
      ROBOT_WINK
      ROBOT_THINKING
    """

    __slots__ = [
        '_header',
        '_do_motion',
        '_motion',
        '_do_lookat',
        '_lookat',
        '_do_tts',
        '_tts_text',
        '_do_mim',
        '_mim_body',
        '_mim_rule',
        '_do_sound_playback',
        '_audio_filename',
        '_led_color',
        '_do_volume',
        '_volume',
        '_do_anim_transition',
        '_anim_transition',
        '_do_attention_mode',
        '_attention_mode',
        '_tts_duration_stretch',
        '_tts_pitch',
        '_check_fields',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'do_motion': 'boolean',
        'motion': 'string',
        'do_lookat': 'boolean',
        'lookat': 'jibo_msgs/JiboVec3',
        'do_tts': 'boolean',
        'tts_text': 'string',
        'do_mim': 'boolean',
        'mim_body': 'string',
        'mim_rule': 'string',
        'do_sound_playback': 'boolean',
        'audio_filename': 'string',
        'led_color': 'jibo_msgs/JiboVec3',
        'do_volume': 'boolean',
        'volume': 'float',
        'do_anim_transition': 'boolean',
        'anim_transition': 'int8',
        'do_attention_mode': 'boolean',
        'attention_mode': 'int8',
        'tts_duration_stretch': 'float',
        'tts_pitch': 'float',
    }

    # This attribute is used to store an rosidl_parser.definition variable
    # related to the data type of each of the components the message.
    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jibo_msgs', 'msg'], 'JiboVec3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['jibo_msgs', 'msg'], 'JiboVec3'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.do_motion = kwargs.get('do_motion', bool())
        self.motion = kwargs.get('motion', str())
        self.do_lookat = kwargs.get('do_lookat', bool())
        from jibo_msgs.msg import JiboVec3
        self.lookat = kwargs.get('lookat', JiboVec3())
        self.do_tts = kwargs.get('do_tts', bool())
        self.tts_text = kwargs.get('tts_text', str())
        self.do_mim = kwargs.get('do_mim', bool())
        self.mim_body = kwargs.get('mim_body', str())
        self.mim_rule = kwargs.get('mim_rule', str())
        self.do_sound_playback = kwargs.get('do_sound_playback', bool())
        self.audio_filename = kwargs.get('audio_filename', str())
        from jibo_msgs.msg import JiboVec3
        self.led_color = kwargs.get('led_color', JiboVec3())
        self.do_volume = kwargs.get('do_volume', bool())
        self.volume = kwargs.get('volume', float())
        self.do_anim_transition = kwargs.get('do_anim_transition', bool())
        self.anim_transition = kwargs.get('anim_transition', int())
        self.do_attention_mode = kwargs.get('do_attention_mode', bool())
        self.attention_mode = kwargs.get('attention_mode', int())
        self.tts_duration_stretch = kwargs.get('tts_duration_stretch', float())
        self.tts_pitch = kwargs.get('tts_pitch', float())

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
        if self.do_motion != other.do_motion:
            return False
        if self.motion != other.motion:
            return False
        if self.do_lookat != other.do_lookat:
            return False
        if self.lookat != other.lookat:
            return False
        if self.do_tts != other.do_tts:
            return False
        if self.tts_text != other.tts_text:
            return False
        if self.do_mim != other.do_mim:
            return False
        if self.mim_body != other.mim_body:
            return False
        if self.mim_rule != other.mim_rule:
            return False
        if self.do_sound_playback != other.do_sound_playback:
            return False
        if self.audio_filename != other.audio_filename:
            return False
        if self.led_color != other.led_color:
            return False
        if self.do_volume != other.do_volume:
            return False
        if self.volume != other.volume:
            return False
        if self.do_anim_transition != other.do_anim_transition:
            return False
        if self.anim_transition != other.anim_transition:
            return False
        if self.do_attention_mode != other.do_attention_mode:
            return False
        if self.attention_mode != other.attention_mode:
            return False
        if self.tts_duration_stretch != other.tts_duration_stretch:
            return False
        if self.tts_pitch != other.tts_pitch:
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
    def do_motion(self):
        """Message field 'do_motion'."""
        return self._do_motion

    @do_motion.setter
    def do_motion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_motion' field must be of type 'bool'"
        self._do_motion = value

    @builtins.property
    def motion(self):
        """Message field 'motion'."""
        return self._motion

    @motion.setter
    def motion(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'motion' field must be of type 'str'"
        self._motion = value

    @builtins.property
    def do_lookat(self):
        """Message field 'do_lookat'."""
        return self._do_lookat

    @do_lookat.setter
    def do_lookat(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_lookat' field must be of type 'bool'"
        self._do_lookat = value

    @builtins.property
    def lookat(self):
        """Message field 'lookat'."""
        return self._lookat

    @lookat.setter
    def lookat(self, value):
        if self._check_fields:
            from jibo_msgs.msg import JiboVec3
            assert \
                isinstance(value, JiboVec3), \
                "The 'lookat' field must be a sub message of type 'JiboVec3'"
        self._lookat = value

    @builtins.property
    def do_tts(self):
        """Message field 'do_tts'."""
        return self._do_tts

    @do_tts.setter
    def do_tts(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_tts' field must be of type 'bool'"
        self._do_tts = value

    @builtins.property
    def tts_text(self):
        """Message field 'tts_text'."""
        return self._tts_text

    @tts_text.setter
    def tts_text(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'tts_text' field must be of type 'str'"
        self._tts_text = value

    @builtins.property
    def do_mim(self):
        """Message field 'do_mim'."""
        return self._do_mim

    @do_mim.setter
    def do_mim(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_mim' field must be of type 'bool'"
        self._do_mim = value

    @builtins.property
    def mim_body(self):
        """Message field 'mim_body'."""
        return self._mim_body

    @mim_body.setter
    def mim_body(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mim_body' field must be of type 'str'"
        self._mim_body = value

    @builtins.property
    def mim_rule(self):
        """Message field 'mim_rule'."""
        return self._mim_rule

    @mim_rule.setter
    def mim_rule(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'mim_rule' field must be of type 'str'"
        self._mim_rule = value

    @builtins.property
    def do_sound_playback(self):
        """Message field 'do_sound_playback'."""
        return self._do_sound_playback

    @do_sound_playback.setter
    def do_sound_playback(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_sound_playback' field must be of type 'bool'"
        self._do_sound_playback = value

    @builtins.property
    def audio_filename(self):
        """Message field 'audio_filename'."""
        return self._audio_filename

    @audio_filename.setter
    def audio_filename(self, value):
        if self._check_fields:
            assert \
                isinstance(value, str), \
                "The 'audio_filename' field must be of type 'str'"
        self._audio_filename = value

    @builtins.property
    def led_color(self):
        """Message field 'led_color'."""
        return self._led_color

    @led_color.setter
    def led_color(self, value):
        if self._check_fields:
            from jibo_msgs.msg import JiboVec3
            assert \
                isinstance(value, JiboVec3), \
                "The 'led_color' field must be a sub message of type 'JiboVec3'"
        self._led_color = value

    @builtins.property
    def do_volume(self):
        """Message field 'do_volume'."""
        return self._do_volume

    @do_volume.setter
    def do_volume(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_volume' field must be of type 'bool'"
        self._do_volume = value

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
    def do_anim_transition(self):
        """Message field 'do_anim_transition'."""
        return self._do_anim_transition

    @do_anim_transition.setter
    def do_anim_transition(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_anim_transition' field must be of type 'bool'"
        self._do_anim_transition = value

    @builtins.property
    def anim_transition(self):
        """Message field 'anim_transition'."""
        return self._anim_transition

    @anim_transition.setter
    def anim_transition(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'anim_transition' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'anim_transition' field must be an integer in [-128, 127]"
        self._anim_transition = value

    @builtins.property
    def do_attention_mode(self):
        """Message field 'do_attention_mode'."""
        return self._do_attention_mode

    @do_attention_mode.setter
    def do_attention_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, bool), \
                "The 'do_attention_mode' field must be of type 'bool'"
        self._do_attention_mode = value

    @builtins.property
    def attention_mode(self):
        """Message field 'attention_mode'."""
        return self._attention_mode

    @attention_mode.setter
    def attention_mode(self, value):
        if self._check_fields:
            assert \
                isinstance(value, int), \
                "The 'attention_mode' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'attention_mode' field must be an integer in [-128, 127]"
        self._attention_mode = value

    @builtins.property
    def tts_duration_stretch(self):
        """Message field 'tts_duration_stretch'."""
        return self._tts_duration_stretch

    @tts_duration_stretch.setter
    def tts_duration_stretch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tts_duration_stretch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tts_duration_stretch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tts_duration_stretch = value

    @builtins.property
    def tts_pitch(self):
        """Message field 'tts_pitch'."""
        return self._tts_pitch

    @tts_pitch.setter
    def tts_pitch(self, value):
        if self._check_fields:
            assert \
                isinstance(value, float), \
                "The 'tts_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tts_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tts_pitch = value
