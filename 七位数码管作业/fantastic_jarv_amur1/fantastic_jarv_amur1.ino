void setup()
{
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
 
  int income;
  if(Serial.available()>0)
  {
    income=Serial.read();
  income = income - '0';
    if(income==0)
   { 
      digitalWrite(7,LOW);
    
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
    

   }
    else if(income==1)
    {
     digitalWrite(7,LOW);
      
     digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
     

    }
    else if(income==2)
    {
     digitalWrite(7,LOW);
      
     digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
    

    }
    else if(income==3)
    {
     digitalWrite(7,LOW);
     
     digitalWrite(3,HIGH);
     digitalWrite(4,HIGH);
     digitalWrite(5,LOW);
     digitalWrite(6,LOW);
      

    }
    else if(income==4)
    {
     digitalWrite(7,LOW);
     
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(5,HIGH);
     digitalWrite(6,LOW);
      

    }
    else if(income==5)
    {
     digitalWrite(7,LOW);
      
     digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
     digitalWrite(5,HIGH);
     digitalWrite(6,LOW);
     

    }
    else if(income==6)
    {
     digitalWrite(7,LOW);
    
     digitalWrite(3,LOW);
     digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
     digitalWrite(6,LOW);
      

    }
    else if(income==7)
    {
     digitalWrite(7,LOW);
      
     digitalWrite(3,HIGH);
     digitalWrite(4,HIGH);
     digitalWrite(5,HIGH);
     digitalWrite(6,LOW);
      

    }
    else if(income==8)
    {
     digitalWrite(7,LOW);
      
     digitalWrite(3,LOW);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,HIGH);
      

    }
    else if(income==9)
    {
     digitalWrite(7,LOW);
      
     digitalWrite(3,HIGH);
     digitalWrite(4,LOW);
     digitalWrite(5,LOW);
     digitalWrite(6,HIGH);
     

    } 
  }
  
}