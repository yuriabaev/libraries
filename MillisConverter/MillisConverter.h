
#ifndef MillisConverter_h
#define MillisConverter_h

#include "Arduino.h"

class MillisConverter
{
  public:
    MillisConverter();
    String convert(unsigned long time);
    String convertToString(int time);
};

#endif