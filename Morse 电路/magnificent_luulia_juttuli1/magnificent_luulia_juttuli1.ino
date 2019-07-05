void setup()
{
  pinMode(13, OUTPUT);
    Serial.begin(9600);
}
#ifndef _MORSE_H
#define _MORSE_H
class Morse
{
  public:
    Morse(int pin);
    void dot();
    void dash();
    void c_space();
    void w_space();
  private:
    int _pin;
    int _dottime;
};
#endif /*_MORSE_H*/

#include "Arduino.h"


Morse::Morse(int pin)
{
	pinMode(pin,OUTPUT);
	_pin=pin;
	_dottime=250;
}

void Morse::dot()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::dash()
{
	digitalWrite(_pin,HIGH);
	delay(_dottime*4);
	digitalWrite(_pin,LOW);
	delay(_dottime);
}

void Morse::c_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*2);
}

void Morse::w_space()
{
	digitalWrite(_pin,LOW);
	delay(_dottime*4);
}





  
void loop() 
{
   Morse morse(13);
    int ZM = 0;
    if(Serial.available() > 0)
   {
    ZM = Serial.read();
     if(ZM == 97){morse.dot();morse.dash();}
     if(ZM == 98){morse.dash();morse.dot();morse.dot();morse.dot();}
     if(ZM == 99){morse.dash();morse.dot();morse.dash();morse.dot();}
     if(ZM == 100){morse.dash();morse.dot();morse.dot();}
     if(ZM == 101){morse.dot();}
     if(ZM == 102){morse.dot();morse.dot();morse.dash();morse.dot();}
     if(ZM == 103){morse.dash();morse.dash();morse.dot();}
     if(ZM == 104){morse.dot();morse.dot();morse.dot();morse.dot();}
     if(ZM == 105){morse.dot();morse.dot();}
     if(ZM == 106){morse.dot();morse.dash();morse.dash();morse.dash();}
    
     if(ZM == 107){morse.dash();morse.dot();morse.dash();}
     if(ZM == 108){morse.dot();morse.dash();morse.dot();morse.dot();}
     if(ZM == 109){morse.dash();morse.dash();}
     if(ZM == 110){morse.dash();morse.dot();}
     if(ZM == 111){morse.dash();morse.dash();morse.dash();}
    
     if(ZM == 112){morse.dot();morse.dash();morse.dash();morse.dot();}
     if(ZM == 113){morse.dash();morse.dash();morse.dot();morse.dash();}
     if(ZM == 114){morse.dot();morse.dash();morse.dot();}
     if(ZM == 115){morse.dot();morse.dot();morse.dot();}
     if(ZM == 116){morse.dash();}
    
     if(ZM == 117){morse.dot();morse.dot();morse.dash();}
     if(ZM == 118){morse.dot();morse.dot();morse.dot();morse.dash();}
     if(ZM == 119){morse.dot();morse.dash();morse.dash();}
     if(ZM == 120){morse.dash();morse.dot();morse.dot();morse.dash();}
     if(ZM == 121){morse.dash();morse.dot();morse.dash();morse.dash();}
    
     if(ZM == 122){morse.dash();morse.dash();morse.dot();morse.dot();}
    morse.c_space();
     if(ZM == 32){morse.w_space();}
    }
  } 
