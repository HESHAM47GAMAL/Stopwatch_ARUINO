# Stopwatch_ARUINO_With_Alarm_Every_Minute_Arduino ⏱🔊
- [Description](#Description)
- [System Flowchart](#System-Flowchart)
- [IDE](#IDE)
- [Get hex Flie](#Get-Hex-File)
- [Schematic](#Schematic)
  - [Main Component](#Main-Component)
- [Demo](#Demo)
  - [Start](#Start)
  - [Pause](#Pause)
  - [Resume](#Resume)
  - [Reset](#Reset)

## Description
<p>This is Stopwatch system simulate stopwatch in mobile </p>
<p>⚡when open simulation stopwatch start count when press 🖱️ <strong>Start_Resume_BUTTON</strong> </p>
<p>⚡counting will continue until press 🖱️ <strong>Pause_BUTTON</strong> this will stop counting and there are <strong>two option</strong></p>
<p>⚡<strong>Option 1</strong> return to continue counting from last value Stopwatch reach by press 🖱️ <strong>Pause_BUTTON</strong> </p>
<p>⚡<strong>Option 2</strong> reset value for Stopwatch  by press 🖱️ <strong>Reset_BUTTON</strong> and to restart count press 🖱️ <strong>Start_Resume_BUTTON</strong></p>
<p>⚡every time count one minute  system give Alarm🔔🔊</p>

## System Flowchart
<p align="center"> 
  <img src="https://user-images.githubusercontent.com/77234053/188345725-2234f5c1-e31e-4d01-b216-1e40f3856523.png">
  </p>
  
## IDE
<p>IDE are Arduino & Proteus</p>
<P>⚡Arduino for write code </p>
<p>⚡Proteus for simulate project</p>

## Get hex File
<p>Follow this step to get hex file for Arduino project to put this file on Proteus to run and show simulation</p>
<p><strong>step 1</strong> open Arduino IDE choose File->Preferences->make ✔ on check compilation then click <strong>OK</strong>  </p>
<p><strong>step 2</strong> press on Verify button to compile project and there are compilation window in below when compilation Done in this window go to line number six and at the end of this line there are file end with hex extension like"C:\\Users\\20112\\AppData\\Local\\Temp\\arduino_build_626863/Stopwatch.ino.hex" then take this path to reach file "C:\Users\20112\AppData\Local\Temp\arduino_build_626863" then take hex file in any path you want to can use it in Proteus </p>

## Schematic
<p align="center">
  <img src="https://user-images.githubusercontent.com/77234053/188349965-08d09d14-1f8f-47c7-8ebe-a00878ab6e94.png">
</p>

### Main Component
- Arduino UNO
- led
- buzzer
- button
- lcd 16*2
- NPN (switch)
- PCF8574
- resistor

## Demo

### Start
<p align="center">
  <img src="https://user-images.githubusercontent.com/77234053/188352762-bf4c6aba-0e8c-4371-8972-2639e00e78b5.gif">
  <img src="https://user-images.githubusercontent.com/77234053/188353007-14e3844b-3311-41f1-9ed1-c48413ec5e7e.jpg"> 
  <img src="https://user-images.githubusercontent.com/77234053/188353874-302e3d01-afaa-41e5-8769-21142a6b7aab.gif">
  </p>

                                                                                                                  
### Pause
<p >
  <img src="">
  </p>
  
### Resume
<p>
  <img src="">
  </p>

### Reset
<p>
  <img src="">
  </p>





