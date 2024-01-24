// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jibo_msgs:msg/JiboRemote.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__STRUCT_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__STRUCT_HPP_

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
# define DEPRECATED__jibo_msgs__msg__JiboRemote __attribute__((deprecated))
#else
# define DEPRECATED__jibo_msgs__msg__JiboRemote __declspec(deprecated)
#endif

namespace jibo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JiboRemote_
{
  using Type = JiboRemote_<ContainerAllocator>;

  explicit JiboRemote_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->do_enter_rosbridge_skill = false;
      this->do_exit_rosbridge_skill = false;
    }
  }

  explicit JiboRemote_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->do_enter_rosbridge_skill = false;
      this->do_exit_rosbridge_skill = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _do_enter_rosbridge_skill_type =
    bool;
  _do_enter_rosbridge_skill_type do_enter_rosbridge_skill;
  using _do_exit_rosbridge_skill_type =
    bool;
  _do_exit_rosbridge_skill_type do_exit_rosbridge_skill;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__do_enter_rosbridge_skill(
    const bool & _arg)
  {
    this->do_enter_rosbridge_skill = _arg;
    return *this;
  }
  Type & set__do_exit_rosbridge_skill(
    const bool & _arg)
  {
    this->do_exit_rosbridge_skill = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jibo_msgs::msg::JiboRemote_<ContainerAllocator> *;
  using ConstRawPtr =
    const jibo_msgs::msg::JiboRemote_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboRemote_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboRemote_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jibo_msgs__msg__JiboRemote
    std::shared_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jibo_msgs__msg__JiboRemote
    std::shared_ptr<jibo_msgs::msg::JiboRemote_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JiboRemote_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->do_enter_rosbridge_skill != other.do_enter_rosbridge_skill) {
      return false;
    }
    if (this->do_exit_rosbridge_skill != other.do_exit_rosbridge_skill) {
      return false;
    }
    return true;
  }
  bool operator!=(const JiboRemote_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JiboRemote_

// alias to use template instance with default allocator
using JiboRemote =
  jibo_msgs::msg::JiboRemote_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_REMOTE__STRUCT_HPP_
