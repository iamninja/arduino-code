/*
  TMP36.cpp - Library for TMP36 temperature sensor.
*/

#include "Arduino.h"
#include "TMP36.h"

TMP36::TMP36(int pin)
{
  _pin = pin;
}

float TMP36::readTemperatureC()
{
  int reading = analogRead(_pin);
  float voltage = (reading * 5.0) / 1024.0;

  float tempCelsius = (voltage - 0.5) * 100;
  return tempCelsius;
}