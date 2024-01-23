#!/bin/bash

if [[ $EUID != 0 ]]]; then
  echo "needs to be run with sudo"
  exit
fi

set -e -x

apt update
apt install -y software-properties-common
add-apt-repository -y universe
apt update
apt install -y curl emacs-nox silversearcher-ag
curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg
echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release; echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null
apt update
apt install -y ros-dev-tools
apt upgrade -y
apt install -y ros-iron-ros-base
apt install -y ros-iron-rosbridge-suite

exit
