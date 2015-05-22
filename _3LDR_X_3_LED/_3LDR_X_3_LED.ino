void setup() {
 
 pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  
}

void loop() {

  
  
 int LDR1 = analogRead(A0);
 int LDR2 = analogRead(A2);   
 int LDR3 = analogRead(A3);
  
  LDR1 = map(LDR1, 0, 1023, 0, 255);
  LDR2 = map(LDR2, 0, 1023, 0, 255);   
  LDR3 = map(LDR3, 0, 1023, 0, 255);   
  
  analogWrite(led0, LDR1);
  analogWrite(led1, LDR2);
  analogWrite(led1, LDR3);
  
  
  
}
