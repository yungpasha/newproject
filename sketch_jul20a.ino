int n, m;
void setup() {
  // put your setup code here, to run once:
  pinMode(A0, INPUT);
  pinMode(11, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  n = analogRead(A0);
  analogWrite(11, 255);
  delay(n);
  analogWrite(11, 0);
  delay(n);
}
