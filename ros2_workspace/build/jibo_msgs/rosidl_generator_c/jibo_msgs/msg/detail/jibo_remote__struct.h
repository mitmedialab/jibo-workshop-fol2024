// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jibo_msgs:msg/JiboRemote.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__STRUCT_H_
#define JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"

/// Struct defined in msg/JiboRemote in the package jibo_msgs.
/**
  * Messages for starting/stopping the rosbridge skill built into be
 */
typedef struct jibo_msgs__msg__JiboRemote
{
  std_msgs__msg__Header header;
  bool do_enter_rosbridge_skill;
  bool do_exit_rosbridge_skill;
} jibo_msgs__msg__JiboRemote;

// Struct for a sequence of jibo_msgs__msg__JiboRemote.
typedef struct jibo_msgs__msg__JiboRemote__Sequence
{
  jibo_msgs__msg__JiboRemote * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jibo_msgs__msg__JiboRemote__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__STRUCT_H_
