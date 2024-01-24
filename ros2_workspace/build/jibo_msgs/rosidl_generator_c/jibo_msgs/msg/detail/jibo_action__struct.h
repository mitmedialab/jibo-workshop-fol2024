// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from jibo_msgs:msg/JiboAction.idl
// generated code does not contain a copyright notice

#ifndef JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__STRUCT_H_
#define JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Constant 'ANIMTRANS_RESET'.
/**
  * Anim Transition Constants
 */
enum
{
  jibo_msgs__msg__JiboAction__ANIMTRANS_RESET = 0
};

/// Constant 'ANIMTRANS_KEEP_LASTFRAME'.
enum
{
  jibo_msgs__msg__JiboAction__ANIMTRANS_KEEP_LASTFRAME = 1
};

/// Constant 'ATTENTION_MODE_OFF'.
/**
  * Attention Mode Transition Constants
  *
  * This does not completely turn off Jibo's attention mode, but puts it in "COMMAND" mode. It will still react to Hey Jibo and attend to the sound source.
 */
enum
{
  jibo_msgs__msg__JiboAction__ATTENTION_MODE_OFF = 0
};

/// Constant 'ATTENTION_MODE_ON'.
/**
  * This puts Jibo back to "ENGAGED" mode.
 */
enum
{
  jibo_msgs__msg__JiboAction__ATTENTION_MODE_ON = 1
};

/// Constant 'EMOJI_SHARK'.
/**
  * Animation Constants
 */
static const char * const jibo_msgs__msg__JiboAction__EMOJI_SHARK = "Emoji/Emoji_Shark_01_01.keys";

/// Constant 'EMOJI_BEER'.
static const char * const jibo_msgs__msg__JiboAction__EMOJI_BEER = "Emoji/Emoji_Beer_01_01.keys";

/// Constant 'EMOJI_PARTY_PINK'.
static const char * const jibo_msgs__msg__JiboAction__EMOJI_PARTY_PINK = "Emoji/Emoji_PartyPink_01_01.keys";

/// Constant 'EMOJI_PARTY_BLUE'.
static const char * const jibo_msgs__msg__JiboAction__EMOJI_PARTY_BLUE = "Emoji/Emoji_PartyBlue_01_01.keys";

/// Constant 'EMOJI_RAINCLOUD'.
static const char * const jibo_msgs__msg__JiboAction__EMOJI_RAINCLOUD = "Emoji/Emoji_RainCloud_01_01.keys";

/// Constant 'RING_IN_ANIM'.
static const char * const jibo_msgs__msg__JiboAction__RING_IN_ANIM = "Misc/ring_in.keys";

/// Constant 'HAPPY_GO_LUCKY_DANCE'.
static const char * const jibo_msgs__msg__JiboAction__HAPPY_GO_LUCKY_DANCE = "Dances/Happy_Lucky_01_01.keys";

/// Constant 'EYE_FIDGET'.
static const char * const jibo_msgs__msg__JiboAction__EYE_FIDGET = "Misc/eye_fidget.keys";

/// Constant 'LOOK_DOWN'.
static const char * const jibo_msgs__msg__JiboAction__LOOK_DOWN = "Poses/Directional/Body_Look_Center_Down_01_01.keys";

/// Constant 'DEFAULT'.
static const char * const jibo_msgs__msg__JiboAction__DEFAULT = "default.keys";

/// Constant 'QUESTION_ANIM_AND_EMOJI'.
/**
  * Animations for interactive storybook.
 */
static const char * const jibo_msgs__msg__JiboAction__QUESTION_ANIM_AND_EMOJI = "Misc/Question_01_02.keys";

/// Constant 'HAPPY_ANIM_AND_SOUND'.
static const char * const jibo_msgs__msg__JiboAction__HAPPY_ANIM_AND_SOUND = "Misc/Eye_to_Happy_01.keys";

/// Constant 'CELEBRATE_ANIM'.
static const char * const jibo_msgs__msg__JiboAction__CELEBRATE_ANIM = "Dances/Celebrate_01.keys";

/// Constant 'LAUGH_ANIM'.
static const char * const jibo_msgs__msg__JiboAction__LAUGH_ANIM = "Misc/Laughter_01_03.keys";

/// Constant 'SAD_ANIM_SHAKE_HEAD'.
static const char * const jibo_msgs__msg__JiboAction__SAD_ANIM_SHAKE_HEAD = "Misc/Sad_03.keys";

/// Constant 'RING_IN_SOUND'.
/**
  * Motion Constants
 */
static const char * const jibo_msgs__msg__JiboAction__RING_IN_SOUND = "SFX_Global_CheckmarkButton.m4a";

/// Constant 'LOOK_LEFT_RIGHT'.
/**
  * Animations for iSpy Game
 */
static const char * const jibo_msgs__msg__JiboAction__LOOK_LEFT_RIGHT = "Misc/checking_05_01.keys";

