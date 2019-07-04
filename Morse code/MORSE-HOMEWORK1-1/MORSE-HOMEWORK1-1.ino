#include <Morse.h>
Morse morse(13);
int ZM = 0;
void setup() 
{
  Serial.begin(9600);
  }
void loop() {
  if(Serial.available() > 0){
    ZM = Serial.read();
    else if(ZM == 97){morse.dot();morse.dash();}
    else if(ZM == 98){morse.dash();morse.dot();morse.dot();morse.dot();}
    else if(ZM == 99){morse.dash();morse.dot();morse.dash();morse.dot();}
    else if(ZM == 100){morse.dash();morse.dot();morse.dot();}
    else if(ZM == 101){morse.dot();}
    else if(ZM == 102){morse.dot();morse.dot();morse.dash();morse.dot();}
    else if(ZM == 103){morse.dash();morse.dash();morse.dot();}
    else if(ZM == 104){morse.dot();morse.dot();morse.dot();morse.dot();}
    else if(ZM == 105){morse.dot();morse.dot();}
    else if(ZM == 106){morse.dot();morse.dash();morse.dash();morse.dash();}
    
    else if(ZM == 107){morse.dash();morse.dot();morse.dash();}
    else if(ZM == 108){morse.dot();morse.dash();morse.dot();morse.dot();}
    else if(ZM == 109){morse.dash();morse.dash();}
    else if(ZM == 110){morse.dash();morse.dot();}
    else if(ZM == 111){morse.dash();morse.dash();morse.dash();}
    
    else if(ZM == 112){morse.dot();morse.dash();morse.dash();morse.dot();}
    else if(ZM == 113){morse.dash();morse.dash();morse.dot();morse.dash();}
    else if(ZM == 114){morse.dot();morse.dash();morse.dot();}
    else if(ZM == 115){morse.dot();morse.dot();morse.dot();}
    else if(ZM == 116){morse.dash();}
    
    else if(ZM == 117){morse.dot();morse.dot();morse.dash();}
    else if(ZM == 118){morse.dot();morse.dot();morse.dot();morse.dash();}
    else if(ZM == 119){morse.dot();morse.dash();morse.dash();}
    else if(ZM == 120){morse.dash();morse.dot();morse.dot();morse.dash();}
    else if(ZM == 121){morse.dash();morse.dot();morse.dash();morse.dash();}
    
    else if(ZM == 122){morse.dash();morse.dash();morse.dot();morse.dot();}
    morse.c_space();
    else if(ZM == 32){morse.w_space();}
    }
  } 
