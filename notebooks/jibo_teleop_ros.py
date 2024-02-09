import rclpy
from rclpy.node import Node
from jibo_msgs.msg import JiboAction # ROS msgs to talk to Tega
from jibo_msgs.msg import JiboVec3 # ROS msgs to talk to Tega
from jibo_msgs.msg import JiboAsrCommand
from jibo_msgs.msg import JiboAsrResult
from jibo_msgs.msg import JiboState

from std_msgs.msg import Bool # for child_attention topic
from std_msgs.msg import Header # standard ROS msg header
import urllib.request
import time

max_counter = 100

class jibo_teleop_ros(Node):
    # ROS node

    def __init__(self, ros_node, ros_label, flags):
        super().__init__('ros_teleop')
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
        # self.reset_msgs()
        # self.reset_asr_msgs()

        self.jibo_pub = self.ros_node.create_publisher(JiboAction, 'jibo', 10)
        self.jibo_state = self.ros_node.create_subscription(JiboState, 'jibo_state', self.on_jibo_state_msg, 10)
        self.jibo_state
        
        self.jibo_asr_result = self.ros_node.create_subscription(JiboAsrResult, 'jibo_asr_result', self.on_jibo_asr_results, 10)
        self.jibo_asr_result
        self.jibo_asr_command = self.ros_node.create_publisher(JiboAsrCommand, 'jibo_asr_command', 10)

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
        self.asr_slotaction = ''
        self.asr_confidence = 0.0
        self.asr_heuristic_score = 0.0


    def JiboListen(self, heyjibo=True, continuous=False, incremental=False, listentime=0):
        if listentime == 0:
            self.jibo_asr_command_builder(JiboAsrCommand.START, heyjibo, False, False)
        else:
            self.jibo_asr_command_builder(JiboAsrCommand.START, heyjibo, continuous, incremental)
            time.sleep(listentime)
            self.jibo_asr_command_builder(JiboAsrCommand.STOP, True, False, False)

        self.waitforJiboListen()
        print('out from waitforJiboListen')

    def send_attention_message(self, attention):
        """ Publish JiboAction do motion message """
        if self.jibo_pub is not None:
            print('sending attention message: %s' % attention)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_attention_mode = True
            if attention == "OFF":
                msg.attention_mode = msg.ATTENTION_MODE_OFF
            else:
                msg.attention_mode = msg.ATTENTION_MODE_ON
            self.jibo_pub.publish(msg)
            self.ros_node.get_logger().info(msg.do_attention_mode)

    def send_motion_message(self, motion):
        """ Publish JiboAction do motion message """
        if self.jibo_pub is not None:
            print('sending motion message: %s' % motion)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_motion = True
            msg.motion = motion
            self.jibo_pub.publish(msg)
            self.ros_node.get_logger().info(msg.motion)

    def send_lookat_message(self, x,y,z):
        """ Publish JiboAction lookat message """
        if self.jibo_pub is not None:
            print('sending lookat message: {},{},{}'.format(x,y,z))
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_lookat = True
            # msg.lookat = JiboVec3(x,y,z)
            lookat = JiboVec3()
            lookat.x=x
            lookat.y=y
            lookat.z=z
            msg.lookat = lookat
            self.jibo_pub.publish(msg)
            # self.ros_node.get_logger().info(msg.lookat)
    
    def send_sound_message(self, speech):
        """ Publish JiboAction playback audio message """
        if self.jibo_pub is not None:
            print('\nsending sound message: %s' % speech)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_sound_playback = True
            msg.audio_filename = speech
            self.jibo_pub.publish(msg)
            self.ros_node.get_logger().info(msg.audio_filename)

    def send_sound_motion_message(self, speech, motion):
        """ Publish JiboAction playback audio and motion message """
        if self.jibo_pub is not None:
            print('\nsending sound and motion message: %s' % speech)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_sound_playback = True
            msg.do_motion = True
            msg.audio_filename = speech
            msg.motion = motion
            self.jibo_pub.publish(msg)
            self.ros_node.get_logger().info(msg.audio_filename)

    def send_tts_message(self, speech):
        """ Publish JiboAction playback TTS message """
        if self.jibo_pub is not None:
            print('\nsending speech message: %s' % speech)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_tts = True
            msg.tts_text = speech
            msg.do_volume = True
            msg.volume = 1.0
            self.jibo_pub.publish(msg)
            self.ros_node.get_logger().info(msg.tts_text)


    def send_volume_message(self, volume):
        """ Publish JiboAction message setting the percent volume to use. """
        if self.jibo_pub is not None:
            print('\nsending volume message: %s' % volume)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_volume = True
            msg.volume = volume
            self.jibo_pub.publish(msg)
            self.ros_node.get_logger().info(msg.volume)

    def send_anim_transition_message(self, anim_transition):
        """ Publish JiboAction message that switches between animation playback modes. """
        if self.jibo_pub is not None:
            print('\nsending anim transition message: %s' % anim_transition)
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_attention_mode = True
            msg.attention_mode = msg.ATTENTION_MODE_OFF
            msg.do_anim_transition = True
            msg.anim_transition = anim_transition
            self.jibo_pub.publish(msg)
            self.ros_node.get_logger().info(msg.anim_transition)

    def send_led_message(self, red_val, green_val, blue_val):
        """ Publish JiboAction message that switches between animation playback modes. """
        if self.jibo_pub is not None:
            print('\nsending rgb_val message: %s' % str(red_val) + ',' + str(green_val) + ',' + str(blue_val))
            msg = JiboAction()
            # add header
            msg.header = Header()
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.do_led = True
            led_color = JiboVec3()
            led_color.x=red_val
            led_color.y=green_val
            led_color.z=blue_val
            msg.led_color = led_color
            self.jibo_pub.publish(msg)
            # self.ros_node.get_logger().info(msg.led_color)

    @rclpy.callback_groups 
    def on_jibo_state_msg(self, data):
        print(data)
        # when we get Jibo state message, set a flag indicating whether the

        # robot is in motion or playing sound or not
        self.flags.jibo_is_playing_sound = data.is_playing_sound
        # Instead of giving us a boolean to indicate whether Jibo is in motion
        # or not, we get the name of the animation.
        self.flags.jibo_is_doing_motion = data.doing_motion

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
            msg.header.stamp = self.ros_node.get_clock().now().to_msg()
            msg.command = command
            msg.heyjibo = heyjibo
            msg.continuous = continuous
            msg.incremental = incremental
            msg.rule = rule
            # print(str(msg))
            self.jibo_asr_command.publish(msg)

    @rclpy.callback_groups 
    def on_jibo_asr_results(self, data):
        print(data)
        self.ros_node.get_logger().info(" I heard: "+ data.transcription)
        self.asr_transcription = data.transcription
        self.asr_confidence = data.confidence
        self.asr_heuristic_score = data.heuristic_score
        self.asr_slotaction = data.slotaction
        #print(data)
        #print(self.asr_transcription)
        #print(self.asr_heuristic_score)
        #print(self.asr_slotAction)


    def waitforJiboTalk(self):
        if self.jibo_pub is not None:
            print('wait while talking:')
            time.sleep(0.5)
            counter = 0
            while self.is_playing_sound:
                time.sleep(0.1) 
                counter += 1
                # if counter >= max_counter:
                #     self.reset_msgs()
                #     break

    def waitforJiboListen(self):
        if self.jibo_pub is not None:
            print('wait while listening: ')
            time.sleep(0.5)
            counter = 0
            while not self.flags.jibo_is_listening: # self.is_listening:
                # print('waiting in 2nd waitforJiboListen')
                time.sleep(0.1)
                counter += 1
                if counter >= max_counter:
                  break

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



