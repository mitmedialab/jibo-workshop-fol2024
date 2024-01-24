// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jibo_msgs:msg/JiboAsrResult.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__STRUCT_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__jibo_msgs__msg__JiboAsrResult __attribute__((deprecated))
#else
# define DEPRECATED__jibo_msgs__msg__JiboAsrResult __declspec(deprecated)
#endif

namespace jibo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JiboAsrResult_
{
  using Type = JiboAsrResult_<ContainerAllocator>;

  explicit JiboAsrResult_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transcription = "";
      this->heyjibo = false;
      this->confidence = 0.0;
      this->heuristic_score = 0.0;
      this->slotaction = "";
    }
  }

  explicit JiboAsrResult_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    transcription(_alloc),
    slotaction(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->transcription = "";
      this->heyjibo = false;
      this->confidence = 0.0;
      this->heuristic_score = 0.0;
      this->slotaction = "";
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _transcription_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _transcription_type transcription;
  using _heyjibo_type =
    bool;
  _heyjibo_type heyjibo;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _heuristic_score_type =
    double;
  _heuristic_score_type heuristic_score;
  using _slotaction_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _slotaction_type slotaction;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__transcription(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->transcription = _arg;
    return *this;
  }
  Type & set__heyjibo(
    const bool & _arg)
  {
    this->heyjibo = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
    return *this;
  }
  Type & set__heuristic_score(
    const double & _arg)
  {
    this->heuristic_score = _arg;
    return *this;
  }
  Type & set__slotaction(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->slotaction = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jibo_msgs::msg::JiboAsrResult_<ContainerAllocator> *;
  using ConstRawPtr =
    const jibo_msgs::msg::JiboAsrResult_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboAsrResult_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboAsrResult_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jibo_msgs__msg__JiboAsrResult
    std::shared_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jibo_msgs__msg__JiboAsrResult
    std::shared_ptr<jibo_msgs::msg::JiboAsrResult_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JiboAsrResult_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->transcription != other.transcription) {
      return false;
    }
    if (this->heyjibo != other.heyjibo) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->heuristic_score != other.heuristic_score) {
      return false;
    }
    if (this->slotaction != other.slotaction) {
      return false;
    }
    return true;
  }
  bool operator!=(const JiboAsrResult_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JiboAsrResult_

// alias to use template instance with default allocator
using JiboAsrResult =
  jibo_msgs::msg::JiboAsrResult_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_RESULT__STRUCT_HPP_
