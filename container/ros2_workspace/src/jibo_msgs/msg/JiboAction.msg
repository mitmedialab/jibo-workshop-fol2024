#
# Message for requesting actions of Jibo controller
#

std_msgs/Header header
bool do_motion
string motion  # use constants defined below

bool do_lookat
jibo_msgs/JiboVec3 lookat

bool do_tts
string tts_text

bool do_mim
string mim_body
string mim_rule

bool do_sound_playback
string audio_filename

bool do_led
jibo_msgs/JiboVec3 led_color

bool do_volume
float32 volume

bool do_anim_transition
int8 anim_transition

bool do_attention_mode
int8 attention_mode
#
# TTS Options
#
float32 tts_duration_stretch # Multiplier, so 2.0 = twice as slow, .5 = twice as fast
float32 tts_pitch # Valid range is 0.2 - 0.8

#
# Anim Transition Constants
#
int8 ANIMTRANS_RESET = 0
int8 ANIMTRANS_KEEP_LASTFRAME = 1

# Attention Mode Transition Constants
#
int8 ATTENTION_MODE_OFF = 0 # This does not completely turn off Jibo's attention mode, but puts it in "COMMAND" mode. It will still react to Hey Jibo and attend to the sound source.
int8 ATTENTION_MODE_ON = 1 # This puts Jibo back to "ENGAGED" mode.

#
# Animation Constants
#

string EMOJI_SHARK = Emoji/Emoji_Shark_01_01.keys
string EMOJI_BEER = Emoji/Emoji_Beer_01_01.keys
string EMOJI_PARTY_PINK = Emoji/Emoji_PartyPink_01_01.keys
string EMOJI_PARTY_BLUE = Emoji/Emoji_PartyBlue_01_01.keys
string EMOJI_RAINCLOUD = Emoji/Emoji_RainCloud_01_01.keys

string RING_IN_ANIM = Misc/ring_in.keys
string HAPPY_GO_LUCKY_DANCE = Dances/Happy_Lucky_01_01.keys
string EYE_FIDGET = Misc/eye_fidget.keys
string LOOK_DOWN = Poses/Directional/Body_Look_Center_Down_01_01.keys
string DEFAULT = default.keys

# Animations for interactive storybook.
string QUESTION_ANIM_AND_EMOJI = Misc/Question_01_02.keys
string HAPPY_ANIM_AND_SOUND = Misc/Eye_to_Happy_01.keys
string CELEBRATE_ANIM = Dances/Celebrate_01.keys
string LAUGH_ANIM = Misc/Laughter_01_03.keys
string SAD_ANIM_SHAKE_HEAD = Misc/Sad_03.keys

#
# Motion Constants
#
string RING_IN_SOUND = SFX_Global_CheckmarkButton.m4a

#
# Animations for iSpy Game
#

string LOOK_LEFT_RIGHT = Misc/checking_05_01.keys
string LOOK_DOWN_CENTER = Misc/embarassed_01_02.keys

# Silent animations
string ROBOT_SILENT_NOD = silent/youre_welcome_02.keys
string ROBOT_SILENT_HAPPY_DANCE = Dances/Side_Shaker_01_01.keys
string ROBOT_SILENT_YES = silent/nod_twice_01.keys
string ROBOT_SILENT_PUZZLED = silent/confused_01.keys
string ROBOT_SILENT_FRUSTRATED = silent/frustrated_02.keys
string ROBOT_SILENT_SAD = silent/sad_03.keys
string ROBOT_SILENT_INTERESTED = silent/interested_02.keys
string ROBOT_SILENT_EXCITED = silent/excited_03.keys

# Sad emotions
string ROBOT_SAD = Misc/sad_02.keys
string ROBOT_UNSURE = Misc/thinking_06_02.keys
string ROBOT_COMFORT = Misc/relieved_01.keys
string ROBOT_ASK_HELP = Misc/puzzled_01_02.keys
string ROBOT_DISAPPOINTED = Misc/no_4.keys

# Positive emotions
string ROBOT_EXCITED = Misc/success_02.keys
string ROBOT_INTERESTED = Misc/interested_01.keys
string ROBOT_YES = Misc/yep_02.keys
string ROBOT_HAPPY_DANCE = Dances/dance_circuit_saver_00.keys
string ROBOT_CURIOUS = Misc/puzzled_02_02.keys
string ROBOT_ATTENTION = Misc/pose_forward.keys
string ROBOT_CELEBRATION = Dances/dance_disco_00.keys
string ROBOT_ENCOURAGING = Misc/greetings_9.keys
string ROBOT_WINK = Misc/eye_medium_blink_01.keys
string ROBOT_THINKING = Misc/thinking_08.keys


