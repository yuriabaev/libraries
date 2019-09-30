
#include "Arduino.h"
#include "Motor.h"

bool _isOn=false;
Motor::Motor(int pin)
{
  pinMode(pin, OUTPUT);
  _pin = pin;

}

void Motor::on()
{
  digitalWrite(_pin, HIGH);
  _isOn=true;
}

void Motor::off()
{
  digitalWrite(_pin, LOW);
  _isOn=false;
}
bool Motor::isOn()
{
  return _isOn;
}