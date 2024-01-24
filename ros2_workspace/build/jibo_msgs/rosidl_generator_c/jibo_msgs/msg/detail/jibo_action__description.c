// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice

#include "jibo_msgs/msg/detail/jibo_action__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
const rosidl_type_hash_t *
jibo_msgs__msg__JiboAction__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1e, 0x0e, 0x35, 0xbe, 0xe5, 0x7a, 0xb1, 0x03,
      0xa4, 0xdd, 0xde, 0x66, 0x3b, 0x7a, 0x33, 0x1f,
      0x62, 0x12, 0xe8, 0xf9, 0x70, 0x7a, 0x2e, 0x0a,
      0x8d, 0xa2, 0x6b, 0xc8, 0x47, 0xdf, 0xf6, 0xaa,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "jibo_msgs/msg/detail/jibo_vec3__functions.h"
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "std_msgs/msg/detail/header__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t jibo_msgs__msg__JiboVec3__EXPECTED_HASH = {1, {
    0x0f, 0x2b, 0xfe, 0xdf, 0xff, 0xf0, 0x56, 0x6c,
    0xef, 0x3d, 0x4c, 0xbe, 0xcf, 0xdc, 0x2f, 0xd6,
    0x89, 0x4f, 0x25, 0xbf, 0xfc, 0xfd, 0xfc, 0xfe,
    0x1e, 0x13, 0x1b, 0x40, 0x33, 0xbf, 0x19, 0x19,
  }};
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char jibo_msgs__msg__JiboAction__TYPE_NAME[] = "jibo_msgs/msg/JiboAction";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char jibo_msgs__msg__JiboVec3__TYPE_NAME[] = "jibo_msgs/msg/JiboVec3";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char jibo_msgs__msg__JiboAction__FIELD_NAME__header[] = "header";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_motion[] = "do_motion";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__motion[] = "motion";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_lookat[] = "do_lookat";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__lookat[] = "lookat";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_tts[] = "do_tts";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__tts_text[] = "tts_text";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_mim[] = "do_mim";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__mim_body[] = "mim_body";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__mim_rule[] = "mim_rule";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_sound_playback[] = "do_sound_playback";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__audio_filename[] = "audio_filename";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__led_color[] = "led_color";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_volume[] = "do_volume";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__volume[] = "volume";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_anim_transition[] = "do_anim_transition";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__anim_transition[] = "anim_transition";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__do_attention_mode[] = "do_attention_mode";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__attention_mode[] = "attention_mode";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__tts_duration_stretch[] = "tts_duration_stretch";
static char jibo_msgs__msg__JiboAction__FIELD_NAME__tts_pitch[] = "tts_pitch";

