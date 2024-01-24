// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from jibo_msgs:msg/JiboState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "jibo_msgs/msg/detail/jibo_state__rosidl_typesupport_introspection_c.h"
#include "jibo_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "jibo_msgs/msg/detail/jibo_state__functions.h"
#include "jibo_msgs/msg/detail/jibo_state__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `in_motion`
// Member `audio`
// Member `tts_msg`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  jibo_msgs__msg__JiboState__init(message_memory);
}

void jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_fini_function(void * message_memory)
{
  jibo_msgs__msg__JiboState__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_member_array[8] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "in_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, in_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "audio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, audio),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "tts_msg",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, tts_msg),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "volume",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, volume),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "doing_motion",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, doing_motion),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_playing_sound",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, is_playing_sound),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "is_listening",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs__msg__JiboState, is_listening),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_members = {
  "jibo_msgs__msg",  // message namespace
  "JiboState",  // message name
  8,  // number of fields
  sizeof(jibo_msgs__msg__JiboState),
  jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_member_array,  // message members
  jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_init_function,  // function to initialize message memory (memory has to be allocated)
  jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_type_support_handle = {
  0,
  &jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_members,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboState__get_type_hash,
  &jibo_msgs__msg__JiboState__get_type_description,
  &jibo_msgs__msg__JiboState__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_jibo_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, jibo_msgs, msg, JiboState)() {
  jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_type_support_handle.typesupport_identifier) {
    jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &jibo_msgs__msg__JiboState__rosidl_typesupport_introspection_c__JiboState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
