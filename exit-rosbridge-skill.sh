#!/bin/bash

ros2 topic pub --once /jibo_remote jibo_msgs/msg/JiboRemote '{do_exit_rosbridge_skill: true}'
