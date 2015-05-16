/*
  LED.cpp - Library for flashing leds.
*/

#include "Arduino.h"
#include "LED.h"

LED::LED(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void LED::on()
{
  digitalWrite(_pin, HIGH);
}

void LED::off()
{
  digitalWrite(_pin,LOW);
}

void LED::flash(int time)
{
  digitalWrite(_pin, HIGH);
  delay(time);
  digitalWrite(_pin,LOW);
}

void LED::dot()
{
  digitalWrite(_pin, HIGH);
  delay(250);
  digitalWrite(_pin, LOW);
  delay(250);
}

void LED::dash()
{
  digitalWrite(_pin, HIGH);
  delay(1000);
  digitalWrite(_pin, LOW);
  delay(250);
}