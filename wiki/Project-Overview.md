# Project Overview

## 1. Project Goals & Motivation
The objective of this project is to implement a robust, secure, and low-power IoT gateway that reads data from system sensors and publishes it to a local/remote MQTT broker. The gateway is designed to be highly reliable, running on a read-only root filesystem to prevent filesystem corruption during power outages.

### Design Diagram
```
   +--------------------+
   |  Temperature/Humid |
   |  Sensors (GPIO/I2C)|
   +---------+----------+
             |
             v
   +---------+----------+
   |   IoT Gateway      |
   | (C Client / Linux) |
   +---------+----------+
             | (MQTT)
             v
   +---------+----------+
   |    MQTT Broker     |
   | (Mosquitto/Docker) |
   +--------------------+
```

## 2. Target Build System
Buildroot (v2023.02 or later) is used to generate the minimal root filesystem, toolchain, bootloader (U-Boot), and kernel images.

## 3. Hardware Platform Selected
- **Raspberry Pi 4 Model B (or BeagleBone Black Rev C)**
- Support is configured via standard Buildroot defconfigs (`raspberrypi4_64_defconfig`).

## 4. Open Source Projects Used
- **Mosquitto**: MQTT Broker.
- **Paho MQTT C Client library**: Lightweight C client for sending MQTT telemetry.
- **SQLite**: Embedded database for logging data locally when network is disconnected.

## 5. Previous Assignment Content Leveraged
- Automated system service initialization (S99 scripts).
- Read-only root filesystem architecture concepts from C1/C2 assignments.
