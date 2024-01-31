#!/bin/bash

cd /home/vscode
source /opt/ros/iron/setup.bash 
source /home/vscode/ros2_workspace/install/setup.bash

ros2 launch rosbridge_server rosbridge_websocket_launch.xml
