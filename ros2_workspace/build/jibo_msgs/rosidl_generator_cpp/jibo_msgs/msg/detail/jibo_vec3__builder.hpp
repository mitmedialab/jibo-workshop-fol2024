// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jibo_msgs:msg/JiboVec3.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__BUILDER_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jibo_msgs/msg/detail/jibo_vec3__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jibo_msgs
{

namespace msg
{

namespace builder
{

class Init_JiboVec3_z
{
public:
  explicit Init_JiboVec3_z(::jibo_msgs::msg::JiboVec3 & msg)
  : msg_(msg)
  {}
  ::jibo_msgs::msg::JiboVec3 z(::jibo_msgs::msg::JiboVec3::_z_type arg)
  {
    msg_.z = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jibo_msgs::msg::JiboVec3 msg_;
};

class Init_JiboVec3_y
{
public:
  explicit Init_JiboVec3_y(::jibo_msgs::msg::JiboVec3 & msg)
  : msg_(msg)
  {}
  Init_JiboVec3_z y(::jibo_msgs::msg::JiboVec3::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_JiboVec3_z(msg_);
  }

private:
  ::jibo_msgs::msg::JiboVec3 msg_;
};

class Init_JiboVec3_x
{
public:
  Init_JiboVec3_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JiboVec3_y x(::jibo_msgs::msg::JiboVec3::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_JiboVec3_y(msg_);
  }

private:
  ::jibo_msgs::msg::JiboVec3 msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jibo_msgs::msg::JiboVec3>()
{
  return jibo_msgs::msg::builder::Init_JiboVec3_x();
}

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_VEC3__BUILDER_HPP_
