// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jibo_msgs:msg/JiboVec3.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__STRUCT_H_
#define JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/JiboVec3 in the package jibo_msgs.
typedef struct jibo_msgs__msg__JiboVec3
{
  float x;
  float y;
  float z;
} jibo_msgs__msg__JiboVec3;

// Struct for a sequence of jibo_msgs__msg__JiboVec3.
typedef struct jibo_msgs__msg__JiboVec3__Sequence
{
  jibo_msgs__msg__JiboVec3 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jibo_msgs__msg__JiboVec3__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__STRUCT_H_
