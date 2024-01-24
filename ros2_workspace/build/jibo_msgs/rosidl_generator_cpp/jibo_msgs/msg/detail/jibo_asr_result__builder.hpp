// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from jibo_msgs:msg/JiboAsrResult.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__BUILDER_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "jibo_msgs/msg/detail/jibo_asr_result__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace jibo_msgs
{

namespace msg
{

namespace builder
{

class Init_JiboAsrResult_slotaction
{
public:
  explicit Init_JiboAsrResult_slotaction(::jibo_msgs::msg::JiboAsrResult & msg)
  : msg_(msg)
  {}
  ::jibo_msgs::msg::JiboAsrResult slotaction(::jibo_msgs::msg::JiboAsrResult::_slotaction_type arg)
  {
    msg_.slotaction = std::move(arg);
    return std::move(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrResult msg_;
};

class Init_JiboAsrResult_heuristic_score
{
public:
  explicit Init_JiboAsrResult_heuristic_score(::jibo_msgs::msg::JiboAsrResult & msg)
  : msg_(msg)
  {}
  Init_JiboAsrResult_slotaction heuristic_score(::jibo_msgs::msg::JiboAsrResult::_heuristic_score_type arg)
  {
    msg_.heuristic_score = std::move(arg);
    return Init_JiboAsrResult_slotaction(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrResult msg_;
};

class Init_JiboAsrResult_confidence
{
public:
  explicit Init_JiboAsrResult_confidence(::jibo_msgs::msg::JiboAsrResult & msg)
  : msg_(msg)
  {}
  Init_JiboAsrResult_heuristic_score confidence(::jibo_msgs::msg::JiboAsrResult::_confidence_type arg)
  {
    msg_.confidence = std::move(arg);
    return Init_JiboAsrResult_heuristic_score(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrResult msg_;
};

class Init_JiboAsrResult_heyjibo
{
public:
  explicit Init_JiboAsrResult_heyjibo(::jibo_msgs::msg::JiboAsrResult & msg)
  : msg_(msg)
  {}
  Init_JiboAsrResult_confidence heyjibo(::jibo_msgs::msg::JiboAsrResult::_heyjibo_type arg)
  {
    msg_.heyjibo = std::move(arg);
    return Init_JiboAsrResult_confidence(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrResult msg_;
};

class Init_JiboAsrResult_transcription
{
public:
  explicit Init_JiboAsrResult_transcription(::jibo_msgs::msg::JiboAsrResult & msg)
  : msg_(msg)
  {}
  Init_JiboAsrResult_heyjibo transcription(::jibo_msgs::msg::JiboAsrResult::_transcription_type arg)
  {
    msg_.transcription = std::move(arg);
    return Init_JiboAsrResult_heyjibo(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrResult msg_;
};

class Init_JiboAsrResult_header
{
public:
  Init_JiboAsrResult_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_JiboAsrResult_transcription header(::jibo_msgs::msg::JiboAsrResult::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_JiboAsrResult_transcription(msg_);
  }

private:
  ::jibo_msgs::msg::JiboAsrResult msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::jibo_msgs::msg::JiboAsrResult>()
{
  return jibo_msgs::msg::builder::Init_JiboAsrResult_header();
}

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__BUILDER_HPP_
