// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice
#include "jibo_msgs/msg/detail/jibo_action__rosidl_typesupport_fastrtps_cpp.hpp"
#include "jibo_msgs/msg/detail/jibo_action__functions.h"
#include "jibo_msgs/msg/detail/jibo_action__struct.hpp"

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
bool cdr_serialize(
  const jibo_msgs::msg::JiboVec3 &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  jibo_msgs::msg::JiboVec3 &);
size_t get_serialized_size(
  const jibo_msgs::msg::JiboVec3 &,
  size_t current_alignment);
size_t
max_serialized_size_JiboVec3(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace jibo_msgs

// functions for jibo_msgs::msg::JiboVec3 already declared above


namespace jibo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
cdr_serialize(
  const jibo_msgs::msg::JiboAction & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: do_motion
  cdr << (ros_message.do_motion ? true : false);
  // Member: motion
  cdr << ros_message.motion;
  // Member: do_lookat
  cdr << (ros_message.do_lookat ? true : false);
  // Member: lookat
  jibo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.lookat,
    cdr);
  // Member: do_tts
  cdr << (ros_message.do_tts ? true : false);
  // Member: tts_text
  cdr << ros_message.tts_text;
  // Member: do_mim
  cdr << (ros_message.do_mim ? true : false);
  // Member: mim_body
  cdr << ros_message.mim_body;
  // Member: mim_rule
  cdr << ros_message.mim_rule;
  // Member: do_sound_playback
  cdr << (ros_message.do_sound_playback ? true : false);
  // Member: audio_filename
  cdr << ros_message.audio_filename;
  // Member: led_color
  jibo_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.led_color,
    cdr);
  // Member: do_volume
  cdr << (ros_message.do_volume ? true : false);
  // Member: volume
  cdr << ros_message.volume;
  // Member: do_anim_transition
  cdr << (ros_message.do_anim_transition ? true : false);
  // Member: anim_transition
  cdr << ros_message.anim_transition;
  // Member: do_attention_mode
  cdr << (ros_message.do_attention_mode ? true : false);
  // Member: attention_mode
  cdr << ros_message.attention_mode;
  // Member: tts_duration_stretch
  cdr << ros_message.tts_duration_stretch;
  // Member: tts_pitch
  cdr << ros_message.tts_pitch;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jibo_msgs::msg::JiboAction & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: do_motion
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_motion = tmp ? true : false;
  }

  // Member: motion
  cdr >> ros_message.motion;

  // Member: do_lookat
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_lookat = tmp ? true : false;
  }

  // Member: lookat
  jibo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.lookat);

  // Member: do_tts
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_tts = tmp ? true : false;
  }

  // Member: tts_text
  cdr >> ros_message.tts_text;

  // Member: do_mim
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_mim = tmp ? true : false;
  }

  // Member: mim_body
  cdr >> ros_message.mim_body;

  // Member: mim_rule
  cdr >> ros_message.mim_rule;

  // Member: do_sound_playback
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_sound_playback = tmp ? true : false;
  }

  // Member: audio_filename
  cdr >> ros_message.audio_filename;

  // Member: led_color
  jibo_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.led_color);

  // Member: do_volume
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_volume = tmp ? true : false;
  }

  // Member: volume
  cdr >> ros_message.volume;

  // Member: do_anim_transition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_anim_transition = tmp ? true : false;
  }

  // Member: anim_transition
  cdr >> ros_message.anim_transition;

  // Member: do_attention_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.do_attention_mode = tmp ? true : false;
  }

  // Member: attention_mode
  cdr >> ros_message.attention_mode;

  // Member: tts_duration_stretch
  cdr >> ros_message.tts_duration_stretch;

  // Member: tts_pitch
  cdr >> ros_message.tts_pitch;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
get_serialized_size(
  const jibo_msgs::msg::JiboAction & ros_message,
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
  // Member: do_motion
  {
    size_t item_size = sizeof(ros_message.do_motion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motion
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.motion.size() + 1);
  // Member: do_lookat
  {
    size_t item_size = sizeof(ros_message.do_lookat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lookat

  current_alignment +=
    jibo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.lookat, current_alignment);
  // Member: do_tts
  {
    size_t item_size = sizeof(ros_message.do_tts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tts_text
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.tts_text.size() + 1);
  // Member: do_mim
  {
    size_t item_size = sizeof(ros_message.do_mim);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mim_body
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mim_body.size() + 1);
  // Member: mim_rule
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.mim_rule.size() + 1);
  // Member: do_sound_playback
  {
    size_t item_size = sizeof(ros_message.do_sound_playback);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: audio_filename
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.audio_filename.size() + 1);
  // Member: led_color

  current_alignment +=
    jibo_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.led_color, current_alignment);
  // Member: do_volume
  {
    size_t item_size = sizeof(ros_message.do_volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: volume
  {
    size_t item_size = sizeof(ros_message.volume);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: do_anim_transition
  {
    size_t item_size = sizeof(ros_message.do_anim_transition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: anim_transition
  {
    size_t item_size = sizeof(ros_message.anim_transition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: do_attention_mode
  {
    size_t item_size = sizeof(ros_message.do_attention_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attention_mode
  {
    size_t item_size = sizeof(ros_message.attention_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tts_duration_stretch
  {
    size_t item_size = sizeof(ros_message.tts_duration_stretch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: tts_pitch
  {
    size_t item_size = sizeof(ros_message.tts_pitch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jibo_msgs
max_serialized_size_JiboAction(
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

  // Member: do_motion
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motion
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

  // Member: do_lookat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: lookat
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        jibo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JiboVec3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: do_tts
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tts_text
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

  // Member: do_mim
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mim_body
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

  // Member: mim_rule
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

  // Member: do_sound_playback
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: audio_filename
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

  // Member: led_color
  {
    size_t array_size = 1;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        jibo_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_JiboVec3(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: do_volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: volume
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: do_anim_transition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: anim_transition
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: do_attention_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attention_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: tts_duration_stretch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: tts_pitch
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
    using DataType = jibo_msgs::msg::JiboAction;
    is_plain =
      (
      offsetof(DataType, tts_pitch) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _JiboAction__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jibo_msgs::msg::JiboAction *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JiboAction__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jibo_msgs::msg::JiboAction *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JiboAction__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jibo_msgs::msg::JiboAction *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JiboAction__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_JiboAction(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _JiboAction__callbacks = {
  "jibo_msgs::msg",
  "JiboAction",
  _JiboAction__cdr_serialize,
  _JiboAction__cdr_deserialize,
  _JiboAction__get_serialized_size,
  _JiboAction__max_serialized_size
};

static rosidl_message_type_support_t _JiboAction__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JiboAction__callbacks,
  get_message_typesupport_handle_function,
  &jibo_msgs__msg__JiboAction__get_type_hash,
  &jibo_msgs__msg__JiboAction__get_type_description,
  &jibo_msgs__msg__JiboAction__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace jibo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jibo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jibo_msgs::msg::JiboAction>()
{
  return &jibo_msgs::msg::typesupport_fastrtps_cpp::_JiboAction__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jibo_msgs, msg, JiboAction)() {
  return &jibo_msgs::msg::typesupport_fastrtps_cpp::_JiboAction__handle;
}

#ifdef __cplusplus
}
#endif
