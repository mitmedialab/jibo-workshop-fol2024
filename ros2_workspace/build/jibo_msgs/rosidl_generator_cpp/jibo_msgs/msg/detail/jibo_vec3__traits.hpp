// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from jibo_msgs:msg/JiboVec3.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__TRAITS_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "jibo_msgs/msg/detail/jibo_vec3__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace jibo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const JiboVec3 & msg,
  std::ostream & out)
{
  out << "{";
  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const JiboVec3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const JiboVec3 & msg, bool use_flow_style = false)
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
  const jibo_msgs::msg::JiboVec3 & msg,
  std::ostream & out, size_t indentation = 0)
{
  jibo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use jibo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const jibo_msgs::msg::JiboVec3 & msg)
{
  return jibo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<jibo_msgs::msg::JiboVec3>()
{
  return "jibo_msgs::msg::JiboVec3";
}

template<>
inline const char * name<jibo_msgs::msg::JiboVec3>()
{
  return "jibo_msgs/msg/JiboVec3";
}

template<>
struct has_fixed_size<jibo_msgs::msg::JiboVec3>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<jibo_msgs::msg::JiboVec3>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<jibo_msgs::msg::JiboVec3>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__TRAITS_HPP_
