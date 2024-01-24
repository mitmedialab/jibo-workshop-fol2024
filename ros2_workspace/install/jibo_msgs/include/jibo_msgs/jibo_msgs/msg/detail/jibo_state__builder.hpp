// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jibo_msgs:msg/JiboState.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_STATE__BUILDER_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jibo_msgs/msg/detail/jibo_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jibo_msgs
{

namespace msg
{

namespace builder
{

class Init_JiboState_is_listening
{
public:
  explicit Init_JiboState_is_listening(::jibo_msgs::msg::JiboState & msg)
  : msg_(msg)
  {}
  ::jibo_msgs::msg::JiboState is_listening(::jibo_msgs::msg::JiboState::_is_listening_type arg)
  {
    msg_.is_listening = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

class Init_JiboState_is_playing_sound
{
public:
  explicit Init_JiboState_is_playing_sound(::jibo_msgs::msg::JiboState & msg)
  : msg_(msg)
  {}
  Init_JiboState_is_listening is_playing_sound(::jibo_msgs::msg::JiboState::_is_playing_sound_type arg)
  {
    msg_.is_playing_sound = std::move(arg);
    return Init_JiboState_is_listening(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

class Init_JiboState_doing_motion
{
public:
  explicit Init_JiboState_doing_motion(::jibo_msgs::msg::JiboState & msg)
  : msg_(msg)
  {}
  Init_JiboState_is_playing_sound doing_motion(::jibo_msgs::msg::JiboState::_doing_motion_type arg)
  {
    msg_.doing_motion = std::move(arg);
    return Init_JiboState_is_playing_sound(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

class Init_JiboState_volume
{
public:
  explicit Init_JiboState_volume(::jibo_msgs::msg::JiboState & msg)
  : msg_(msg)
  {}
  Init_JiboState_doing_motion volume(::jibo_msgs::msg::JiboState::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_JiboState_doing_motion(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

class Init_JiboState_tts_msg
{
public:
  explicit Init_JiboState_tts_msg(::jibo_msgs::msg::JiboState & msg)
  : msg_(msg)
  {}
  Init_JiboState_volume tts_msg(::jibo_msgs::msg::JiboState::_tts_msg_type arg)
  {
    msg_.tts_msg = std::move(arg);
    return Init_JiboState_volume(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

class Init_JiboState_audio
{
public:
  explicit Init_JiboState_audio(::jibo_msgs::msg::JiboState & msg)
  : msg_(msg)
  {}
  Init_JiboState_tts_msg audio(::jibo_msgs::msg::JiboState::_audio_type arg)
  {
    msg_.audio = std::move(arg);
    return Init_JiboState_tts_msg(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

class Init_JiboState_in_motion
{
public:
  explicit Init_JiboState_in_motion(::jibo_msgs::msg::JiboState & msg)
  : msg_(msg)
  {}
  Init_JiboState_audio in_motion(::jibo_msgs::msg::JiboState::_in_motion_type arg)
  {
    msg_.in_motion = std::move(arg);
    return Init_JiboState_audio(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

class Init_JiboState_header
{
public:
  Init_JiboState_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JiboState_in_motion header(::jibo_msgs::msg::JiboState::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JiboState_in_motion(msg_);
  }

private:
  ::jibo_msgs::msg::JiboState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jibo_msgs::msg::JiboState>()
{
  return jibo_msgs::msg::builder::Init_JiboState_header();
}

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_STATE__BUILDER_HPP_
