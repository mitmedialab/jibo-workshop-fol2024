// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jibo_msgs:msg/JiboAsrCommand.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__STRUCT_H_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'STOP'.
/**
  * Commands. The ASR node can publish results (transcript plus confidence value)
  * for three kinds of things:
  * (1) the final result (i.e., the final result with the highest confidence),
  * (2) interim results that are not final, with a stability measure indicating
  *     how likely it is that the result will change, and
  * (3) alternative results, which are other phrases that might be what you said,
  *     but aren't as good a guess as the top alternative
  * Thus, you can tell the ASR node to start or stop sending any of these.
 */
enum
{
  jibo_msgs__msg__JiboAsrCommand__STOP = 0
};

/// Constant 'START'.
enum
{
  jibo_msgs__msg__JiboAsrCommand__START = 1
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'rule'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JiboAsrCommand in the package jibo_msgs.
/**
  * Message for telling the ASR node to start or stop streaming audio to Google
  * for processing.
 */
typedef struct jibo_msgs__msg__JiboAsrCommand
{
  /// Standard ROS header.
  std_msgs__msg__Header header;
  /// Listen for "Hey, Jibo" first.
  bool heyjibo;
  /// Continuously listen and publish asr result.
  bool continuous;
  bool incremental;
  bool alternatives;
  bool detectend;
  /// Path to a rule file, e.g. "src/rules/test.rule"
  /// or a Jibo NLU rule script.
  rosidl_runtime_c__String rule;
  /// Command. Use the constants defined below.
  int8_t command;
} jibo_msgs__msg__JiboAsrCommand;

// Struct for a sequence of jibo_msgs__msg__JiboAsrCommand.
typedef struct jibo_msgs__msg__JiboAsrCommand__Sequence
{
  jibo_msgs__msg__JiboAsrCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jibo_msgs__msg__JiboAsrCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__STRUCT_H_
