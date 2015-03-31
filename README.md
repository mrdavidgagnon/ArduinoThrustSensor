# ArduinoThrustSensor
A small Arduino patch to read values from a HX711 load cell amplifier and output them to the serial port 

This sketch outputs a comma delimited list to the serial port in the form 

MILLISECONDS SINCE INIT , Force in Grams

It is calibrated for a paticular load cell construction made to measure the 
thrust curves of various small rocket motors.

Setup
HX711.DOUT	- pin #A1
HX711.PD_SCK	- pin #A0
Tare Button  - pin #D2 with pull down

Thank you to https://github.com/bogde/HX711 for providing the example code and HX711 library