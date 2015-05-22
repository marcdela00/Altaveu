void setup() {

  
pinMode(2, OUTPUT);
pinMode(A0, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  
 val = analogRead(A0); 

  tone(2, 800, val);
  delay(2*val);
}
