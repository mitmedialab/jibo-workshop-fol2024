#!/bin/bash

apt update
apt install -y software-properties-common
add-apt-repository universe
apt update
apt install -y curl
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-releaseecho $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
apt update
apt install -y ros-dev-tools
apt upgrade -y
apt install -y ros-iron-ros-base

exit
