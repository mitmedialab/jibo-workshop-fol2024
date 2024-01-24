// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jibo_msgs:msg/JiboState.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_STATE__STRUCT_H_
#define JIBO_MSGS__MSG__DETAIL__JIBO_STATE__STRUCT_H_

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
// Member 'in_motion'
// Member 'audio'
// Member 'tts_msg'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JiboState in the package jibo_msgs.
typedef struct jibo_msgs__msg__JiboState
{
  std_msgs__msg__Header header;
  /// This will list the current animation that Tega is in.
  /// See JiboAction.msg for possible values.
  /// The default idle animation is usually MOTION_IDLESTILL
  /// or MOTION_POSE_BREATHING, but it is not guaranteedd to
  /// be, since this is set in the robot code.
  rosidl_runtime_c__String in_motion;
  rosidl_runtime_c__String audio;
  rosidl_runtime_c__String tts_msg;
  float volume;
  /// JiboVec3 led_color
  /// JiboVec3 lookat
  ///  True when the robot is performing an animation that is not the
  ///  robot's IDLE animation       {}
  bool doing_motion;
  /// True when the sound player is playing back a sound on Tega
  bool is_playing_sound;
  /// True when Jibo is listening to speech
  bool is_listening;
} jibo_msgs__msg__JiboState;

// Struct for a sequence of jibo_msgs__msg__JiboState.
typedef struct jibo_msgs__msg__JiboState__Sequence
{
  jibo_msgs__msg__JiboState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jibo_msgs__msg__JiboState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_STATE__STRUCT_H_
