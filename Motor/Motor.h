
#ifndef Motor_h
#define Motor_h

#include "Arduino.h"

class Motor
{
  public:
    Motor(int pin);
    void on();
    void off();
    bool isOn();
  private:
    int _pin;
};

#endif