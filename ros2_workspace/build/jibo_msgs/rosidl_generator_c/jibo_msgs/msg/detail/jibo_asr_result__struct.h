// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jibo_msgs:msg/JiboAsrResult.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__STRUCT_H_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__STRUCT_H_

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
// Member 'transcription'
// Member 'slotaction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/JiboAsrResult in the package jibo_msgs.
/**
  * Message for sending automatic speech recognition results.
 */
typedef struct jibo_msgs__msg__JiboAsrResult
{
  /// Standard ROS header.
  std_msgs__msg__Header header;
  /// The top ASR result.
  rosidl_runtime_c__String transcription;
  /// Listen for "Hey, Jibo" first.
  bool heyjibo;
  /// The reported confidence level that this result is correct.
  double confidence;
  /// Score for how well the text input parsed against the rule.
  double heuristic_score;
  /// Label associated to NLParse result according to given parse rule.
  rosidl_runtime_c__String slotaction;
} jibo_msgs__msg__JiboAsrResult;

// Struct for a sequence of jibo_msgs__msg__JiboAsrResult.
typedef struct jibo_msgs__msg__JiboAsrResult__Sequence
{
  jibo_msgs__msg__JiboAsrResult * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jibo_msgs__msg__JiboAsrResult__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__STRUCT_H_
