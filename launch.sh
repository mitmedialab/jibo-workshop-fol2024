#!/bin/bash

cd /workspaces/jibo-workshop-fol2024
source ./activate

ros2 launch rosbridge_server rosbridge_websocket_launch.xml
