/************************************************************
 * Wireling Example Outline I2C
 * This program includes all of the basic functionality you
 * would need to make something Wireling-programmable for
 * an I2C hardware component
 * 
 * Written by: Laveréna Wienclaw, April 2020
 ************************************************************/

#include <Wire.h> // This library allows you to communicate with I2C / TWI devices.
#include <Wireling.h> // For Wireling power & interfacing

void setup() {
  Wire.begin(); // Enable I2C
  Wireling.begin(); // Enable power to Wireling for I2C or Analog usage
  
  Wireling.selectPort(0); // Select port 0-3 where Wireling is plugged in - for I2C
}

void loop() {
  // put your main code here, to run repeatedly:

}
