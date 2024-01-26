# Jacqueline Kory Westlund
# May 2016
#
# The MIT License (MIT)
#
# Copyright (c) 2016 Personal Robots Group
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in all
# copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
# SOFTWARE.

# from PySide import QtGui # basic GUI stuff
import rclpy # ROS
from jibo_msgs.msg import JiboAction # ROS msgs to talk to Tega
from jibo_msgs.msg import JiboVec3 # ROS msgs to talk to Tega
from jibo_msgs.msg import JiboAsrCommand
from jibo_msgs.msg import JiboAsrResult
from jibo_msgs.msg import JiboState

from std_msgs.msg import Bool # for child_attention topic
from std_msgs.msg import Header # standard ROS msg header
import urllib.request
import time

RECORDING_PATH = './recordings/'
max_counter = 100

class jibo_teleop_ros():
    # ROS node

    def __init__(self, ros_node, ros_label, flags):
        """ Initialize ROS """
        # we get a reference to the main ros node so we can do callbacks
        # to publish messages, and subscribe to stuff
        self.ros_node = ros_node
        # we're going to update the ros label with info about messages coming
        # in one topics we're subscribed to
        self.ros_label = ros_label
        # these are shared flags that the UI code will use to change the colors
        # of text or buttons based on what messages we're getting
        self.flags = flags

        # We will publish commands to the tablet and commands to the robot.
        # We might send audio to the audio entrainer on its way to the robot.
        # TODO it may be worthwhile to put the topic names in the config file.
        # self.tablet_pub = rospy.Publisher('opal_tablet_command', OpalCommand,
        #         queue_size = 10)

        self.jibo_pub = rclpy.create_publisher('jibo', JiboAction, queue_size = 10)
        self.jibo_state = rclpy.create_subscription('jibo_state', JiboState, self.on_jibo_state_msg)
        self.jibo_asr_result = rclpy.create_subscription('jibo_asr_result', JiboAsrResult, self.on_jibo_asr_results)
        self.jibo_asr_command = rclpy.create_publisher('jibo_asr_command', JiboAsrCommand, queue_size=10)

    def reset_msgs(self):
        self.flags.jibo_is_playing_sound = False
        self.flags.jibo_is_doing_motion = False
        self.flags.jibo_is_listening = False

        self.jibo_tts = ''
        self.doing_motion = False
        self.is_playing_sound = False
        self.is_listening = False

    def reset_asr_msgs(self):

        self.asr_transcription = ''
        self.asr_slotAction = ''
        self.asr_confidence = 0.0
        self.asr_heuristic_score = 0.0


    def JiboListen(self, heyjibo=True, continuous=False, incremental=False, listentime=0):
        self.asr_transcription = ''
        if listentime == 0:
            self.jibo_asr_command_builder(JiboAsrCommand.START, heyjibo, False, False)
        else:
            self.jibo_asr_command_builder(JiboAsrCommand.START, heyjibo, continuous, incremental)
            time.sleep(listentime)
            self.jibo_asr_command_builder(JiboAsrCommand.STOP, True, False, False)

        self.waitforJiboListen()

    def send_attention_message(self, attention):
        """ Publish JiboAction do motion message """
        if self.jibo_pub is not None:
            print('sending attention message: %s' % attention)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_attention_mode = True
            if attention == "OFF":
                msg.attention_mode = msg.ATTENTION_MODE_OFF
            else:
                msg.attention_mode = msg.ATTENTION_MODE_ON
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def send_motion_message(self, motion):
        """ Publish JiboAction do motion message """
        if self.jibo_pub is not None:
            print('sending motion message: %s' % motion)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_motion = True
            msg.motion = motion
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def send_lookat_message(self, lookat):
        """ Publish JiboAction lookat message """
        if self.jibo_pub is not None:
            print('sending lookat message: %s' % lookat)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_lookat = True
            msg.lookat = lookat
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)
    
    def send_sound_message(self, speech):
        """ Publish JiboAction playback audio message """
        if self.jibo_pub is not None:
            print('\nsending sound message: %s' % speech)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_sound_playback = True
            msg.audio_filename = speech
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def send_sound_motion_message(self, speech, motion):
        """ Publish JiboAction playback audio and motion message """
        if self.jibo_pub is not None:
            print('\nsending sound and motion message: %s' % speech)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_sound_playback = True
            msg.do_motion = True
            msg.audio_filename = speech
            msg.motion = motion
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def send_tts_message(self, speech):
        """ Publish JiboAction playback TTS message """
        if self.jibo_pub is not None:
            print('\nsending speech message: %s' % speech)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_tts = True
            msg.tts_text = speech
            msg.do_volume = True
            msg.volume = 1.0
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)


    def send_volume_message(self, volume):
        """ Publish JiboAction message setting the percent volume to use. """
        if self.jibo_pub is not None:
            print('\nsending volume message: %s' % volume)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_volume = True
            msg.volume = volume
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def send_anim_transition_message(self, anim_transition):
        """ Publish JiboAction message that switches between animation playback modes. """
        if self.jibo_pub is not None:
            print('\nsending anim transition message: %s' % anim_transition)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_attention_mode = True
            msg.attention_mode = msg.ATTENTION_MODE_OFF
            msg.do_anim_transition = True
            msg.anim_transition = anim_transition
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def send_recording_message(self, jibo_recording_type):
        """ Publish JiboAction message that switches between animation playback modes. """
        if self.jibo_pub is not None:
            print('\nsending Jibo recording command message: %s' % jibo_recording_type)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_recording = True #TODO: fix for when recording should stop/reset
            msg.recording_type = jibo_recording_type
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def send_led_message(self, red_val, green_val, blue_val):
        """ Publish JiboAction message that switches between animation playback modes. """
        if self.jibo_pub is not None:
            print('\nsending rgb_val message: %s' % str(red_val) + ',' + str(green_val) + ',' + str(blue_val))
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.do_led = True
            msg.led_color = JiboVec3(red_val, green_val, blue_val)
            self.jibo_pub.publish(msg)
            rclpy.loginfo(msg)

    def on_child_attn_msg(self, data):
        # when we get child attention messages, set a label to say whether the
        # child is attending or not, and also set a flag
        self.flags.child_is_attending = data.data
        if data.data:
            self.ros_label.setText("Child is ATTENDING")
        else:
            self.ros_label.setText("Child is NOT ATTENDING")


    def on_jibo_state_msg(self, data):
        # when we get Jibo state message, set a flag indicating whether the
        # robot is in motion or playing sound or not
        self.flags.jibo_is_playing_sound = data.is_playing_sound
        # Instead of giving us a boolean to indicate whether Jibo is in motion
        # or not, we get the name of the animation.
        self.flags.jibo_is_doing_motion = data.doing_motion
        # when we get Jibo state message, set a flag indicating whether the

        # Is jibo still listening
        self.flags.jibo_is_listening = data.is_listening

        self.jibo_tts = data.tts_msg
        self.doing_motion = data.doing_motion
        self.is_playing_sound = data.is_playing_sound
        self.is_listening = data.is_listening



    def jibo_asr_command_builder(self, command, heyjibo=True, continuous=False, incremental=False, rule=''): 
        #start: self.jibo_asr_command_builder(JiboAsrCommand.START, False, False, "")
        #stop: self.jibo_asr_command_builder(JiboAsrCommand.STOP, False, False, "")
        #rule = "TopRule = $* $HELP {%slotAction='help'%} $*; HELP = (please help) | (do not know) | (not sure) | (unsure) | (need help) | (stuck) | (no idea) | (no clue) | (can not guess) | (need a hint) | (hint) | (help me) ;"
        #continuous: self.jibo_asr_command_builder(JiboAsrCommand.START, True, True, rule)
        if self.jibo_pub is not None:
            msg = JiboAsrCommand()
            msg.header = Header()
            msg.header.stamp = rclpy.Time.now()
            msg.command = command
            msg.heyjibo = heyjibo
            msg.continuous = continuous
            msg.incremental = incremental
            msg.rule = rule
            print(str(msg))
            self.jibo_asr_command.publish(msg)

    def on_jibo_asr_results(self, data):
        rclpy.loginfo(rclpy.get_caller_id() + " I heard: %s", data.transcription)
        self.asr_transcription = data.transcription
        self.asr_confidence = data.confidence
        self.asr_heuristic_score = data.heuristic_score
        self.asr_slotAction = data.slotAction
        #print(data)
        #print(self.asr_transcription)
        #print(self.asr_heuristic_score)
        #print(self.asr_slotAction)


    def waitforJiboTalk(self):
        if self.jibo_pub is not None:
            print('wait while talking:')
            time.sleep(0.5)
            counter = 0
            while not self.is_playing_sound:
                time.sleep(0.1)
                counter += 1
                if counter >= max_counter:
                    break
            print(self.jibo_tts)
            counter = 0
            while self.is_playing_sound:
                time.sleep(0.1) 
                counter += 1
                if counter >= max_counter:
                    self.reset_msgs()
                    break

    def waitforJiboListen(self):
        if self.jibo_pub is not None:
            print('wait while listening:')
            time.sleep(0.5)
            # time.sleep(1.5)
            counter = 0
            while not self.is_listening:
                time.sleep(0.1)
                counter += 1
                if counter >= max_counter:
                    break
            print(self.asr_transcription)
            counter = 0
            while self.is_listening:
                time.sleep(0.1)
                # counter += 1
                # if counter >= max_counter:
                #   break

    def waitforJiboAnim(self):
        if self.jibo_pub is not None:
            print('wait while animating:')
            time.sleep(0.5)
            # time.sleep(1.5)
            counter = 0
            while not self.doing_motion:
                time.sleep(0.1) 
                counter += 1
                if counter >= max_counter:
                    break
            print(self.jibo_tts)
            counter = 0
            while self.doing_motion:
                time.sleep(0.1) 
                # counter += 1
                # if counter >= max_counter:
                #   break



