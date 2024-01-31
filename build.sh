#!/bin/bash

#cd /workspaces/jibo-workshop-fol2024
cd /home/vscode
source /opt/ros/iron/setup.bash 

(cd ros2_workspace; colcon build)
