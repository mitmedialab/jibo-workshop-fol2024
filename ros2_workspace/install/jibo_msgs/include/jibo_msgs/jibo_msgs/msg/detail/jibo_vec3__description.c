// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from jibo_msgs:msg/JiboVec3.idl
// generated code does not contain a copyright notice

#include "jibo_msgs/msg/detail/jibo_vec3__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_jibo_msgs
const rosidl_type_hash_t *
jibo_msgs__msg__JiboVec3__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x0f, 0x2b, 0xfe, 0xdf, 0xff, 0xf0, 0x56, 0x6c,
      0xef, 0x3d, 0x4c, 0xbe, 0xcf, 0xdc, 0x2f, 0xd6,
      0x89, 0x4f, 0x25, 0xbf, 0xfc, 0xfd, 0xfc, 0xfe,
      0x1e, 0x13, 0x1b, 0x40, 0x33, 0xbf, 0x19, 0x19,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char jibo_msgs__msg__JiboVec3__TYPE_NAME[] = "jibo_msgs/msg/JiboVec3";

// Define type names, field names, and default values
static char jibo_msgs__msg__JiboVec3__FIELD_NAME__x[] = "x";
static char jibo_msgs__msg__JiboVec3__FIELD_NAME__y[] = "y";
static char jibo_msgs__msg__JiboVec3__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field jibo_msgs__msg__JiboVec3__FIELDS[] = {
  {
    {jibo_msgs__msg__JiboVec3__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboVec3__FIELD_NAME__y, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {jibo_msgs__msg__JiboVec3__FIELD_NAME__z, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
jibo_msgs__msg__JiboVec3__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {jibo_msgs__msg__JiboVec3__TYPE_NAME, 22, 22},
      {jibo_msgs__msg__JiboVec3__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32  x\n"
  "float32  y\n"
  "float32  z";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
jibo_msgs__msg__JiboVec3__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {jibo_msgs__msg__JiboVec3__TYPE_NAME, 22, 22},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 32, 32},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
jibo_msgs__msg__JiboVec3__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *jibo_msgs__msg__JiboVec3__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
