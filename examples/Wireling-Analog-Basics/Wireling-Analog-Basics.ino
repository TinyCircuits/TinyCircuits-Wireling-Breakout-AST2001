/************************************************************
 * Wireling Example Outline Analog/Digital
 * This program includes all of the basic functionality you
 * would need to make something Wireling-programmable for
 * an Analog/Digital hardware component
 * 
 * Written by: Laveréna Wienclaw, April 2020
 ************************************************************/

#include <Wireling.h> // For Wireling power & interfacing

const int AnalogPin = A0 // A0 for port 0 on Wireling Adapter, A1 for port 1, etc

void setup() {
  Wireling.begin(); // Enable power to Wireling for I2C or Analog usage
  
}

void loop() {
  // Interface with the analog pin however you want!

}
