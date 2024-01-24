// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__STRUCT_HPP_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__STRUCT_HPP_

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
// Member 'lookat'
// Member 'led_color'
#include "jibo_msgs/msg/detail/jibo_vec3__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__jibo_msgs__msg__JiboAction __attribute__((deprecated))
#else
# define DEPRECATED__jibo_msgs__msg__JiboAction __declspec(deprecated)
#endif

namespace jibo_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct JiboAction_
{
  using Type = JiboAction_<ContainerAllocator>;

  explicit JiboAction_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init),
    lookat(_init),
    led_color(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->do_motion = false;
      this->motion = "";
      this->do_lookat = false;
      this->do_tts = false;
      this->tts_text = "";
      this->do_mim = false;
      this->mim_body = "";
      this->mim_rule = "";
      this->do_sound_playback = false;
      this->audio_filename = "";
      this->do_volume = false;
      this->volume = 0.0f;
      this->do_anim_transition = false;
      this->anim_transition = 0;
      this->do_attention_mode = false;
      this->attention_mode = 0;
      this->tts_duration_stretch = 0.0f;
      this->tts_pitch = 0.0f;
    }
  }

  explicit JiboAction_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init),
    motion(_alloc),
    lookat(_alloc, _init),
    tts_text(_alloc),
    mim_body(_alloc),
    mim_rule(_alloc),
    audio_filename(_alloc),
    led_color(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->do_motion = false;
      this->motion = "";
      this->do_lookat = false;
      this->do_tts = false;
      this->tts_text = "";
      this->do_mim = false;
      this->mim_body = "";
      this->mim_rule = "";
      this->do_sound_playback = false;
      this->audio_filename = "";
      this->do_volume = false;
      this->volume = 0.0f;
      this->do_anim_transition = false;
      this->anim_transition = 0;
      this->do_attention_mode = false;
      this->attention_mode = 0;
      this->tts_duration_stretch = 0.0f;
      this->tts_pitch = 0.0f;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _do_motion_type =
    bool;
  _do_motion_type do_motion;
  using _motion_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _motion_type motion;
  using _do_lookat_type =
    bool;
  _do_lookat_type do_lookat;
  using _lookat_type =
    jibo_msgs::msg::JiboVec3_<ContainerAllocator>;
  _lookat_type lookat;
  using _do_tts_type =
    bool;
  _do_tts_type do_tts;
  using _tts_text_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _tts_text_type tts_text;
  using _do_mim_type =
    bool;
  _do_mim_type do_mim;
  using _mim_body_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mim_body_type mim_body;
  using _mim_rule_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _mim_rule_type mim_rule;
  using _do_sound_playback_type =
    bool;
  _do_sound_playback_type do_sound_playback;
  using _audio_filename_type =
    std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>;
  _audio_filename_type audio_filename;
  using _led_color_type =
    jibo_msgs::msg::JiboVec3_<ContainerAllocator>;
  _led_color_type led_color;
  using _do_volume_type =
    bool;
  _do_volume_type do_volume;
  using _volume_type =
    float;
  _volume_type volume;
  using _do_anim_transition_type =
    bool;
  _do_anim_transition_type do_anim_transition;
  using _anim_transition_type =
    int8_t;
  _anim_transition_type anim_transition;
  using _do_attention_mode_type =
    bool;
  _do_attention_mode_type do_attention_mode;
  using _attention_mode_type =
    int8_t;
  _attention_mode_type attention_mode;
  using _tts_duration_stretch_type =
    float;
  _tts_duration_stretch_type tts_duration_stretch;
  using _tts_pitch_type =
    float;
  _tts_pitch_type tts_pitch;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__do_motion(
    const bool & _arg)
  {
    this->do_motion = _arg;
    return *this;
  }
  Type & set__motion(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->motion = _arg;
    return *this;
  }
  Type & set__do_lookat(
    const bool & _arg)
  {
    this->do_lookat = _arg;
    return *this;
  }
  Type & set__lookat(
    const jibo_msgs::msg::JiboVec3_<ContainerAllocator> & _arg)
  {
    this->lookat = _arg;
    return *this;
  }
  Type & set__do_tts(
    const bool & _arg)
  {
    this->do_tts = _arg;
    return *this;
  }
  Type & set__tts_text(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->tts_text = _arg;
    return *this;
  }
  Type & set__do_mim(
    const bool & _arg)
  {
    this->do_mim = _arg;
    return *this;
  }
  Type & set__mim_body(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mim_body = _arg;
    return *this;
  }
  Type & set__mim_rule(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->mim_rule = _arg;
    return *this;
  }
  Type & set__do_sound_playback(
    const bool & _arg)
  {
    this->do_sound_playback = _arg;
    return *this;
  }
  Type & set__audio_filename(
    const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> & _arg)
  {
    this->audio_filename = _arg;
    return *this;
  }
  Type & set__led_color(
    const jibo_msgs::msg::JiboVec3_<ContainerAllocator> & _arg)
  {
    this->led_color = _arg;
    return *this;
  }
  Type & set__do_volume(
    const bool & _arg)
  {
    this->do_volume = _arg;
    return *this;
  }
  Type & set__volume(
    const float & _arg)
  {
    this->volume = _arg;
    return *this;
  }
  Type & set__do_anim_transition(
    const bool & _arg)
  {
    this->do_anim_transition = _arg;
    return *this;
  }
  Type & set__anim_transition(
    const int8_t & _arg)
  {
    this->anim_transition = _arg;
    return *this;
  }
  Type & set__do_attention_mode(
    const bool & _arg)
  {
    this->do_attention_mode = _arg;
    return *this;
  }
  Type & set__attention_mode(
    const int8_t & _arg)
  {
    this->attention_mode = _arg;
    return *this;
  }
  Type & set__tts_duration_stretch(
    const float & _arg)
  {
    this->tts_duration_stretch = _arg;
    return *this;
  }
  Type & set__tts_pitch(
    const float & _arg)
  {
    this->tts_pitch = _arg;
    return *this;
  }

  // constant declarations
  static constexpr int8_t ANIMTRANS_RESET =
    0;
  static constexpr int8_t ANIMTRANS_KEEP_LASTFRAME =
    1;
  static constexpr int8_t ATTENTION_MODE_OFF =
    0;
  static constexpr int8_t ATTENTION_MODE_ON =
    1;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMOJI_SHARK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMOJI_BEER;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMOJI_PARTY_PINK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMOJI_PARTY_BLUE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EMOJI_RAINCLOUD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RING_IN_ANIM;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> HAPPY_GO_LUCKY_DANCE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> EYE_FIDGET;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOOK_DOWN;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> DEFAULT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> QUESTION_ANIM_AND_EMOJI;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> HAPPY_ANIM_AND_SOUND;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> CELEBRATE_ANIM;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LAUGH_ANIM;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> SAD_ANIM_SHAKE_HEAD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> RING_IN_SOUND;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOOK_LEFT_RIGHT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> LOOK_DOWN_CENTER;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_NOD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_HAPPY_DANCE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_YES;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_PUZZLED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_FRUSTRATED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_SAD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_INTERESTED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SILENT_EXCITED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_SAD;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_UNSURE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_COMFORT;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_ASK_HELP;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_DISAPPOINTED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_EXCITED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_INTERESTED;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_YES;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_HAPPY_DANCE;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_CURIOUS;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_ATTENTION;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_CELEBRATION;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_ENCOURAGING;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_WINK;
  static const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>> ROBOT_THINKING;

  // pointer types
  using RawPtr =
    jibo_msgs::msg::JiboAction_<ContainerAllocator> *;
  using ConstRawPtr =
    const jibo_msgs::msg::JiboAction_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboAction_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jibo_msgs::msg::JiboAction_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jibo_msgs__msg__JiboAction
    std::shared_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jibo_msgs__msg__JiboAction
    std::shared_ptr<jibo_msgs::msg::JiboAction_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JiboAction_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->do_motion != other.do_motion) {
      return false;
    }
    if (this->motion != other.motion) {
      return false;
    }
    if (this->do_lookat != other.do_lookat) {
      return false;
    }
    if (this->lookat != other.lookat) {
      return false;
    }
    if (this->do_tts != other.do_tts) {
      return false;
    }
    if (this->tts_text != other.tts_text) {
      return false;
    }
    if (this->do_mim != other.do_mim) {
      return false;
    }
    if (this->mim_body != other.mim_body) {
      return false;
    }
    if (this->mim_rule != other.mim_rule) {
      return false;
    }
    if (this->do_sound_playback != other.do_sound_playback) {
      return false;
    }
    if (this->audio_filename != other.audio_filename) {
      return false;
    }
    if (this->led_color != other.led_color) {
      return false;
    }
    if (this->do_volume != other.do_volume) {
      return false;
    }
    if (this->volume != other.volume) {
      return false;
    }
    if (this->do_anim_transition != other.do_anim_transition) {
      return false;
    }
    if (this->anim_transition != other.anim_transition) {
      return false;
    }
    if (this->do_attention_mode != other.do_attention_mode) {
      return false;
    }
    if (this->attention_mode != other.attention_mode) {
      return false;
    }
    if (this->tts_duration_stretch != other.tts_duration_stretch) {
      return false;
    }
    if (this->tts_pitch != other.tts_pitch) {
      return false;
    }
    return true;
  }
  bool operator!=(const JiboAction_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JiboAction_

// alias to use template instance with default allocator
using JiboAction =
  jibo_msgs::msg::JiboAction_<std::allocator<void>>;

// constant definitions
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t JiboAction_<ContainerAllocator>::ANIMTRANS_RESET;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t JiboAction_<ContainerAllocator>::ANIMTRANS_KEEP_LASTFRAME;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t JiboAction_<ContainerAllocator>::ATTENTION_MODE_OFF;
#endif  // __cplusplus < 201703L
#if __cplusplus < 201703L
// static constexpr member variable definitions are only needed in C++14 and below, deprecated in C++17
template<typename ContainerAllocator>
constexpr int8_t JiboAction_<ContainerAllocator>::ATTENTION_MODE_ON;
#endif  // __cplusplus < 201703L
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::EMOJI_SHARK = "Emoji/Emoji_Shark_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::EMOJI_BEER = "Emoji/Emoji_Beer_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::EMOJI_PARTY_PINK = "Emoji/Emoji_PartyPink_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::EMOJI_PARTY_BLUE = "Emoji/Emoji_PartyBlue_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::EMOJI_RAINCLOUD = "Emoji/Emoji_RainCloud_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::RING_IN_ANIM = "Misc/ring_in.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::HAPPY_GO_LUCKY_DANCE = "Dances/Happy_Lucky_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::EYE_FIDGET = "Misc/eye_fidget.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::LOOK_DOWN = "Poses/Directional/Body_Look_Center_Down_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::DEFAULT = "default.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::QUESTION_ANIM_AND_EMOJI = "Misc/Question_01_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::HAPPY_ANIM_AND_SOUND = "Misc/Eye_to_Happy_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::CELEBRATE_ANIM = "Dances/Celebrate_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::LAUGH_ANIM = "Misc/Laughter_01_03.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::SAD_ANIM_SHAKE_HEAD = "Misc/Sad_03.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::RING_IN_SOUND = "SFX_Global_CheckmarkButton.m4a";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::LOOK_LEFT_RIGHT = "Misc/checking_05_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::LOOK_DOWN_CENTER = "Misc/embarassed_01_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_NOD = "silent/youre_welcome_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_HAPPY_DANCE = "Dances/Side_Shaker_01_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_YES = "silent/nod_twice_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_PUZZLED = "silent/confused_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_FRUSTRATED = "silent/frustrated_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_SAD = "silent/sad_03.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_INTERESTED = "silent/interested_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SILENT_EXCITED = "silent/excited_03.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_SAD = "Misc/sad_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_UNSURE = "Misc/thinking_06_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_COMFORT = "Misc/relieved_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_ASK_HELP = "Misc/puzzled_01_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_DISAPPOINTED = "Misc/no_4.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_EXCITED = "Misc/success_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_INTERESTED = "Misc/interested_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_YES = "Misc/yep_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_HAPPY_DANCE = "Dances/dance_circuit_saver_00.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_CURIOUS = "Misc/puzzled_02_02.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_ATTENTION = "Misc/pose_forward.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_CELEBRATION = "Dances/dance_disco_00.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_ENCOURAGING = "Misc/greetings_9.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_WINK = "Misc/eye_medium_blink_01.keys";
template<typename ContainerAllocator>
const std::basic_string<char, std::char_traits<char>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<char>>
JiboAction_<ContainerAllocator>::ROBOT_THINKING = "Misc/thinking_08.keys";

}  // namespace msg

}  // namespace jibo_msgs

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__STRUCT_HPP_
