# Use ROS 2 Humble with full desktop and Gazebo support as base image
FROM osrf/ros:humble-desktop-full

# Define build arguments and environment variables
ARG USERNAME=ros
ARG USER_UID=1000
ARG USER_GID=${USER_UID}
ENV HOME=/home/${USERNAME}

# Install necessary packages
RUN apt-get update && apt-get install -y --no-install-recommends \
    git \
    curl \
    wget \
    nano \
    vim \
    sudo \
    build-essential \
    python3-pip \
    # Gazebo and ROS 2 Gazebo integration
    gazebo \
    libgazebo-dev \
    ros-humble-gazebo-ros-pkgs \
    ros-humble-gazebo-ros2-control \
    ros-humble-gazebo-msgs \
    ros-humble-gazebo-plugins \
    # MoveIt and dependencies
    ros-humble-moveit \
    ros-humble-moveit-resources-panda-moveit-config \
    && rm -rf /var/lib/apt/lists/*

# Create a non-root user and set permissions
RUN groupadd --gid ${USER_GID} ${USERNAME} && \
    useradd -m -s /bin/bash --uid ${USER_UID} --gid ${USER_GID} ${USERNAME} && \
    usermod -aG sudo ${USERNAME} && \
    echo "${USERNAME} ALL=(ALL) NOPASSWD: ALL" >> /etc/sudoers

# Set the working directory to tow_dof_ws
WORKDIR ${HOME}/tow_dof_ws

# Copy the entrypoint script and make it executable
COPY --chown=${USER_UID}:${USER_GID} entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

# Switch to the non-root user
USER ${USERNAME}

# Set the entrypoint to execute the script
ENTRYPOINT ["/entrypoint.sh"]

# Default command (fallback if no arguments are given)
CMD ["/bin/bash"]
