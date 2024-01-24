// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jibo_msgs:msg/JiboState.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_STATE__TRAITS_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_STATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jibo_msgs/msg/detail/jibo_state__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace jibo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JiboState & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: in_motion
  {
    out << "in_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.in_motion, out);
    out << ", ";
  }

  // member: audio
  {
    out << "audio: ";
    rosidl_generator_traits::value_to_yaml(msg.audio, out);
    out << ", ";
  }

  // member: tts_msg
  {
    out << "tts_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_msg, out);
    out << ", ";
  }

  // member: volume
  {
    out << "volume: ";
    rosidl_generator_traits::value_to_yaml(msg.volume, out);
    out << ", ";
  }

  // member: doing_motion
  {
    out << "doing_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.doing_motion, out);
    out << ", ";
  }

  // member: is_playing_sound
  {
    out << "is_playing_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.is_playing_sound, out);
    out << ", ";
  }

  // member: is_listening
  {
    out << "is_listening: ";
    rosidl_generator_traits::value_to_yaml(msg.is_listening, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JiboState & msg,
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

  // member: in_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "in_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.in_motion, out);
    out << "\n";
  }

  // member: audio
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "audio: ";
    rosidl_generator_traits::value_to_yaml(msg.audio, out);
    out << "\n";
  }

  // member: tts_msg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tts_msg: ";
    rosidl_generator_traits::value_to_yaml(msg.tts_msg, out);
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

  // member: doing_motion
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "doing_motion: ";
    rosidl_generator_traits::value_to_yaml(msg.doing_motion, out);
    out << "\n";
  }

  // member: is_playing_sound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_playing_sound: ";
    rosidl_generator_traits::value_to_yaml(msg.is_playing_sound, out);
    out << "\n";
  }

  // member: is_listening
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "is_listening: ";
    rosidl_generator_traits::value_to_yaml(msg.is_listening, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JiboState & msg, bool use_flow_style = false)
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
  const jibo_msgs::msg::JiboState & msg,
  std::ostream & out, size_t indentation = 0)
{
  jibo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jibo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jibo_msgs::msg::JiboState & msg)
{
  return jibo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jibo_msgs::msg::JiboState>()
{
  return "jibo_msgs::msg::JiboState";
}

template<>
inline const char * name<jibo_msgs::msg::JiboState>()
{
  return "jibo_msgs/msg/JiboState";
}

template<>
struct has_fixed_size<jibo_msgs::msg::JiboState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jibo_msgs::msg::JiboState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jibo_msgs::msg::JiboState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_STATE__TRAITS_HPP_
