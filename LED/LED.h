/*
  LED.h - Library for flashing leds.
*/
#ifndef LED_h
#define LED_h

#include "Arduino.h"

class LED
{
  public:
    LED(int pin);
    void on();
    void off();
    void flash(int time);
    void dot();
    void dash();
  private:
    int _pin;
};

#endif