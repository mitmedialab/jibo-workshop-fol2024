// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from jibo_msgs:msg/JiboRemote.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "jibo_msgs/msg/detail/jibo_remote__functions.h"
#include "jibo_msgs/msg/detail/jibo_remote__struct.hpp"
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

void JiboRemote_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) jibo_msgs::msg::JiboRemote(_init);
}

void JiboRemote_fini_function(void * message_memory)
{
  auto typed_message = static_cast<jibo_msgs::msg::JiboRemote *>(message_memory);
  typed_message->~JiboRemote();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember JiboRemote_message_member_array[3] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs::msg::JiboRemote, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "do_enter_rosbridge_skill",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs::msg::JiboRemote, do_enter_rosbridge_skill),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "do_exit_rosbridge_skill",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(jibo_msgs::msg::JiboRemote, do_exit_rosbridge_skill),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers JiboRemote_message_members = {
  "jibo_msgs::msg",  // message namespace
  "JiboRemote",  // message name
  3,  // number of fields
  sizeof(jibo_msgs::msg::JiboRemote),
  JiboRemote_message_member_array,  // message members
  JiboRemote_init_function,  // function to initialize message memory (memory has to be allocated)
  JiboRemote_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t JiboRemote_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &JiboRemote_message_members,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboRemote__get_type_hash,
  &jibo_msgs__msg__JiboRemote__get_type_description,
  &jibo_msgs__msg__JiboRemote__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace jibo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<jibo_msgs::msg::JiboRemote>()
{
  return &::jibo_msgs::msg::rosidl_typesupport_introspection_cpp::JiboRemote_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, jibo_msgs, msg, JiboRemote)() {
  return &::jibo_msgs::msg::rosidl_typesupport_introspection_cpp::JiboRemote_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
