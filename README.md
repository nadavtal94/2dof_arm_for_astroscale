# 🤖 2DOF Arm for Astroscale

This repository contains the ROS 2 workspace for controlling a **2 Degrees of Freedom (2DOF) robotic arm**.

---

## 🚀 Features
- **ROS 2 Jazzy** support
- **MoveIt! integration** for motion planning
- **RViz simulation** for testing
- **Custom control nodes for movement**
- **Docker support** for containerized development

---

## 🛠️ Installation
### 1️⃣ Clone the repository
```bash
git clone https://github.com/nadavtal94/2dof_arm_for_astroscale.git
cd 2dof_arm_for_astroscale
```

### 2️⃣ Build the workspace
```bash
colcon build
source install/setup.bash
```

### 3️⃣ Run the simulation
```bash
ros2 launch tow_dof_moveit_config demo.launch.py
```

### 🔧 Debugging
```bash
ros2 launch tow_dof_description display.launch.py
```

---

## 🎮 Usage

### **To control the arm manually:**
```bash
ros2 run tow_dof_motion motion_node
```

### **To move the arm to a specific position:**
```bash
ros2 run tow_dof_motion move_to_position
```

---

## 📂 Repository Structure
```
tow_dof_ws/
├── src/                         # Source files
│   ├── tow_dof_description/      # URDF and robot model files
│   ├── tow_dof_motion/           # Motion control nodes
│   ├── tow_dof_moveit_config/    # MoveIt! configuration
├── build/                        # Compiled files (ignored)
├── install/                      # Installed packages (ignored)
├── log/                          # Logs (ignored)
├── Dockerfile                    # Docker setup for ROS 2
├── README.md                     # Project documentation
```

---