static rosidl_runtime_c__type_description__Field jibo_msgs__msg__JiboAction__FIELDS[] = {
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_motion, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__motion, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_lookat, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__lookat, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {jibo_msgs__msg__JiboVec3__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_tts, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__tts_text, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_mim, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__mim_body, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__mim_rule, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_sound_playback, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__audio_filename, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__led_color, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {jibo_msgs__msg__JiboVec3__TYPE_NAME, 22, 22},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_volume, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__volume, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_anim_transition, 18, 18},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__anim_transition, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__do_attention_mode, 17, 17},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__attention_mode, 14, 14},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__tts_duration_stretch, 20, 20},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAction__FIELD_NAME__tts_pitch, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription jibo_msgs__msg__JiboAction__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboVec3__TYPE_NAME, 22, 22},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
jibo_msgs__msg__JiboAction__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {jibo_msgs__msg__JiboAction__TYPE_NAME, 24, 24},
      {jibo_msgs__msg__JiboAction__FIELDS, 21, 21},
    },
    {jibo_msgs__msg__JiboAction__REFERENCED_TYPE_DESCRIPTIONS, 3, 3},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&jibo_msgs__msg__JiboVec3__EXPECTED_HASH, jibo_msgs__msg__JiboVec3__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = jibo_msgs__msg__JiboVec3__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "#\n"
  "# Message for requesting actions of Jibo controller\n"
  "#\n"
  "\n"
  "std_msgs/Header header\n"
  "bool do_motion\n"
  "string motion  # use constants defined below\n"
  "\n"
  "bool do_lookat\n"
  "jibo_msgs/JiboVec3 lookat\n"
  "\n"
  "bool do_tts\n"
  "string tts_text\n"
  "\n"
  "bool do_mim\n"
  "string mim_body\n"
  "string mim_rule\n"
  "\n"
  "bool do_sound_playback\n"
  "string audio_filename\n"
  "\n"
  "#bool do_led\n"
  "JiboVec3 led_color\n"
  "\n"
  "bool do_volume\n"
  "float32 volume\n"
  "\n"
  "bool do_anim_transition\n"
  "int8 anim_transition\n"
  "\n"
  "bool do_attention_mode\n"
  "int8 attention_mode\n"
  "#\n"
  "# TTS Options\n"
  "#\n"
  "float32 tts_duration_stretch # Multiplier, so 2.0 = twice as slow, .5 = twice as fast\n"
  "float32 tts_pitch # Valid range is 0.2 - 0.8\n"
  "\n"
  "#\n"
  "# Anim Transition Constants\n"
  "#\n"
  "int8 ANIMTRANS_RESET = 0\n"
  "int8 ANIMTRANS_KEEP_LASTFRAME = 1\n"
  "\n"
  "# Attention Mode Transition Constants\n"
  "#\n"
  "int8 ATTENTION_MODE_OFF = 0 # This does not completely turn off Jibo\\'s attention mode, but puts it in \"COMMAND\" mode. It will still react to Hey Jibo and attend to the sound source.\n"
  "int8 ATTENTION_MODE_ON = 1 # This puts Jibo back to \"ENGAGED\" mode.\n"
  "\n"
  "#\n"
  "# Animation Constants\n"
  "#\n"
  "\n"
  "string EMOJI_SHARK = Emoji/Emoji_Shark_01_01.keys\n"
  "string EMOJI_BEER = Emoji/Emoji_Beer_01_01.keys\n"
  "string EMOJI_PARTY_PINK = Emoji/Emoji_PartyPink_01_01.keys\n"
  "string EMOJI_PARTY_BLUE = Emoji/Emoji_PartyBlue_01_01.keys\n"
  "string EMOJI_RAINCLOUD = Emoji/Emoji_RainCloud_01_01.keys\n"
  "\n"
  "string RING_IN_ANIM = Misc/ring_in.keys\n"
  "string HAPPY_GO_LUCKY_DANCE = Dances/Happy_Lucky_01_01.keys\n"
  "string EYE_FIDGET = Misc/eye_fidget.keys\n"
  "string LOOK_DOWN = Poses/Directional/Body_Look_Center_Down_01_01.keys\n"
  "string DEFAULT = default.keys\n"
  "\n"
  "# Animations for interactive storybook.\n"
  "string QUESTION_ANIM_AND_EMOJI = Misc/Question_01_02.keys\n"
  "string HAPPY_ANIM_AND_SOUND = Misc/Eye_to_Happy_01.keys\n"
  "string CELEBRATE_ANIM = Dances/Celebrate_01.keys\n"
  "string LAUGH_ANIM = Misc/Laughter_01_03.keys\n"
  "string SAD_ANIM_SHAKE_HEAD = Misc/Sad_03.keys\n"
  "\n"
  "#\n"
  "# Motion Constants\n"
  "#\n"
  "string RING_IN_SOUND = SFX_Global_CheckmarkButton.m4a\n"
  "\n"
  "#\n"
  "# Animations for iSpy Game\n"
  "#\n"
  "\n"
  "string LOOK_LEFT_RIGHT = Misc/checking_05_01.keys\n"
  "string LOOK_DOWN_CENTER = Misc/embarassed_01_02.keys\n"
  "\n"
  "# Silent animations\n"
  "string ROBOT_SILENT_NOD = silent/youre_welcome_02.keys\n"
  "string ROBOT_SILENT_HAPPY_DANCE = Dances/Side_Shaker_01_01.keys\n"
  "string ROBOT_SILENT_YES = silent/nod_twice_01.keys\n"
  "string ROBOT_SILENT_PUZZLED = silent/confused_01.keys\n"
  "string ROBOT_SILENT_FRUSTRATED = silent/frustrated_02.keys\n"
  "string ROBOT_SILENT_SAD = silent/sad_03.keys\n"
  "string ROBOT_SILENT_INTERESTED = silent/interested_02.keys\n"
  "string ROBOT_SILENT_EXCITED = silent/excited_03.keys\n"
  "\n"
  "# Sad emotions\n"
  "string ROBOT_SAD = Misc/sad_02.keys\n"
  "string ROBOT_UNSURE = Misc/thinking_06_02.keys\n"
  "string ROBOT_COMFORT = Misc/relieved_01.keys\n"
  "string ROBOT_ASK_HELP = Misc/puzzled_01_02.keys\n"
  "string ROBOT_DISAPPOINTED = Misc/no_4.keys\n"
  "\n"
  "# Positive emotions\n"
  "string ROBOT_EXCITED = Misc/success_02.keys\n"
  "string ROBOT_INTERESTED = Misc/interested_01.keys\n"
  "string ROBOT_YES = Misc/yep_02.keys\n"
  "string ROBOT_HAPPY_DANCE = Dances/dance_circuit_saver_00.keys\n"
  "string ROBOT_CURIOUS = Misc/puzzled_02_02.keys\n"
  "string ROBOT_ATTENTION = Misc/pose_forward.keys\n"
  "string ROBOT_CELEBRATION = Dances/dance_disco_00.keys\n"
  "string ROBOT_ENCOURAGING = Misc/greetings_9.keys\n"
  "string ROBOT_WINK = Misc/eye_medium_blink_01.keys\n"
  "string ROBOT_THINKING = Misc/thinking_08.keys\n"
  "\n"
  "";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
jibo_msgs__msg__JiboAction__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {jibo_msgs__msg__JiboAction__TYPE_NAME, 24, 24},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 3246, 3246},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
jibo_msgs__msg__JiboAction__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[4];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 4, 4};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *jibo_msgs__msg__JiboAction__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *jibo_msgs__msg__JiboVec3__get_individual_type_description_source(NULL);
    sources[3] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
