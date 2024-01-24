// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_action__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jibo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jibo_msgs/msg/detail/jibo_action__struct.h"
#include "jibo_msgs/msg/detail/jibo_action__functions.h"
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

#include "jibo_msgs/msg/detail/jibo_vec3__functions.h"  // led_color, lookat
#include "rosidl_runtime_c/string.h"  // audio_filename, mim_body, mim_rule, motion, tts_text
#include "rosidl_runtime_c/string_functions.h"  // audio_filename, mim_body, mim_rule, motion, tts_text
#include "std_msgs/msg/detail/header__functions.h"  // header

// forward declare type support functions
size_t get_serialized_size_jibo_msgs__msg__JiboVec3(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_jibo_msgs__msg__JiboVec3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jibo_msgs, msg, JiboVec3)();
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


using _JiboAction__ros_msg_type = jibo_msgs__msg__JiboAction;

static bool _JiboAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JiboAction__ros_msg_type * ros_message = static_cast<const _JiboAction__ros_msg_type *>(untyped_ros_message);
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

  // Field name: do_motion
  {
    cdr << (ros_message->do_motion ? true : false);
  }

  // Field name: motion
  {
    const rosidl_runtime_c__String * str = &ros_message->motion;
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

  // Field name: do_lookat
  {
    cdr << (ros_message->do_lookat ? true : false);
  }

  // Field name: lookat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jibo_msgs, msg, JiboVec3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->lookat, cdr))
    {
      return false;
    }
  }

  // Field name: do_tts
  {
    cdr << (ros_message->do_tts ? true : false);
  }

  // Field name: tts_text
  {
    const rosidl_runtime_c__String * str = &ros_message->tts_text;
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

  // Field name: do_mim
  {
    cdr << (ros_message->do_mim ? true : false);
  }

  // Field name: mim_body
  {
    const rosidl_runtime_c__String * str = &ros_message->mim_body;
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

  // Field name: mim_rule
  {
    const rosidl_runtime_c__String * str = &ros_message->mim_rule;
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

  // Field name: do_sound_playback
  {
    cdr << (ros_message->do_sound_playback ? true : false);
  }

  // Field name: audio_filename
  {
    const rosidl_runtime_c__String * str = &ros_message->audio_filename;
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

  // Field name: led_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jibo_msgs, msg, JiboVec3
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->led_color, cdr))
    {
      return false;
    }
  }

  // Field name: do_volume
  {
    cdr << (ros_message->do_volume ? true : false);
  }

  // Field name: volume
  {
    cdr << ros_message->volume;
  }

  // Field name: do_anim_transition
  {
    cdr << (ros_message->do_anim_transition ? true : false);
  }

  // Field name: anim_transition
  {
    cdr << ros_message->anim_transition;
  }

  // Field name: do_attention_mode
  {
    cdr << (ros_message->do_attention_mode ? true : false);
  }

  // Field name: attention_mode
  {
    cdr << ros_message->attention_mode;
  }

  // Field name: tts_duration_stretch
  {
    cdr << ros_message->tts_duration_stretch;
  }

  // Field name: tts_pitch
  {
    cdr << ros_message->tts_pitch;
  }

  return true;
}

