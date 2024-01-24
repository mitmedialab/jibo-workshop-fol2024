// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__BUILDER_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jibo_msgs/msg/detail/jibo_action__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jibo_msgs
{

namespace msg
{

namespace builder
{

class Init_JiboAction_tts_pitch
{
public:
  explicit Init_JiboAction_tts_pitch(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  ::jibo_msgs::msg::JiboAction tts_pitch(::jibo_msgs::msg::JiboAction::_tts_pitch_type arg)
  {
    msg_.tts_pitch = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_tts_duration_stretch
{
public:
  explicit Init_JiboAction_tts_duration_stretch(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_tts_pitch tts_duration_stretch(::jibo_msgs::msg::JiboAction::_tts_duration_stretch_type arg)
  {
    msg_.tts_duration_stretch = std::move(arg);
    return Init_JiboAction_tts_pitch(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_attention_mode
{
public:
  explicit Init_JiboAction_attention_mode(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_tts_duration_stretch attention_mode(::jibo_msgs::msg::JiboAction::_attention_mode_type arg)
  {
    msg_.attention_mode = std::move(arg);
    return Init_JiboAction_tts_duration_stretch(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_attention_mode
{
public:
  explicit Init_JiboAction_do_attention_mode(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_attention_mode do_attention_mode(::jibo_msgs::msg::JiboAction::_do_attention_mode_type arg)
  {
    msg_.do_attention_mode = std::move(arg);
    return Init_JiboAction_attention_mode(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_anim_transition
{
public:
  explicit Init_JiboAction_anim_transition(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_do_attention_mode anim_transition(::jibo_msgs::msg::JiboAction::_anim_transition_type arg)
  {
    msg_.anim_transition = std::move(arg);
    return Init_JiboAction_do_attention_mode(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_anim_transition
{
public:
  explicit Init_JiboAction_do_anim_transition(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_anim_transition do_anim_transition(::jibo_msgs::msg::JiboAction::_do_anim_transition_type arg)
  {
    msg_.do_anim_transition = std::move(arg);
    return Init_JiboAction_anim_transition(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_volume
{
public:
  explicit Init_JiboAction_volume(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_do_anim_transition volume(::jibo_msgs::msg::JiboAction::_volume_type arg)
  {
    msg_.volume = std::move(arg);
    return Init_JiboAction_do_anim_transition(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_volume
{
public:
  explicit Init_JiboAction_do_volume(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_volume do_volume(::jibo_msgs::msg::JiboAction::_do_volume_type arg)
  {
    msg_.do_volume = std::move(arg);
    return Init_JiboAction_volume(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_led_color
{
public:
  explicit Init_JiboAction_led_color(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_do_volume led_color(::jibo_msgs::msg::JiboAction::_led_color_type arg)
  {
    msg_.led_color = std::move(arg);
    return Init_JiboAction_do_volume(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_audio_filename
{
public:
  explicit Init_JiboAction_audio_filename(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_led_color audio_filename(::jibo_msgs::msg::JiboAction::_audio_filename_type arg)
  {
    msg_.audio_filename = std::move(arg);
    return Init_JiboAction_led_color(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_sound_playback
{
public:
  explicit Init_JiboAction_do_sound_playback(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_audio_filename do_sound_playback(::jibo_msgs::msg::JiboAction::_do_sound_playback_type arg)
  {
    msg_.do_sound_playback = std::move(arg);
    return Init_JiboAction_audio_filename(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_mim_rule
{
public:
  explicit Init_JiboAction_mim_rule(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_do_sound_playback mim_rule(::jibo_msgs::msg::JiboAction::_mim_rule_type arg)
  {
    msg_.mim_rule = std::move(arg);
    return Init_JiboAction_do_sound_playback(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_mim_body
{
public:
  explicit Init_JiboAction_mim_body(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_mim_rule mim_body(::jibo_msgs::msg::JiboAction::_mim_body_type arg)
  {
    msg_.mim_body = std::move(arg);
    return Init_JiboAction_mim_rule(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_mim
{
public:
  explicit Init_JiboAction_do_mim(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_mim_body do_mim(::jibo_msgs::msg::JiboAction::_do_mim_type arg)
  {
    msg_.do_mim = std::move(arg);
    return Init_JiboAction_mim_body(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_tts_text
{
public:
  explicit Init_JiboAction_tts_text(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_do_mim tts_text(::jibo_msgs::msg::JiboAction::_tts_text_type arg)
  {
    msg_.tts_text = std::move(arg);
    return Init_JiboAction_do_mim(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_tts
{
public:
  explicit Init_JiboAction_do_tts(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_tts_text do_tts(::jibo_msgs::msg::JiboAction::_do_tts_type arg)
  {
    msg_.do_tts = std::move(arg);
    return Init_JiboAction_tts_text(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_lookat
{
public:
  explicit Init_JiboAction_lookat(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_do_tts lookat(::jibo_msgs::msg::JiboAction::_lookat_type arg)
  {
    msg_.lookat = std::move(arg);
    return Init_JiboAction_do_tts(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_lookat
{
public:
  explicit Init_JiboAction_do_lookat(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_lookat do_lookat(::jibo_msgs::msg::JiboAction::_do_lookat_type arg)
  {
    msg_.do_lookat = std::move(arg);
    return Init_JiboAction_lookat(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_motion
{
public:
  explicit Init_JiboAction_motion(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_do_lookat motion(::jibo_msgs::msg::JiboAction::_motion_type arg)
  {
    msg_.motion = std::move(arg);
    return Init_JiboAction_do_lookat(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_do_motion
{
public:
  explicit Init_JiboAction_do_motion(::jibo_msgs::msg::JiboAction & msg)
  : msg_(msg)
  {}
  Init_JiboAction_motion do_motion(::jibo_msgs::msg::JiboAction::_do_motion_type arg)
  {
    msg_.do_motion = std::move(arg);
    return Init_JiboAction_motion(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

class Init_JiboAction_header
{
public:
  Init_JiboAction_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JiboAction_do_motion header(::jibo_msgs::msg::JiboAction::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JiboAction_do_motion(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAction msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jibo_msgs::msg::JiboAction>()
{
  return jibo_msgs::msg::builder::Init_JiboAction_header();
}

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__BUILDER_HPP_
