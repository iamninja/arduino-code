/*
  TMP36.cpp - Library for TMP36 temperature sensor.
*/

#include "Arduino.h"
#include "TMP.h"

TMP::TMP(int pin)
{
  _pin = pin;
}

float TMP::readTemperatureC()
{
  int reading = analogRead(_pin);
  float voltage = (reading * 5.0) / 1024.0;

  float tempCelsius = (voltage - 0.5) * 100;
  return tempCelsius;
}