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

### Hardware

![B01-en](https://user-images.githubusercontent.com/10337553/193231911-9f4dc2e3-9a75-44ea-a051-2700fd5238dc.png)

### Software

#### Get ESP-IDF

ESP32-Common-RGB-Screen-DevKit runs on ESP-IDF. For details on getting ESP-IDF, please refer to [ESP-IDF Programming Guide](https://idf.espressif.com/).

> Please use the latest version of ESP-IDF on the master branch.

#### Get ESP32-Common-RGB-Screen-DevKit

Run the following commands in your terminal to download ESP32-Common-RGB-Screen-DevKit:

```bash
git clone --recursive https://github.com/W00ng/ESP32-Common-RGB-Screen-DevKit.git
```

## Run Examples

All examples of ESP32-Common-RGB-Screen-DevKit are stored in [examples](./examples) folder. 

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

