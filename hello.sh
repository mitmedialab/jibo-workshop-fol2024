#!/bin/bash

GREETING="<es cat='curious'>Hello <anim cat='emoji' filter='!(hf), &(earth)' nonBlocking='true' />world, I'm Jibo!</es>"
ros2 topic pub --once /jibo jibo_msgs/JiboAction "{do_tts: true, tts_text: \"$GREETING\"}"
