// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from jibo_msgs:msg/JiboAsrCommand.idl
// generated code does not contain a copyright notice

#include "jibo_msgs/msg/detail/jibo_asr_command__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
const rosidl_type_hash_t *
jibo_msgs__msg__JiboAsrCommand__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x08, 0xdd, 0x9d, 0x3d, 0x77, 0x54, 0x62, 0x90,
      0x25, 0x15, 0xb1, 0x89, 0x6f, 0x22, 0x5d, 0x00,
      0xb8, 0x96, 0xe7, 0xf7, 0x07, 0xe6, 0xb6, 0x5a,
      0x4e, 0x03, 0x09, 0x62, 0xed, 0x35, 0x69, 0xe3,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
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
static const rosidl_type_hash_t std_msgs__msg__Header__EXPECTED_HASH = {1, {
    0xf4, 0x9f, 0xb3, 0xae, 0x2c, 0xf0, 0x70, 0xf7,
    0x93, 0x64, 0x5f, 0xf7, 0x49, 0x68, 0x3a, 0xc6,
    0xb0, 0x62, 0x03, 0xe4, 0x1c, 0x89, 0x1e, 0x17,
    0x70, 0x1b, 0x1c, 0xb5, 0x97, 0xce, 0x6a, 0x01,
  }};
#endif

static char jibo_msgs__msg__JiboAsrCommand__TYPE_NAME[] = "jibo_msgs/msg/JiboAsrCommand";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char std_msgs__msg__Header__TYPE_NAME[] = "std_msgs/msg/Header";

// Define type names, field names, and default values
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__header[] = "header";
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__heyjibo[] = "heyjibo";
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__continuous[] = "continuous";
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__incremental[] = "incremental";
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__alternatives[] = "alternatives";
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__detectend[] = "detectend";
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__rule[] = "rule";
static char jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__command[] = "command";

static rosidl_runtime_c__type_description__Field jibo_msgs__msg__JiboAsrCommand__FIELDS[] = {
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__header, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__heyjibo, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__continuous, 10, 10},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__incremental, 11, 11},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__alternatives, 12, 12},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__detectend, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_BOOLEAN,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__rule, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboAsrCommand__FIELD_NAME__command, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription jibo_msgs__msg__JiboAsrCommand__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {std_msgs__msg__Header__TYPE_NAME, 19, 19},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
jibo_msgs__msg__JiboAsrCommand__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {jibo_msgs__msg__JiboAsrCommand__TYPE_NAME, 28, 28},
      {jibo_msgs__msg__JiboAsrCommand__FIELDS, 8, 8},
    },
    {jibo_msgs__msg__JiboAsrCommand__REFERENCED_TYPE_DESCRIPTIONS, 2, 2},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&std_msgs__msg__Header__EXPECTED_HASH, std_msgs__msg__Header__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = std_msgs__msg__Header__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "# Message for telling the ASR node to start or stop streaming audio to Google\n"
  "# for processing.\n"
  "\n"
  "# Standard ROS header.\n"
  "std_msgs/Header header\n"
  "\n"
  "# Listen for \"Hey, Jibo\" first.\n"
  "bool heyjibo\n"
  "\n"
  "# Continuously listen and publish asr result.\n"
  "bool continuous\n"
  "bool incremental\n"
  "bool alternatives\n"
  "bool detectend\n"
  "\n"
  "# Path to a rule file, e.g. \"src/rules/test.rule\"\n"
  "# or a Jibo NLU rule script.\n"
  "string rule\n"
  "\n"
  "# Command. Use the constants defined below.\n"
  "int8 command\n"
  "\n"
  "# Commands. The ASR node can publish results (transcript plus confidence value)\n"
  "# for three kinds of things:\n"
  "# (1) the final result (i.e., the final result with the highest confidence),\n"
  "# (2) interim results that are not final, with a stability measure indicating\n"
  "#     how likely it is that the result will change, and\n"
  "# (3) alternative results, which are other phrases that might be what you said,\n"
  "#     but aren't as good a guess as the top alternative\n"
  "# Thus, you can tell the ASR node to start or stop sending any of these.\n"
  "int8 STOP = 0\n"
  "int8 START = 1";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
jibo_msgs__msg__JiboAsrCommand__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {jibo_msgs__msg__JiboAsrCommand__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 1011, 1011},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
jibo_msgs__msg__JiboAsrCommand__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[3];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 3, 3};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *jibo_msgs__msg__JiboAsrCommand__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *std_msgs__msg__Header__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
