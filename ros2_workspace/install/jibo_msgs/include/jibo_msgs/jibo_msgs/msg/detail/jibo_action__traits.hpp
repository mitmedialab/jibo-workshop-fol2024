// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__TRAITS_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jibo_msgs/msg/detail/jibo_action__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"
// Member 'lookat'
// Member 'led_color'
#include "jibo_msgs/msg/detail/jibo_vec3__traits.hpp"

namespace jibo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JiboAction & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: do_motion
  {
    out << "do_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.do_motion, out);
    out << ", ";
  }

  // member: motion
  {
    out << "motion: ";
    rosidl_generator_traits::value_to_yaml(msg.motion, out);
    out << ", ";
  }

  // member: do_lookat
  {
    out << "do_lookat: ";
    rosidl_generator_traits::value_to_yaml(msg.do_lookat, out);
    out << ", ";
  }

  // member: lookat
  {
    out << "lookat: ";
    to_flow_style_yaml(msg.lookat, out);
    out << ", ";
  }

  // member: do_tts
  {
    out << "do_tts: ";
    rosidl_generator_traits::value_to_yaml(msg.do_tts, out);
    out << ", ";
  }

  // member: tts_text
  {
    out << "tts_text: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_text, out);
    out << ", ";
  }

  // member: do_mim
  {
    out << "do_mim: ";
    rosidl_generator_traits::value_to_yaml(msg.do_mim, out);
    out << ", ";
  }

  // member: mim_body
  {
    out << "mim_body: ";
    rosidl_generator_traits::value_to_yaml(msg.mim_body, out);
    out << ", ";
  }

  // member: mim_rule
  {
    out << "mim_rule: ";
    rosidl_generator_traits::value_to_yaml(msg.mim_rule, out);
    out << ", ";
  }

  // member: do_sound_playback
  {
    out << "do_sound_playback: ";
    rosidl_generator_traits::value_to_yaml(msg.do_sound_playback, out);
    out << ", ";
  }

  // member: audio_filename
  {
    out << "audio_filename: ";
    rosidl_generator_traits::value_to_yaml(msg.audio_filename, out);
    out << ", ";
  }

  // member: led_color
  {
    out << "led_color: ";
    to_flow_style_yaml(msg.led_color, out);
    out << ", ";
  }

  // member: do_volume
  {
    out << "do_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.do_volume, out);
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << ", ";
  }

  // member: do_anim_transition
  {
    out << "do_anim_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.do_anim_transition, out);
    out << ", ";
  }

  // member: anim_transition
  {
    out << "anim_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.anim_transition, out);
    out << ", ";
  }

  // member: do_attention_mode
  {
    out << "do_attention_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.do_attention_mode, out);
    out << ", ";
  }

  // member: attention_mode
  {
    out << "attention_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.attention_mode, out);
    out << ", ";
  }

  // member: tts_duration_stretch
  {
    out << "tts_duration_stretch: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_duration_stretch, out);
    out << ", ";
  }

  // member: tts_pitch
  {
    out << "tts_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_pitch, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JiboAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_block_style_yaml(msg.header, out, indentation + 2);
  }

  // member: do_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.do_motion, out);
    out << "\n";
  }

  // member: motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "motion: ";
    rosidl_generator_traits::value_to_yaml(msg.motion, out);
    out << "\n";
  }

  // member: do_lookat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_lookat: ";
    rosidl_generator_traits::value_to_yaml(msg.do_lookat, out);
    out << "\n";
  }

  // member: lookat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lookat:\n";
    to_block_style_yaml(msg.lookat, out, indentation + 2);
  }

  // member: do_tts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_tts: ";
    rosidl_generator_traits::value_to_yaml(msg.do_tts, out);
    out << "\n";
  }

  // member: tts_text
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tts_text: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_text, out);
    out << "\n";
  }

  // member: do_mim
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_mim: ";
    rosidl_generator_traits::value_to_yaml(msg.do_mim, out);
    out << "\n";
  }

  // member: mim_body
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mim_body: ";
    rosidl_generator_traits::value_to_yaml(msg.mim_body, out);
    out << "\n";
  }

  // member: mim_rule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mim_rule: ";
    rosidl_generator_traits::value_to_yaml(msg.mim_rule, out);
    out << "\n";
  }

  // member: do_sound_playback
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_sound_playback: ";
    rosidl_generator_traits::value_to_yaml(msg.do_sound_playback, out);
    out << "\n";
  }

  // member: audio_filename
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "audio_filename: ";
    rosidl_generator_traits::value_to_yaml(msg.audio_filename, out);
    out << "\n";
  }

  // member: led_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "led_color:\n";
    to_block_style_yaml(msg.led_color, out, indentation + 2);
  }

  // member: do_volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_volume: ";
    rosidl_generator_traits::value_to_yaml(msg.do_volume, out);
    out << "\n";
  }

  // member: volume
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << "\n";
  }

  // member: do_anim_transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_anim_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.do_anim_transition, out);
    out << "\n";
  }

  // member: anim_transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "anim_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.anim_transition, out);
    out << "\n";
  }

  // member: do_attention_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_attention_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.do_attention_mode, out);
    out << "\n";
  }

  // member: attention_mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attention_mode: ";
    rosidl_generator_traits::value_to_yaml(msg.attention_mode, out);
    out << "\n";
  }

  // member: tts_duration_stretch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tts_duration_stretch: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_duration_stretch, out);
    out << "\n";
  }

  // member: tts_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tts_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_pitch, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JiboAction & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace jibo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use jibo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const jibo_msgs::msg::JiboAction & msg,
  std::ostream & out, size_t indentation = 0)
{
  jibo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jibo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jibo_msgs::msg::JiboAction & msg)
{
  return jibo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jibo_msgs::msg::JiboAction>()
{
  return "jibo_msgs::msg::JiboAction";
}

template<>
inline const char * name<jibo_msgs::msg::JiboAction>()
{
  return "jibo_msgs/msg/JiboAction";
}

template<>
struct has_fixed_size<jibo_msgs::msg::JiboAction>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jibo_msgs::msg::JiboAction>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jibo_msgs::msg::JiboAction>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__TRAITS_HPP_
