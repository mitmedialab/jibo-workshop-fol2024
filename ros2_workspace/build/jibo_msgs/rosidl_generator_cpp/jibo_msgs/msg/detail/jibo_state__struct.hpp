// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jibo_msgs:msg/JiboState.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_STATE__STRUCT_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_STATE__STRUCT_HPP_

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
# define DEPRECATED__jibo_msgs__msg__JiboState __attribute__((deprecated))
#else
# define DEPRECATED__jibo_msgs__msg__JiboState __declspec(deprecated)
#endif

namespace jibo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JiboState_
{
  using Type = JiboState_<ContainerAllocator>;

  explicit JiboState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_motion = "";
      this->audio = "";
      this->tts_msg = "";
      this->volume = 0.0f;
      this->doing_motion = false;
      this->is_playing_sound = false;
      this->is_listening = false;
    }
  }

  explicit JiboState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    in_motion(_alloc),
    audio(_alloc),
    tts_msg(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->in_motion = "";
      this->audio = "";
      this->tts_msg = "";
      this->volume = 0.0f;
      this->doing_motion = false;
      this->is_playing_sound = false;
      this->is_listening = false;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _in_motion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _in_motion_type in_motion;
  using _audio_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _audio_type audio;
  using _tts_msg_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tts_msg_type tts_msg;
  using _volume_type =
    float;
  _volume_type volume;
  using _doing_motion_type =
    bool;
  _doing_motion_type doing_motion;
  using _is_playing_sound_type =
    bool;
  _is_playing_sound_type is_playing_sound;
  using _is_listening_type =
    bool;
  _is_listening_type is_listening;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__in_motion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->in_motion = _arg;
    return *this;
  }
  Type & set__audio(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->audio = _arg;
    return *this;
  }
  Type & set__tts_msg(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tts_msg = _arg;
    return *this;
  }
  Type & set__volume(
    const float & _arg)
  {
    this->volume = _arg;
    return *this;
  }
  Type & set__doing_motion(
    const bool & _arg)
  {
    this->doing_motion = _arg;
    return *this;
  }
  Type & set__is_playing_sound(
    const bool & _arg)
  {
    this->is_playing_sound = _arg;
    return *this;
  }
  Type & set__is_listening(
    const bool & _arg)
  {
    this->is_listening = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jibo_msgs::msg::JiboState_<ContainerAllocator> *;
  using ConstRawPtr =
    const jibo_msgs::msg::JiboState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jibo_msgs__msg__JiboState
    std::shared_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jibo_msgs__msg__JiboState
    std::shared_ptr<jibo_msgs::msg::JiboState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JiboState_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->in_motion != other.in_motion) {
      return false;
    }
    if (this->audio != other.audio) {
      return false;
    }
    if (this->tts_msg != other.tts_msg) {
      return false;
    }
    if (this->volume != other.volume) {
      return false;
    }
    if (this->doing_motion != other.doing_motion) {
      return false;
    }
    if (this->is_playing_sound != other.is_playing_sound) {
      return false;
    }
    if (this->is_listening != other.is_listening) {
      return false;
    }
    return true;
  }
  bool operator!=(const JiboState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JiboState_

// alias to use template instance with default allocator
using JiboState =
  jibo_msgs::msg::JiboState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_STATE__STRUCT_HPP_
