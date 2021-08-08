int time_slot;
int time_2 = 0;
int time_3 = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);//signal 1 red led
  pinMode(3, OUTPUT);//signal 1 yellow led
  pinMode(4, OUTPUT);//signal 1 green led
  pinMode(5, OUTPUT);//signal 2 red led
  pinMode(6, OUTPUT);//signal 2 yellow led
  pinMode(7, OUTPUT);//signal 2 green led
  pinMode(8, OUTPUT);//signal 3 red led
  pinMode(9, OUTPUT);//signal 3 yellow led
  pinMode(10, OUTPUT);//signal 3 green led
  pinMode(11, OUTPUT);//signal 4 red led
  pinMode(12, OUTPUT);//signal 4 yellow led
  pinMode(13, OUTPUT);//signal 4 green led
}

void loop()
{
  Serial.println("Input the time_slot:");
  while(Serial.available()==0){}
  time_slot = Serial.parseInt();
  
  switch(time_slot)
  {
    case 1:
         for(int i=3;i<13;i=i+3)
         {
            digitalWrite(i, HIGH);
         }
         delay(10800000);//delay of 3 hrs (3 am to 6 am)
         for(int i=3;i<13;i=i+3)
         {
            digitalWrite(i, LOW);
         }
    break;
    
    case 2:
        while(time_2 <= 10800000)//1,08,00,000 ms = 3 hrs
        {
           digitalWrite(4, HIGH);
           digitalWrite(5, HIGH);
           digitalWrite(8, HIGH);
           digitalWrite(11, HIGH);
           delay(3000);
           time_2+= 3000;
           digitalWrite(4, LOW);
    
           digitalWrite(3, HIGH);
           digitalWrite(5, HIGH);
           digitalWrite(8, HIGH);
           digitalWrite(11, HIGH);
           delay(1000);
           time_2 += 1000;
           digitalWrite(3, LOW);
           digitalWrite(5, LOW);
    
           digitalWrite(2, HIGH);
           digitalWrite(7, HIGH);
           digitalWrite(8, HIGH);
           digitalWrite(11, HIGH);
           delay(3000);
           time_2 += 3000;
           digitalWrite(7, LOW);
    
           digitalWrite(2, HIGH);
           digitalWrite(6, HIGH);
           digitalWrite(8, HIGH);
           digitalWrite(11, HIGH);
           delay(1000);
           time_2 += 1000;
           digitalWrite(6, LOW);
           digitalWrite(8, LOW);
    
           digitalWrite(2, HIGH);
           digitalWrite(5, HIGH);
           digitalWrite(10, HIGH);
           digitalWrite(11, HIGH);
           delay(3000);
           time_2 += 3000;
           digitalWrite(10, LOW);
    
           digitalWrite(2, HIGH);
           digitalWrite(5, HIGH);
           digitalWrite(9, HIGH);
           digitalWrite(11, HIGH);
           delay(1000);
           time_2 += 1000;
           digitalWrite(9, LOW);
           digitalWrite(11, LOW);
    
           digitalWrite(2, HIGH);
           digitalWrite(5, HIGH);
           digitalWrite(8, HIGH);
           digitalWrite(13, HIGH);
           delay(3000);
           time_2 += 3000;
           digitalWrite(13, LOW);
    
           digitalWrite(2, HIGH);
           digitalWrite(5, HIGH);
           digitalWrite(8, HIGH);
           digitalWrite(12, HIGH);
           delay(1000);
           time_2 += 1000;
           digitalWrite(2, LOW);
           digitalWrite(12, LOW);
           break;
        }
    
    case 3:
        while(time_3 <= 43200000)//4,32,00,000 ms = 12 hrs
       {
          digitalWrite(2, HIGH);
          digitalWrite(7, HIGH);
          digitalWrite(8, HIGH);
          digitalWrite(13, HIGH);
          delay(3000);
          time_3 += 3000;
          digitalWrite(7, LOW);
          digitalWrite(13, LOW);
    
          digitalWrite(2, HIGH);
          digitalWrite(6, HIGH);
          digitalWrite(8, HIGH);
          digitalWrite(12, HIGH);
          delay(1000);
          time_3 += 1000;
          for(int i=2;i<13;i++)
          {
            digitalWrite(i, LOW);
          }
    
         digitalWrite(4, HIGH);
         digitalWrite(5, HIGH);
         digitalWrite(10, HIGH);
         digitalWrite(11, HIGH);
         delay(3000);
         time_3 += 3000;
         digitalWrite(4, LOW);
         digitalWrite(10, LOW);
    
         digitalWrite(3, HIGH);
         digitalWrite(5, HIGH);
         digitalWrite(9, HIGH);
         digitalWrite(11, HIGH);
         delay(1000);
         time_3 += 1000;
         for(int i=2;i<13;i++)
         {
           digitalWrite(i, LOW);
         }
         break;
      }
    
    case 4:
     while(time_2 <= 21600000)//2,16,00,000 ms = 6 hrs
     {
    
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(11, HIGH);
        delay(3000);
        time_2+= 3000;
        digitalWrite(4, LOW);
    
        digitalWrite(3, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(11, HIGH);
        delay(1000);
        time_2 += 1000;
        digitalWrite(3, LOW);
        digitalWrite(5, LOW);
    
        digitalWrite(2, HIGH);
        digitalWrite(7, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(11, HIGH);
        delay(3000);
        time_2 += 3000;
        digitalWrite(7, LOW);
    
        digitalWrite(2, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(8, HIGH);
        digitalWrite(11, HIGH);
        delay(1000);
        time_2 += 1000;
        digitalWrite(6, LOW);
        digitalWrite(8, LOW);
    
        digitalWrite(2, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(10, HIGH);
        digitalWrite(11, HIGH);
        delay(3000);
        time_2 += 3000;
        digitalWrite(10, LOW);
    
        digitalWrite(2, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(9, HIGH);
        digitalWrite(11, HIGH);
        delay(1000);
        time_2 += 1000;
        digitalWrite(9, LOW);
        digitalWrite(11, LOW);
    
       digitalWrite(2, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(8, HIGH);
       digitalWrite(13, HIGH);
       delay(3000);
       time_2 += 3000;
       digitalWrite(13, LOW);
    
       digitalWrite(2, HIGH);
       digitalWrite(5, HIGH);
       digitalWrite(8, HIGH);
       digitalWrite(12, HIGH);
       delay(1000);
       time_2 += 1000;
       digitalWrite(2, LOW);
       digitalWrite(12, LOW);
       break;
  }
 }
}
