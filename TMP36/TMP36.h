/*
  TMP36.h - Library for TMP36 temperature sensor.
*/
#ifndef TMP36_h
#define TMP36_h

#include "Arduino.h"

class TMP36
{
  public:
    TMP36(int pin);
    float readTemperatureC();
  private:
    int _pin;
};

#endif