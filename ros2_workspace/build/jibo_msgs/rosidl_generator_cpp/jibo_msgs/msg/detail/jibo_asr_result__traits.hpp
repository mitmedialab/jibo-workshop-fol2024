// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jibo_msgs:msg/JiboAsrResult.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__TRAITS_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jibo_msgs/msg/detail/jibo_asr_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace jibo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JiboAsrResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: transcription
  {
    out << "transcription: ";
    rosidl_generator_traits::value_to_yaml(msg.transcription, out);
    out << ", ";
  }

  // member: heyjibo
  {
    out << "heyjibo: ";
    rosidl_generator_traits::value_to_yaml(msg.heyjibo, out);
    out << ", ";
  }

  // member: confidence
  {
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << ", ";
  }

  // member: heuristic_score
  {
    out << "heuristic_score: ";
    rosidl_generator_traits::value_to_yaml(msg.heuristic_score, out);
    out << ", ";
  }

  // member: slotaction
  {
    out << "slotaction: ";
    rosidl_generator_traits::value_to_yaml(msg.slotaction, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JiboAsrResult & msg,
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

  // member: transcription
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "transcription: ";
    rosidl_generator_traits::value_to_yaml(msg.transcription, out);
    out << "\n";
  }

  // member: heyjibo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heyjibo: ";
    rosidl_generator_traits::value_to_yaml(msg.heyjibo, out);
    out << "\n";
  }

  // member: confidence
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "confidence: ";
    rosidl_generator_traits::value_to_yaml(msg.confidence, out);
    out << "\n";
  }

  // member: heuristic_score
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heuristic_score: ";
    rosidl_generator_traits::value_to_yaml(msg.heuristic_score, out);
    out << "\n";
  }

  // member: slotaction
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "slotaction: ";
    rosidl_generator_traits::value_to_yaml(msg.slotaction, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JiboAsrResult & msg, bool use_flow_style = false)
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
  const jibo_msgs::msg::JiboAsrResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  jibo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jibo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jibo_msgs::msg::JiboAsrResult & msg)
{
  return jibo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jibo_msgs::msg::JiboAsrResult>()
{
  return "jibo_msgs::msg::JiboAsrResult";
}

template<>
inline const char * name<jibo_msgs::msg::JiboAsrResult>()
{
  return "jibo_msgs/msg/JiboAsrResult";
}

template<>
struct has_fixed_size<jibo_msgs::msg::JiboAsrResult>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jibo_msgs::msg::JiboAsrResult>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jibo_msgs::msg::JiboAsrResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__TRAITS_HPP_
