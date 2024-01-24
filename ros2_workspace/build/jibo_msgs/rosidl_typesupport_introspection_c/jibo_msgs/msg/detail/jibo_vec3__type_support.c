// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jibo_msgs:msg/JiboVec3.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jibo_msgs/msg/detail/jibo_vec3__rosidl_typesupport_introspection_c.h"
#include "jibo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jibo_msgs/msg/detail/jibo_vec3__functions.h"
#include "jibo_msgs/msg/detail/jibo_vec3__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jibo_msgs__msg__JiboVec3__init(message_memory);
}

void jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_fini_function(void * message_memory)
{
  jibo_msgs__msg__JiboVec3__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_member_array[3] = {
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboVec3, x),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboVec3, y),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboVec3, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_members = {
  "jibo_msgs__msg",  // message namespace
  "JiboVec3",  // message name
  3,  // number of fields
  sizeof(jibo_msgs__msg__JiboVec3),
  jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_member_array,  // message members
  jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_init_function,  // function to initialize message memory (memory has to be allocated)
  jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_type_support_handle = {
  0,
  &jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_members,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboVec3__get_type_hash,
  &jibo_msgs__msg__JiboVec3__get_type_description,
  &jibo_msgs__msg__JiboVec3__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jibo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jibo_msgs, msg, JiboVec3)() {
  if (!jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_type_support_handle.typesupport_identifier) {
    jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &jibo_msgs__msg__JiboVec3__rosidl_typesupport_introspection_c__JiboVec3_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