static bool _JiboAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JiboAction__ros_msg_type * ros_message = static_cast<_JiboAction__ros_msg_type *>(untyped_ros_message);
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

  // Field name: do_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_motion = tmp ? true : false;
  }

  // Field name: motion
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->motion.data) {
      rosidl_runtime_c__String__init(&ros_message->motion);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->motion,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'motion'\n");
      return false;
    }
  }

  // Field name: do_lookat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_lookat = tmp ? true : false;
  }

  // Field name: lookat
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jibo_msgs, msg, JiboVec3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->lookat))
    {
      return false;
    }
  }

  // Field name: do_tts
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_tts = tmp ? true : false;
  }

  // Field name: tts_text
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->tts_text.data) {
      rosidl_runtime_c__String__init(&ros_message->tts_text);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->tts_text,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'tts_text'\n");
      return false;
    }
  }

  // Field name: do_mim
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_mim = tmp ? true : false;
  }

  // Field name: mim_body
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mim_body.data) {
      rosidl_runtime_c__String__init(&ros_message->mim_body);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mim_body,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mim_body'\n");
      return false;
    }
  }

  // Field name: mim_rule
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->mim_rule.data) {
      rosidl_runtime_c__String__init(&ros_message->mim_rule);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->mim_rule,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'mim_rule'\n");
      return false;
    }
  }

  // Field name: do_sound_playback
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_sound_playback = tmp ? true : false;
  }

  // Field name: audio_filename
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->audio_filename.data) {
      rosidl_runtime_c__String__init(&ros_message->audio_filename);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->audio_filename,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'audio_filename'\n");
      return false;
    }
  }

  // Field name: led_color
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, jibo_msgs, msg, JiboVec3
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->led_color))
    {
      return false;
    }
  }

  // Field name: do_volume
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_volume = tmp ? true : false;
  }

  // Field name: volume
  {
    cdr >> ros_message->volume;
  }

  // Field name: do_anim_transition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_anim_transition = tmp ? true : false;
  }

  // Field name: anim_transition
  {
    cdr >> ros_message->anim_transition;
  }

  // Field name: do_attention_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->do_attention_mode = tmp ? true : false;
  }

  // Field name: attention_mode
  {
    cdr >> ros_message->attention_mode;
  }

  // Field name: tts_duration_stretch
  {
    cdr >> ros_message->tts_duration_stretch;
  }

  // Field name: tts_pitch
  {
    cdr >> ros_message->tts_pitch;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jibo_msgs
size_t get_serialized_size_jibo_msgs__msg__JiboAction(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JiboAction__ros_msg_type * ros_message = static_cast<const _JiboAction__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name header

  current_alignment += get_serialized_size_std_msgs__msg__Header(
    &(ros_message->header), current_alignment);
  // field.name do_motion
  {
    size_t item_size = sizeof(ros_message->do_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name motion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->motion.size + 1);
  // field.name do_lookat
  {
    size_t item_size = sizeof(ros_message->do_lookat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lookat

  current_alignment += get_serialized_size_jibo_msgs__msg__JiboVec3(
    &(ros_message->lookat), current_alignment);
  // field.name do_tts
  {
    size_t item_size = sizeof(ros_message->do_tts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tts_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->tts_text.size + 1);
  // field.name do_mim
  {
    size_t item_size = sizeof(ros_message->do_mim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mim_body
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mim_body.size + 1);
  // field.name mim_rule
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->mim_rule.size + 1);
  // field.name do_sound_playback
  {
    size_t item_size = sizeof(ros_message->do_sound_playback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name audio_filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->audio_filename.size + 1);
  // field.name led_color

  current_alignment += get_serialized_size_jibo_msgs__msg__JiboVec3(
    &(ros_message->led_color), current_alignment);
  // field.name do_volume
  {
    size_t item_size = sizeof(ros_message->do_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name volume
  {
    size_t item_size = sizeof(ros_message->volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name do_anim_transition
  {
    size_t item_size = sizeof(ros_message->do_anim_transition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name anim_transition
  {
    size_t item_size = sizeof(ros_message->anim_transition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name do_attention_mode
  {
    size_t item_size = sizeof(ros_message->do_attention_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attention_mode
  {
    size_t item_size = sizeof(ros_message->attention_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tts_duration_stretch
  {
    size_t item_size = sizeof(ros_message->tts_duration_stretch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tts_pitch
  {
    size_t item_size = sizeof(ros_message->tts_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JiboAction__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jibo_msgs__msg__JiboAction(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jibo_msgs
size_t max_serialized_size_jibo_msgs__msg__JiboAction(
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
  // member: do_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: motion
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
  // member: do_lookat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: lookat
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jibo_msgs__msg__JiboVec3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: do_tts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tts_text
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
  // member: do_mim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mim_body
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
  // member: mim_rule
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
  // member: do_sound_playback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: audio_filename
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
  // member: led_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_jibo_msgs__msg__JiboVec3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: do_volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: do_anim_transition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: anim_transition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: do_attention_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attention_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tts_duration_stretch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: tts_pitch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = jibo_msgs__msg__JiboAction;
    is_plain =
      (
      offsetof(DataType, tts_pitch) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _JiboAction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_jibo_msgs__msg__JiboAction(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_JiboAction = {
  "jibo_msgs::msg",
  "JiboAction",
  _JiboAction__cdr_serialize,
  _JiboAction__cdr_deserialize,
  _JiboAction__get_serialized_size,
  _JiboAction__max_serialized_size
};

static rosidl_message_type_support_t _JiboAction__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JiboAction,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboAction__get_type_hash,
  &jibo_msgs__msg__JiboAction__get_type_description,
  &jibo_msgs__msg__JiboAction__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jibo_msgs, msg, JiboAction)() {
  return &_JiboAction__type_support;
}

#if defined(__cplusplus)
}
#endif