/// Constant 'LOOK_DOWN_CENTER'.
static const char * const jibo_msgs__msg__JiboAction__LOOK_DOWN_CENTER = "Misc/embarassed_01_02.keys";

/// Constant 'ROBOT_SILENT_NOD'.
/**
  * Silent animations
 */
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_NOD = "silent/youre_welcome_02.keys";

/// Constant 'ROBOT_SILENT_HAPPY_DANCE'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_HAPPY_DANCE = "Dances/Side_Shaker_01_01.keys";

/// Constant 'ROBOT_SILENT_YES'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_YES = "silent/nod_twice_01.keys";

/// Constant 'ROBOT_SILENT_PUZZLED'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_PUZZLED = "silent/confused_01.keys";

/// Constant 'ROBOT_SILENT_FRUSTRATED'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_FRUSTRATED = "silent/frustrated_02.keys";

/// Constant 'ROBOT_SILENT_SAD'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_SAD = "silent/sad_03.keys";

/// Constant 'ROBOT_SILENT_INTERESTED'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_INTERESTED = "silent/interested_02.keys";

/// Constant 'ROBOT_SILENT_EXCITED'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SILENT_EXCITED = "silent/excited_03.keys";

/// Constant 'ROBOT_SAD'.
/**
  * Sad emotions
 */
static const char * const jibo_msgs__msg__JiboAction__ROBOT_SAD = "Misc/sad_02.keys";

/// Constant 'ROBOT_UNSURE'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_UNSURE = "Misc/thinking_06_02.keys";

/// Constant 'ROBOT_COMFORT'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_COMFORT = "Misc/relieved_01.keys";

/// Constant 'ROBOT_ASK_HELP'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_ASK_HELP = "Misc/puzzled_01_02.keys";

/// Constant 'ROBOT_DISAPPOINTED'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_DISAPPOINTED = "Misc/no_4.keys";

/// Constant 'ROBOT_EXCITED'.
/**
  * Positive emotions
 */
static const char * const jibo_msgs__msg__JiboAction__ROBOT_EXCITED = "Misc/success_02.keys";

/// Constant 'ROBOT_INTERESTED'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_INTERESTED = "Misc/interested_01.keys";

/// Constant 'ROBOT_YES'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_YES = "Misc/yep_02.keys";

/// Constant 'ROBOT_HAPPY_DANCE'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_HAPPY_DANCE = "Dances/dance_circuit_saver_00.keys";

/// Constant 'ROBOT_CURIOUS'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_CURIOUS = "Misc/puzzled_02_02.keys";

/// Constant 'ROBOT_ATTENTION'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_ATTENTION = "Misc/pose_forward.keys";

/// Constant 'ROBOT_CELEBRATION'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_CELEBRATION = "Dances/dance_disco_00.keys";

/// Constant 'ROBOT_ENCOURAGING'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_ENCOURAGING = "Misc/greetings_9.keys";

/// Constant 'ROBOT_WINK'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_WINK = "Misc/eye_medium_blink_01.keys";

/// Constant 'ROBOT_THINKING'.
static const char * const jibo_msgs__msg__JiboAction__ROBOT_THINKING = "Misc/thinking_08.keys";

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'motion'
// Member 'tts_text'
// Member 'mim_body'
// Member 'mim_rule'
// Member 'audio_filename'
#include "rosidl_runtime_c/string.h"
// Member 'lookat'
// Member 'led_color'
#include "jibo_msgs/msg/detail/jibo_vec3__struct.h"

/// Struct defined in msg/JiboAction in the package jibo_msgs.
/**
  * Message for requesting actions of Jibo controller
 */
typedef struct jibo_msgs__msg__JiboAction
{
  std_msgs__msg__Header header;
  bool do_motion;
  /// use constants defined below
  rosidl_runtime_c__String motion;
  bool do_lookat;
  jibo_msgs__msg__JiboVec3 lookat;
  bool do_tts;
  rosidl_runtime_c__String tts_text;
  bool do_mim;
  rosidl_runtime_c__String mim_body;
  rosidl_runtime_c__String mim_rule;
  bool do_sound_playback;
  rosidl_runtime_c__String audio_filename;
  /// bool do_led
  jibo_msgs__msg__JiboVec3 led_color;
  bool do_volume;
  float volume;
  bool do_anim_transition;
  int8_t anim_transition;
  bool do_attention_mode;
  int8_t attention_mode;
  /// TTS Options
  ///
  /// Multiplier, so 2.0 = twice as slow, .5 = twice as fast
  float tts_duration_stretch;
  /// Valid range is 0.2 - 0.8
  float tts_pitch;
} jibo_msgs__msg__JiboAction;

// Struct for a sequence of jibo_msgs__msg__JiboAction.
typedef struct jibo_msgs__msg__JiboAction__Sequence
{
  jibo_msgs__msg__JiboAction * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} jibo_msgs__msg__JiboAction__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // JIBO_MSGS__MSG__DETAIL__JIBO_ACTION__STRUCT_H_
