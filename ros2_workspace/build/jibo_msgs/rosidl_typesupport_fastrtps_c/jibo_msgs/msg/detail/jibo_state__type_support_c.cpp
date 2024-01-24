// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jibo_msgs:msg/JiboState.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jibo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jibo_msgs/msg/detail/jibo_state__struct.h"
#include "jibo_msgs/msg/detail/jibo_state__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // audio, in_motion, tts_msg
#include "rosidl_runtime_c/string_functions.h"  // audio, in_motion, tts_msg
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jibo_msgs
size_t get_serialized_size_std_msgs__msg__Header(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jibo_msgs
size_t max_serialized_size_std_msgs__msg__Header(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_IMPORT_jibo_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, std_msgs, msg, Header)();


using _JiboState__ros_msg_type = jibo_msgs__msg__JiboState;

static bool _JiboState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JiboState__ros_msg_type * ros_message = static_cast<const _JiboState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->header, cdr))
    {
      return false;
    }
  }

  // Field name: in_motion
  {
    const rosidl_runtime_c__String * str = &ros_message->in_motion;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: audio
  {
    const rosidl_runtime_c__String * str = &ros_message->audio;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: tts_msg
  {
    const rosidl_runtime_c__String * str = &ros_message->tts_msg;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: volume
  {
    cdr << ros_message->volume;
  }

  // Field name: doing_motion
  {
    cdr << (ros_message->doing_motion ? true : false);
  }

  // Field name: is_playing_sound
  {
    cdr << (ros_message->is_playing_sound ? true : false);
  }

  // Field name: is_listening
  {
    cdr << (ros_message->is_listening ? true : false);
  }

  return true;
}

static bool _JiboState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JiboState__ros_msg_type * ros_message = static_cast<_JiboState__ros_msg_type *>(untyped_ros_message);
  // Field name: header
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, std_msgs, msg, Header
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->header))
    {
      return false;
    }
  }

  // Field name: in_motion
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->in_motion.data) {
      rosidl_runtime_c__String__init(&ros_message->in_motion);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->in_motion,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'in_motion'\n");
      return false;
    }
  }

  // Field name: audio
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->audio.data) {
      rosidl_runtime_c__String__init(&ros_message->audio);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->audio,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'audio'\n");
      return false;
    }
  }

  // Field name: tts_msg
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tts_msg.data) {
      rosidl_runtime_c__String__init(&ros_message->tts_msg);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tts_msg,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tts_msg'\n");
      return false;
    }
  }

  // Field name: volume
  {
    cdr >> ros_message->volume;
  }

  // Field name: doing_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->doing_motion = tmp ? true : false;
  }

  // Field name: is_playing_sound
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_playing_sound = tmp ? true : false;
  }

  // Field name: is_listening
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_listening = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jibo_msgs
size_t get_serialized_size_jibo_msgs__msg__JiboState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JiboState__ros_msg_type * ros_message = static_cast<const _JiboState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name in_motion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->in_motion.size + 1);
  // field.name audio
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->audio.size + 1);
  // field.name tts_msg
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tts_msg.size + 1);
  // field.name volume
  {
    size_t item_size = sizeof(ros_message->volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name doing_motion
  {
    size_t item_size = sizeof(ros_message->doing_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_playing_sound
  {
    size_t item_size = sizeof(ros_message->is_playing_sound);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_listening
  {
    size_t item_size = sizeof(ros_message->is_listening);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JiboState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jibo_msgs__msg__JiboState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jibo_msgs
size_t max_serialized_size_jibo_msgs__msg__JiboState(
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

  // member: header
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_std_msgs__msg__Header(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: in_motion
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: audio
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: tts_msg
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: doing_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_playing_sound
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_listening
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
    using DataType = jibo_msgs__msg__JiboState;
    is_plain =
      (
      offsetof(DataType, is_listening) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JiboState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_jibo_msgs__msg__JiboState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JiboState = {
  "jibo_msgs::msg",
  "JiboState",
  _JiboState__cdr_serialize,
  _JiboState__cdr_deserialize,
  _JiboState__get_serialized_size,
  _JiboState__max_serialized_size
};

static rosidl_message_type_support_t _JiboState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JiboState,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboState__get_type_hash,
  &jibo_msgs__msg__JiboState__get_type_description,
  &jibo_msgs__msg__JiboState__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jibo_msgs, msg, JiboState)() {
  return &_JiboState__type_support;
}

#if defined(__cplusplus)
}
#endif
