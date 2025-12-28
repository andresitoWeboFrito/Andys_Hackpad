# Andys_Hackpad
My own version of the macropad tutorial. It comes with 11 funtiion keys, an OLED Screen and an Encoder to use as volume / slider controls. All of this powered with a XIAO RP2040 microcontroller.

![alt text](https://github.com/andresitoWeboFrito/Andys_Hackpad/blob/main/Imgs/case_design.png)


## Features
* 11 Mechanical switches
* 1 EC11 Rotary encoder
* 1 128x32px OLED display
* A custom 3d printed case

## CAD
The case was designed using OnShape. It is assembled together using 4 M3 screws and its mating heatset inserts.
The screws are inserted from the bottom of the case and screwed to the top part of the case.
The PCB sits in the middle so it becomes sandwiched between the top and the bottom part of the case.
![alt text](https://github.com/andresitoWeboFrito/Andys_Hackpad/blob/main/Imgs/case_exploded_view.png)

There are only 2 pieces for the case. The top part and the bottom part.

## PCB & Schematic

This is the schematic of the Board. It was made with KiCad.
![alt text](https://github.com/andresitoWeboFrito/Andys_Hackpad/blob/main/Imgs/schematic.png)

This is the PCB Layout. It was also made in KiCad. The hackclub logo was imported as an .svg to the silkscreen layer.
It has a ground plane on the bottom layer, and a slightly thicker traces as KiCad defaults.
![alt text](https://github.com/andresitoWeboFrito/Andys_Hackpad/blob/main/Imgs/PCB.png)

## Firmware
At the moment the firmware wouldn't work. Im waiting to assemble it and test it before updating it.

## BOM
This is the list of what you'll need to build it! :)
* 11x Cherry MX Switches
* 12x 1N4148 DO-35 Diodes
* 1x 0.91" 128x32 OLED Display
* 1x EC11 Rotary Encoder
* 1x XIAO RP2040
* 9x 1u Cherry caps
* 2x 1,5u Cherry caps
* 4x M3 Heatset inserts
* 2x M3x18mm screws
* 2x M3x16mm screws 
* Printed case parts
