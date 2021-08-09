// C++ code
//
int time_slot;
void setup()
{
  pinMode(13, OUTPUT); //signal 1 red
  pinMode(12, OUTPUT); //signal 1 yellow
  pinMode(11, OUTPUT); //signal 1 green
  pinMode(10, OUTPUT); //signal 2 red
  pinMode(9, OUTPUT); //signal 2 yellow
  pinMode(8, OUTPUT); //signal 2 green
  pinMode(7, OUTPUT); //signal 3 red 
  pinMode(6, OUTPUT); //signal 3 yellow
  pinMode(5, OUTPUT); //signal 3 green
  pinMode(4, OUTPUT); //signal 4 red
  pinMode(3, OUTPUT); //signal 4 yellow
  pinMode(2, OUTPUT); //signal 4 green
  Serial.begin(9600);
  Serial.println("Choose a time-slot (1,2,3,4): "); //Prompting user for input
}

void loop()
{
  
  while(Serial.available()==0)
  {
    //Waiting for user to give input
  }
  time_slot= Serial.parseInt(); //reading user's input
  Serial.println("Current Time Slot is: ");
  Serial.println(time_slot);
  
  if(time_slot == 1)
  {
    while(1)
    {
    digitalWrite(12, HIGH); //signal 1 yellow is on
    delay(1000);
    digitalWrite(12, LOW); //signal 1 yellow is off
    digitalWrite(9, HIGH); //signal 2 yellow is on
    delay(1000);
    digitalWrite(9, LOW); //signal 2 yellow is off
    digitalWrite(6, HIGH); //signal 3 yellow is on
    delay(1000);
    digitalWrite(6, LOW); //signal 3 yellow is off
    digitalWrite(3, HIGH); //signal 4 yellow is on
    delay(1000);
    digitalWrite(3, LOW); //signal 4 yellow is off
    }
    
  }
  
  else if(time_slot == 2)
  {
    while(1)
    {
    digitalWrite(13, LOW); //Signal 1 RED OFF
    digitalWrite(11, HIGH); //Signal 1 GREEN ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(7, HIGH); //Signal 3 RED ON
    digitalWrite(4, HIGH); //Signal 4 RED ON
    delay(3000);
      
    digitalWrite(12, HIGH);  //Signal 1 YELLOW ON
    digitalWrite(11, LOW); //signal 1 GREEN OFF
    delay(1000);
    digitalWrite(12, LOW); //Signal 1 YELLOW OFF
    
    digitalWrite(13, HIGH); //Signal 1 RED ON
    digitalWrite(10, LOW); //signal 2 RED OFF
    digitalWrite(8, HIGH); //signal 2 GREEN ON
    digitalWrite(7, HIGH); //Signal 3 RED ON
    digitalWrite(4, HIGH); //Signal 4 RED ON
    delay(3000);
      
    digitalWrite(9, HIGH);  //Signal 2 YELLOW ON
    digitalWrite(8, LOW); //signal 2 GREEN OFF
    delay(1000);
    digitalWrite(9, LOW); //Signal 2 YELLOW OFF
    
    digitalWrite(13, HIGH); //Signal 1 RED ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(7, LOW); //Signal 3 RED OFF
    digitalWrite(5, HIGH); //Signal 3 GREEN ON
    digitalWrite(4, HIGH); //Signal 4 RED ON
    delay(3000);
      
    digitalWrite(6, HIGH);  //Signal 3 YELLOW ON
    digitalWrite(5, LOW); //signal 3 GREEN OFF
    delay(1000);
    digitalWrite(6, LOW); //Signal 3 YELLOW OFF
    
    digitalWrite(13, HIGH); //Signal 1 RED ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(7, HIGH); //Signal 3 RED ON
    digitalWrite(4, LOW); //Signal 4 RED OFF
    digitalWrite(2, HIGH); //Signal 4 GREEN ON
    delay(3000);
      
    digitalWrite(3, HIGH);  //Signal 4 YELLOW ON
    digitalWrite(2, LOW); //signal 4 GREEN OFF
    delay(1000);
    digitalWrite(3, LOW); //Signal 4 YELLOW OFF
    }
    }
  
  else if(time_slot == 3)
  {
    while(1)
    {
    digitalWrite(8,HIGH); //Signal 2 GREEN ON
    digitalWrite(2,HIGH); //Signal 4 GREEN ON
    digitalWrite(13,HIGH); //Signal 1 RED ON
    digitalWrite(7,HIGH); //Signal 3 RED ON
    delay(3000);
    
    digitalWrite(8,LOW); //Signal 2 GREEN OFF
    digitalWrite(9,HIGH); //Signal 2 YELLOW ON
    digitalWrite(2,LOW); //Signal 4 GREEN OFF
    digitalWrite(3,HIGH); //Signal 4 YELLOW ON
    delay(1000);
    
    digitalWrite(9,LOW); //signal 2 yellow off
    digitalWrite(3,LOW); //signal 4 yellow off
    digitalWrite(13,LOW); //signal 1 RED off
    digitalWrite(7,LOW); //signal 3 red off
    
    
    digitalWrite(11,HIGH); //Signal 1 GREEN ON
    digitalWrite(5,HIGH); //Signal 3 GREEN ON
    digitalWrite(10,HIGH); //Signal 2 RED ON
    digitalWrite(4,HIGH); //Signal 4 RED ON
    delay(3000);
    
    digitalWrite(11,LOW); //Signal 1 GREEN OFF
    digitalWrite(12,HIGH); //Signal 1 YELLOW ON
    digitalWrite(5,LOW); //Signal 3 GREEN OFF
    digitalWrite(6,HIGH); //Signal 3 YELLOW ON
    delay(1000);
    
    digitalWrite(12,LOW); //signal 1 yellow off
    digitalWrite(6,LOW); //signal 3 yellow off
    digitalWrite(10,LOW); //signal 2 RED off
    digitalWrite(4,LOW); //signal 4 red off
    
    
    digitalWrite(11,HIGH); //Signal 1 GREEN ON
    digitalWrite(8,HIGH); //Signal 2 GREEN ON
    digitalWrite(7,HIGH); //Signal 3 RED ON
    digitalWrite(4,HIGH); //Signal 4 RED ON
    delay(3000);
    
    digitalWrite(11,LOW); //Signal 1 GREEN OFF
    digitalWrite(12,HIGH); //Signal 1 YELLOW ON
    digitalWrite(8,LOW); //Signal 2 GREEN OFF
    digitalWrite(9,HIGH); //Signal 2 YELLOW ON
    delay(1000);
    
    digitalWrite(12,LOW); //signal 1 yellow off
    digitalWrite(9,LOW); //signal 2 yellow off
    digitalWrite(7,LOW); //signal 3 RED off
    digitalWrite(4,LOW); //signal 4 red off
    
    
    
     
    digitalWrite(5,HIGH); //Signal 3 GREEN ON
    digitalWrite(2,HIGH); //Signal 4 GREEN ON
    digitalWrite(13,HIGH); //Signal 1 RED ON
    digitalWrite(10,HIGH); //Signal 2 RED ON
    delay(3000);
    
    digitalWrite(5,LOW); //Signal 3 GREEN OFF
    digitalWrite(6,HIGH); //Signal 3 YELLOW ON
    digitalWrite(2,LOW); //Signal 4 GREEN OFF
    digitalWrite(3,HIGH); //Signal 4 YELLOW ON
    delay(1000);
    
    digitalWrite(6,LOW); //signal 3 yellow off
    digitalWrite(3,LOW); //signal 4 yellow off
    digitalWrite(13,LOW); //signal 1 RED off
    digitalWrite(10,LOW); //signal 2 RED off
    }
    }
  
  else if( time_slot == 4)
  {
    while(1)
    {
    digitalWrite(13, LOW); //Signal 1 RED OFF
    digitalWrite(11, HIGH); //Signal 1 GREEN ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(7, HIGH); //Signal 3 RED ON
    digitalWrite(4, HIGH); //Signal 4 RED ON
    delay(3000);
      
    digitalWrite(12, HIGH);  //Signal 1 YELLOW ON
    digitalWrite(11, LOW); //signal 1 GREEN OFF
    delay(1000);
    digitalWrite(12, LOW); //Signal 1 YELLOW OFF
    
    digitalWrite(13, HIGH); //Signal 1 RED ON
    digitalWrite(10, LOW); //signal 2 RED OFF
    digitalWrite(8, HIGH); //signal 2 GREEN ON
    digitalWrite(7, HIGH); //Signal 3 RED ON
    digitalWrite(4, HIGH); //Signal 4 RED ON
    delay(3000);
      
    digitalWrite(9, HIGH);  //Signal 2 YELLOW ON
    digitalWrite(8, LOW); //signal 2 GREEN OFF
    delay(1000);
    digitalWrite(9, LOW); //Signal 2 YELLOW OFF
    
    digitalWrite(13, HIGH); //Signal 1 RED ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(7, LOW); //Signal 3 RED OFF
    digitalWrite(5, HIGH); //Signal 3 GREEN ON
    digitalWrite(4, HIGH); //Signal 4 RED ON
    delay(3000);
      
    digitalWrite(6, HIGH);  //Signal 3 YELLOW ON
    digitalWrite(5, LOW); //signal 3 GREEN OFF
    delay(1000);
    digitalWrite(6, LOW); //Signal 3 YELLOW OFF
    
    digitalWrite(13, HIGH); //Signal 1 RED ON
    digitalWrite(10, HIGH); //signal 2 RED ON
    digitalWrite(7, HIGH); //Signal 3 RED ON
    digitalWrite(4, LOW); //Signal 4 RED OFF
    digitalWrite(2, HIGH); //Signal 4 GREEN ON
    delay(3000);
      
    digitalWrite(3, HIGH);  //Signal 4 YELLOW ON
    digitalWrite(2, LOW); //signal 4 GREEN OFF
    delay(1000);
    digitalWrite(3, LOW); //Signal 4 YELLOW OFF
    }
    
  
    
  }
  
  
  


}