// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from jibo_msgs:msg/JiboRemote.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_remote__rosidl_typesupport_fastrtps_cpp.hpp"
#include "jibo_msgs/msg/detail/jibo_remote__functions.h"
#include "jibo_msgs/msg/detail/jibo_remote__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs


namespace jibo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
cdr_serialize(
  const jibo_msgs::msg::JiboRemote & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: do_enter_rosbridge_skill
  cdr << (ros_message.do_enter_rosbridge_skill ? true : false);
  // Member: do_exit_rosbridge_skill
  cdr << (ros_message.do_exit_rosbridge_skill ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jibo_msgs::msg::JiboRemote & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: do_enter_rosbridge_skill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_enter_rosbridge_skill = tmp ? true : false;
  }

  // Member: do_exit_rosbridge_skill
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_exit_rosbridge_skill = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
get_serialized_size(
  const jibo_msgs::msg::JiboRemote & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: do_enter_rosbridge_skill
  {
    size_t item_size = sizeof(ros_message.do_enter_rosbridge_skill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: do_exit_rosbridge_skill
  {
    size_t item_size = sizeof(ros_message.do_exit_rosbridge_skill);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
max_serialized_size_JiboRemote(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: do_enter_rosbridge_skill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: do_exit_rosbridge_skill
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = jibo_msgs::msg::JiboRemote;
    is_plain =
      (
      offsetof(DataType, do_exit_rosbridge_skill) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JiboRemote__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jibo_msgs::msg::JiboRemote *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JiboRemote__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jibo_msgs::msg::JiboRemote *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JiboRemote__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jibo_msgs::msg::JiboRemote *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JiboRemote__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JiboRemote(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JiboRemote__callbacks = {
  "jibo_msgs::msg",
  "JiboRemote",
  _JiboRemote__cdr_serialize,
  _JiboRemote__cdr_deserialize,
  _JiboRemote__get_serialized_size,
  _JiboRemote__max_serialized_size
};

static rosidl_message_type_support_t _JiboRemote__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JiboRemote__callbacks,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboRemote__get_type_hash,
  &jibo_msgs__msg__JiboRemote__get_type_description,
  &jibo_msgs__msg__JiboRemote__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jibo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jibo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jibo_msgs::msg::JiboRemote>()
{
  return &jibo_msgs::msg::typesupport_fastrtps_cpp::_JiboRemote__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jibo_msgs, msg, JiboRemote)() {
  return &jibo_msgs::msg::typesupport_fastrtps_cpp::_JiboRemote__handle;
}

#ifdef __cplusplus
}
#endif
