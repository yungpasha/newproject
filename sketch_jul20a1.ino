 
void setup() 
{     
        pinMode(6, OUTPUT);
        pinMode(7, OUTPUT);  
} 
 
void loop() 
{ 
  
  for (int i = 0; i < 256; i++){
    analogWrite(6, i);
    digitalWrite(7, LOW);
    delay(10);
  }
  while (true)
    ;    
}
