// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jibo_msgs:msg/JiboAsrCommand.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__TRAITS_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jibo_msgs/msg/detail/jibo_asr_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace jibo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JiboAsrCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: heyjibo
  {
    out << "heyjibo: ";
    rosidl_generator_traits::value_to_yaml(msg.heyjibo, out);
    out << ", ";
  }

  // member: continuous
  {
    out << "continuous: ";
    rosidl_generator_traits::value_to_yaml(msg.continuous, out);
    out << ", ";
  }

  // member: incremental
  {
    out << "incremental: ";
    rosidl_generator_traits::value_to_yaml(msg.incremental, out);
    out << ", ";
  }

  // member: alternatives
  {
    out << "alternatives: ";
    rosidl_generator_traits::value_to_yaml(msg.alternatives, out);
    out << ", ";
  }

  // member: detectend
  {
    out << "detectend: ";
    rosidl_generator_traits::value_to_yaml(msg.detectend, out);
    out << ", ";
  }

  // member: rule
  {
    out << "rule: ";
    rosidl_generator_traits::value_to_yaml(msg.rule, out);
    out << ", ";
  }

  // member: command
  {
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JiboAsrCommand & msg,
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

  // member: heyjibo
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heyjibo: ";
    rosidl_generator_traits::value_to_yaml(msg.heyjibo, out);
    out << "\n";
  }

  // member: continuous
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "continuous: ";
    rosidl_generator_traits::value_to_yaml(msg.continuous, out);
    out << "\n";
  }

  // member: incremental
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incremental: ";
    rosidl_generator_traits::value_to_yaml(msg.incremental, out);
    out << "\n";
  }

  // member: alternatives
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alternatives: ";
    rosidl_generator_traits::value_to_yaml(msg.alternatives, out);
    out << "\n";
  }

  // member: detectend
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "detectend: ";
    rosidl_generator_traits::value_to_yaml(msg.detectend, out);
    out << "\n";
  }

  // member: rule
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rule: ";
    rosidl_generator_traits::value_to_yaml(msg.rule, out);
    out << "\n";
  }

  // member: command
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "command: ";
    rosidl_generator_traits::value_to_yaml(msg.command, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JiboAsrCommand & msg, bool use_flow_style = false)
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
  const jibo_msgs::msg::JiboAsrCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  jibo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jibo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jibo_msgs::msg::JiboAsrCommand & msg)
{
  return jibo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jibo_msgs::msg::JiboAsrCommand>()
{
  return "jibo_msgs::msg::JiboAsrCommand";
}

template<>
inline const char * name<jibo_msgs::msg::JiboAsrCommand>()
{
  return "jibo_msgs/msg/JiboAsrCommand";
}

template<>
struct has_fixed_size<jibo_msgs::msg::JiboAsrCommand>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<jibo_msgs::msg::JiboAsrCommand>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<jibo_msgs::msg::JiboAsrCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__TRAITS_HPP_
