#!/bin/bash

ros2 topic pub --once /jibo_remote jibo_msgs/msg/JiboRemote '{do_enter_rosbridge_skill: true}'
