FROM mcr.microsoft.com/devcontainers/base:jammy

RUN apt update \
 && apt install -y software-properties-common \
 && add-apt-repository -y universe \
 && apt update

RUN apt install -y curl emacs-nox silversearcher-ag

RUN curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg \
 && echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null \
 && apt update \
 && apt install -y ros-dev-tools \
 && apt upgrade -y \
 && apt install -y ros-iron-ros-base \
 && apt install -y ros-iron-rosbridge-suite

ARG NB_USER=vscode

COPY --chown=${NB_USER}:users requirements.txt /home/${NB_USER}/requirements.txt
RUN apt install -y python3-pip \
 && python3 -m pip install -r /home/${NB_USER}/requirements.txt

COPY --chown=vscode:vscode ros2_workspace /home/vscode/ros2_workspace
COPY --chown=vscode:vscode build.sh /home/vscode/build.sh
COPY --chown=vscode:vscode launch.sh /home/vscode/launch.sh
USER vscode
WORKDIR /home/vscode
RUN ./build.sh
USER root
RUN echo "source /opt/ros/iron/setup.bash" >> /root/.bashrc \
 && echo "source /home/vscode/ros2_workspace/install/setup.bash" >> /root/.bashrc \
 && echo "source /opt/ros/iron/setup.bash" >> /home/vscode/.bashrc \
 && echo "source /home/vscode/ros2_workspace/install/setup.bash" >> /home/vscode/.bashrc

#USER ${NB_USER}
#WORKDIR /home/${NB_USER}
## --- Appy JupyterLab custom Settings --- #
#COPY --chown=${NB_USER}:users ./jupyter-settings.json /opt/conda/share/jupyter/lab/settings/overrides.json

# --- Entrypoint --- #
COPY --chown=${NB_USER}:users entrypoint.sh /
ENTRYPOINT ["/entrypoint.sh"]
#CMD [ "start-notebook.sh" ]
