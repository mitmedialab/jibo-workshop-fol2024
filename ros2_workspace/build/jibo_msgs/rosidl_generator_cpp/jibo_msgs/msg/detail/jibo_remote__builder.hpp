// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jibo_msgs:msg/JiboRemote.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__BUILDER_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jibo_msgs/msg/detail/jibo_remote__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jibo_msgs
{

namespace msg
{

namespace builder
{

class Init_JiboRemote_do_exit_rosbridge_skill
{
public:
  explicit Init_JiboRemote_do_exit_rosbridge_skill(::jibo_msgs::msg::JiboRemote & msg)
  : msg_(msg)
  {}
  ::jibo_msgs::msg::JiboRemote do_exit_rosbridge_skill(::jibo_msgs::msg::JiboRemote::_do_exit_rosbridge_skill_type arg)
  {
    msg_.do_exit_rosbridge_skill = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jibo_msgs::msg::JiboRemote msg_;
};

class Init_JiboRemote_do_enter_rosbridge_skill
{
public:
  explicit Init_JiboRemote_do_enter_rosbridge_skill(::jibo_msgs::msg::JiboRemote & msg)
  : msg_(msg)
  {}
  Init_JiboRemote_do_exit_rosbridge_skill do_enter_rosbridge_skill(::jibo_msgs::msg::JiboRemote::_do_enter_rosbridge_skill_type arg)
  {
    msg_.do_enter_rosbridge_skill = std::move(arg);
    return Init_JiboRemote_do_exit_rosbridge_skill(msg_);
  }

private:
  ::jibo_msgs::msg::JiboRemote msg_;
};

class Init_JiboRemote_header
{
public:
  Init_JiboRemote_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JiboRemote_do_enter_rosbridge_skill header(::jibo_msgs::msg::JiboRemote::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JiboRemote_do_enter_rosbridge_skill(msg_);
  }

private:
  ::jibo_msgs::msg::JiboRemote msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jibo_msgs::msg::JiboRemote>()
{
  return jibo_msgs::msg::builder::Init_JiboRemote_header();
}

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__BUILDER_HPP_
