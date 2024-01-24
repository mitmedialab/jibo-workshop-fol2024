// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jibo_msgs:msg/JiboRemote.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__TRAITS_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jibo_msgs/msg/detail/jibo_remote__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace jibo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JiboRemote & msg,
  std::ostream & out)
{
  out << "{";
  // member: header
  {
    out << "header: ";
    to_flow_style_yaml(msg.header, out);
    out << ", ";
  }

  // member: do_enter_rosbridge_skill
  {
    out << "do_enter_rosbridge_skill: ";
    rosidl_generator_traits::value_to_yaml(msg.do_enter_rosbridge_skill, out);
    out << ", ";
  }

  // member: do_exit_rosbridge_skill
  {
    out << "do_exit_rosbridge_skill: ";
    rosidl_generator_traits::value_to_yaml(msg.do_exit_rosbridge_skill, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JiboRemote & msg,
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

  // member: do_enter_rosbridge_skill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_enter_rosbridge_skill: ";
    rosidl_generator_traits::value_to_yaml(msg.do_enter_rosbridge_skill, out);
    out << "\n";
  }

  // member: do_exit_rosbridge_skill
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "do_exit_rosbridge_skill: ";
    rosidl_generator_traits::value_to_yaml(msg.do_exit_rosbridge_skill, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JiboRemote & msg, bool use_flow_style = false)
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
  const jibo_msgs::msg::JiboRemote & msg,
  std::ostream & out, size_t indentation = 0)
{
  jibo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jibo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jibo_msgs::msg::JiboRemote & msg)
{
  return jibo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jibo_msgs::msg::JiboRemote>()
{
  return "jibo_msgs::msg::JiboRemote";
}

template<>
inline const char * name<jibo_msgs::msg::JiboRemote>()
{
  return "jibo_msgs/msg/JiboRemote";
}

template<>
struct has_fixed_size<jibo_msgs::msg::JiboRemote>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<jibo_msgs::msg::JiboRemote>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<jibo_msgs::msg::JiboRemote>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__TRAITS_HPP_
