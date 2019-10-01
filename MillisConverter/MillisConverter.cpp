
#include "Arduino.h"
#include "MillisConverter.h"


MillisConverter::MillisConverter()
{
}

String MillisConverter::convert(unsigned long time)
{

  int days = time/ 3600 / 24;
  int hours = time/ 3600 % 24;
  int minutes = ((time / 60) % 60);
  int seconds = (time % 60);

  return String(this->convertToString(days)) + ":" +String(this->convertToString(hours)) + ":" +String(this->convertToString(minutes)) + ":" + String(this->convertToString(seconds));

}

String MillisConverter::convertToString(int time)
{
  if(time < 10){
    return "0"+String(time);
  }else{
   return String(time);

  }
}
