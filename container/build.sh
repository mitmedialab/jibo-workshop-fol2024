#!/bin/bash

cd /home/vscode
source /opt/ros/iron/setup.bash 

(cd ros2_workspace; colcon build)
