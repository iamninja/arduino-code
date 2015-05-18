/*
  TMP36.h - Library for TMP36 temperature sensor.
*/
#ifndef TMP_h
#define TMP_h

#include "Arduino.h"

class TMP
{
  public:
    TMP(int pin);
    float readTemperatureC();
  private:
    int _pin;
};

#endif