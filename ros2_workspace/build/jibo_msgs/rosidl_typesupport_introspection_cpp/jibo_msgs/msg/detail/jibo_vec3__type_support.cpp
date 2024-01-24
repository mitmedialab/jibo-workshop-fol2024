// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from jibo_msgs:msg/JiboVec3.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "jibo_msgs/msg/detail/jibo_vec3__functions.h"
#include "jibo_msgs/msg/detail/jibo_vec3__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace jibo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void JiboVec3_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jibo_msgs::msg::JiboVec3(_init);
}

void JiboVec3_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jibo_msgs::msg::JiboVec3 *>(message_memory);
  typed_message->~JiboVec3();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JiboVec3_message_member_array[3] = {
  {
    "x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs::msg::JiboVec3, x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs::msg::JiboVec3, y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs::msg::JiboVec3, z),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JiboVec3_message_members = {
  "jibo_msgs::msg",  // message namespace
  "JiboVec3",  // message name
  3,  // number of fields
  sizeof(jibo_msgs::msg::JiboVec3),
  JiboVec3_message_member_array,  // message members
  JiboVec3_init_function,  // function to initialize message memory (memory has to be allocated)
  JiboVec3_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JiboVec3_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JiboVec3_message_members,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboVec3__get_type_hash,
  &jibo_msgs__msg__JiboVec3__get_type_description,
  &jibo_msgs__msg__JiboVec3__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace jibo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jibo_msgs::msg::JiboVec3>()
{
  return &::jibo_msgs::msg::rosidl_typesupport_introspection_cpp::JiboVec3_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jibo_msgs, msg, JiboVec3)() {
  return &::jibo_msgs::msg::rosidl_typesupport_introspection_cpp::JiboVec3_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
