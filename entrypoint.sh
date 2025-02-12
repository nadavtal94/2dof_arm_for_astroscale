#!/bin/bash
set -e  # Exit on error

echo "📌 Setting up the ROS 2 environment..."

# Source the ROS 2 setup
source /opt/ros/humble/setup.bash

# If a workspace exists, source it
WORKSPACE_SETUP="$HOME/tow_dof_ws/install/setup.bash"
if [ -f "$WORKSPACE_SETUP" ]; then
    echo "📌 Sourcing workspace: $WORKSPACE_SETUP"
    source "$WORKSPACE_SETUP"
else
    echo "⚠️ No workspace found at $WORKSPACE_SETUP"
    echo "💡 Use 'colcon build' inside the container to set up your workspace."
    
    # Ask user if they want to build the workspace now
    echo "🚀 No workspace found! Would you like to build it now? (y/n)"
    read -r response
    if [[ "$response" == "y" ]]; then
        cd $HOME/tow_dof_ws
        colcon build --symlink-install
        source install/setup.bash
    else
        echo "Skipping workspace build. Run 'colcon build' manually when ready."
    fi
fi

# **Gazebo + gazebo_ros Setup**
echo "📌 Setting up Gazebo with ROS 2 integration..."
export GAZEBO_MODEL_PATH=$HOME/tow_dof_ws/install/share:$GAZEBO_MODEL_PATH
export GAZEBO_RESOURCE_PATH=$HOME/tow_dof_ws/install/share:$GAZEBO_RESOURCE_PATH
export GAZEBO_PLUGIN_PATH=$HOME/tow_dof_ws/install/lib:$GAZEBO_PLUGIN_PATH

# Verify Gazebo launch
echo "🔍 Checking Gazebo installation..."
if command -v gazebo >/dev/null 2>&1; then
    echo "✅ Gazebo is installed and ready!"
else
    echo "❌ Gazebo not found! Please check your installation."
fi

echo "✅ ROS 2 environment and Gazebo are ready!"

# Keep the container open in an interactive shell
exec bash
