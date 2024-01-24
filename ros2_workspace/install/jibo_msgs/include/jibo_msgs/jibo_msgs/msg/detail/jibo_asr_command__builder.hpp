// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jibo_msgs:msg/JiboAsrCommand.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__BUILDER_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jibo_msgs/msg/detail/jibo_asr_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jibo_msgs
{

namespace msg
{

namespace builder
{

class Init_JiboAsrCommand_command
{
public:
  explicit Init_JiboAsrCommand_command(::jibo_msgs::msg::JiboAsrCommand & msg)
  : msg_(msg)
  {}
  ::jibo_msgs::msg::JiboAsrCommand command(::jibo_msgs::msg::JiboAsrCommand::_command_type arg)
  {
    msg_.command = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

class Init_JiboAsrCommand_rule
{
public:
  explicit Init_JiboAsrCommand_rule(::jibo_msgs::msg::JiboAsrCommand & msg)
  : msg_(msg)
  {}
  Init_JiboAsrCommand_command rule(::jibo_msgs::msg::JiboAsrCommand::_rule_type arg)
  {
    msg_.rule = std::move(arg);
    return Init_JiboAsrCommand_command(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

class Init_JiboAsrCommand_detectend
{
public:
  explicit Init_JiboAsrCommand_detectend(::jibo_msgs::msg::JiboAsrCommand & msg)
  : msg_(msg)
  {}
  Init_JiboAsrCommand_rule detectend(::jibo_msgs::msg::JiboAsrCommand::_detectend_type arg)
  {
    msg_.detectend = std::move(arg);
    return Init_JiboAsrCommand_rule(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

class Init_JiboAsrCommand_alternatives
{
public:
  explicit Init_JiboAsrCommand_alternatives(::jibo_msgs::msg::JiboAsrCommand & msg)
  : msg_(msg)
  {}
  Init_JiboAsrCommand_detectend alternatives(::jibo_msgs::msg::JiboAsrCommand::_alternatives_type arg)
  {
    msg_.alternatives = std::move(arg);
    return Init_JiboAsrCommand_detectend(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

class Init_JiboAsrCommand_incremental
{
public:
  explicit Init_JiboAsrCommand_incremental(::jibo_msgs::msg::JiboAsrCommand & msg)
  : msg_(msg)
  {}
  Init_JiboAsrCommand_alternatives incremental(::jibo_msgs::msg::JiboAsrCommand::_incremental_type arg)
  {
    msg_.incremental = std::move(arg);
    return Init_JiboAsrCommand_alternatives(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

class Init_JiboAsrCommand_continuous
{
public:
  explicit Init_JiboAsrCommand_continuous(::jibo_msgs::msg::JiboAsrCommand & msg)
  : msg_(msg)
  {}
  Init_JiboAsrCommand_incremental continuous(::jibo_msgs::msg::JiboAsrCommand::_continuous_type arg)
  {
    msg_.continuous = std::move(arg);
    return Init_JiboAsrCommand_incremental(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

class Init_JiboAsrCommand_heyjibo
{
public:
  explicit Init_JiboAsrCommand_heyjibo(::jibo_msgs::msg::JiboAsrCommand & msg)
  : msg_(msg)
  {}
  Init_JiboAsrCommand_continuous heyjibo(::jibo_msgs::msg::JiboAsrCommand::_heyjibo_type arg)
  {
    msg_.heyjibo = std::move(arg);
    return Init_JiboAsrCommand_continuous(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

class Init_JiboAsrCommand_header
{
public:
  Init_JiboAsrCommand_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JiboAsrCommand_heyjibo header(::jibo_msgs::msg::JiboAsrCommand::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JiboAsrCommand_heyjibo(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jibo_msgs::msg::JiboAsrCommand>()
{
  return jibo_msgs::msg::builder::Init_JiboAsrCommand_header();
}

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__BUILDER_HPP_
