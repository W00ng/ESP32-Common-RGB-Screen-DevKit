# ESP32-Common-RGB-Screen-DevKit

ESP32-S3 common RGB screen driver board. Support 40pin RGB screen interface, such as 4.3-inchs, 5-inchs, 7-inchs etc.
![video-en](https://user-images.githubusercontent.com/10337553/193231967-25c261e2-b105-46ac-b78e-53c4be99a2cc.png)


## Overview

MCU: ESP32-S3

Flash: 8MB, Psram: 8MB

Display Interface： RGB565

5 inchs screen: 480x800 resolution, capacitive touch panel

7 inchs screen: 480x800 resolution, capacitive touch panel

4.3 inchs screen: 272x480 resolution, capacitive touch panel

Audio Codec: ES8311

## Hardware

![B01-en](https://user-images.githubusercontent.com/10337553/193231911-9f4dc2e3-9a75-44ea-a051-2700fd5238dc.png)

## Software

All the examples are stored in .../examples folder. Please build it with **ESP-IDF 5.0**
![cf9bb940-f3d0-4c77-aea2-1a70621b6525](https://github.com/W00ng/ESP32-S3-RGB-Panel/assets/10337553/e7529af7-b5f8-465e-9cbd-4f91f170ed51)

### Step 1: Enter the examples folder
Open the terminal and go to any folder that stores examples (e.g. lvgl_demo):

```bash
cd ...\examples\lvgl_demo
```

### Step 2: Build the example

```bash
idf.py build
```

### Step 3: Flash and launch monitor
Flash the program and launch IDF Monitor:

```bash
idf.py flash monitor
```

## Known Issues

ESP32-Common-RGB-Screen-DevKit does not have a USB-to-UART bridge, which may cause a problem: If the program flashed onto the board keeps the chip rebooting, you cannot flash more programs onto the board.

In case this issue occurs, you need to:

Hold down BOOT button and press RST button, then release RST button first, and BOOT button next. In this way, the board enters Firmware Download mode and you can start flashing program onto the board.
After flashing the program, press RST button to start the program.

## Support

if you need any help, please contact: aemails@163.com

https://www.youtube.com/watch?v=5X3XG22Qby8

