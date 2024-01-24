// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jibo_msgs:msg/JiboAsrCommand.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__STRUCT_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__STRUCT_HPP_

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
# define DEPRECATED__jibo_msgs__msg__JiboAsrCommand __attribute__((deprecated))
#else
# define DEPRECATED__jibo_msgs__msg__JiboAsrCommand __declspec(deprecated)
#endif

namespace jibo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JiboAsrCommand_
{
  using Type = JiboAsrCommand_<ContainerAllocator>;

  explicit JiboAsrCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heyjibo = false;
      this->continuous = false;
      this->incremental = false;
      this->alternatives = false;
      this->detectend = false;
      this->rule = "";
      this->command = 0;
    }
  }

  explicit JiboAsrCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    rule(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->heyjibo = false;
      this->continuous = false;
      this->incremental = false;
      this->alternatives = false;
      this->detectend = false;
      this->rule = "";
      this->command = 0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _heyjibo_type =
    bool;
  _heyjibo_type heyjibo;
  using _continuous_type =
    bool;
  _continuous_type continuous;
  using _incremental_type =
    bool;
  _incremental_type incremental;
  using _alternatives_type =
    bool;
  _alternatives_type alternatives;
  using _detectend_type =
    bool;
  _detectend_type detectend;
  using _rule_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _rule_type rule;
  using _command_type =
    int8_t;
  _command_type command;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__heyjibo(
    const bool & _arg)
  {
    this->heyjibo = _arg;
    return *this;
  }
  Type & set__continuous(
    const bool & _arg)
  {
    this->continuous = _arg;
    return *this;
  }
  Type & set__incremental(
    const bool & _arg)
  {
    this->incremental = _arg;
    return *this;
  }
  Type & set__alternatives(
    const bool & _arg)
  {
    this->alternatives = _arg;
    return *this;
  }
  Type & set__detectend(
    const bool & _arg)
  {
    this->detectend = _arg;
    return *this;
  }
  Type & set__rule(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->rule = _arg;
    return *this;
  }
  Type & set__command(
    const int8_t & _arg)
  {
    this->command = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t STOP =
    0;
  static constexpr int8_t START =
    1;

  // pointer types
  using RawPtr =
    jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jibo_msgs__msg__JiboAsrCommand
    std::shared_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jibo_msgs__msg__JiboAsrCommand
    std::shared_ptr<jibo_msgs::msg::JiboAsrCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JiboAsrCommand_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->heyjibo != other.heyjibo) {
      return false;
    }
    if (this->continuous != other.continuous) {
      return false;
    }
    if (this->incremental != other.incremental) {
      return false;
    }
    if (this->alternatives != other.alternatives) {
      return false;
    }
    if (this->detectend != other.detectend) {
      return false;
    }
    if (this->rule != other.rule) {
      return false;
    }
    if (this->command != other.command) {
      return false;
    }
    return true;
  }
  bool operator!=(const JiboAsrCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JiboAsrCommand_

// alias to use template instance with default allocator
using JiboAsrCommand =
  jibo_msgs::msg::JiboAsrCommand_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t JiboAsrCommand_<ContainerAllocator>::STOP;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t JiboAsrCommand_<ContainerAllocator>::START;
#endif  // __cplusplus < 201703L

}  // namespace msg

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ASR_COMMAND__STRUCT_HPP_
