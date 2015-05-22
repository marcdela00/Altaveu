void setup() {
  // put your setup code here, to run once:
 pinMode(2, OUTPUT);
 pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

val = analogRead(A0);
  val2 = analogRead(A1);

  tone(2, val, val2);
  delay(2*val);


}
