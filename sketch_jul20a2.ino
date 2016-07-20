int n; 
void setup() 
{     
        pinMode(4, OUTPUT);
        pinMode(5, OUTPUT);
        pinMode(A0, INPUT);
} 
 
void loop() 
{ 
  n = analogRead(A0);
  if(n > 510){
      analogWrite(4, 126);
      digitalWrite(5, LOW); 
  }
 else{
  analogWrite(4, 0);
  digitalWrite(5, LOW);
   
 }
}
