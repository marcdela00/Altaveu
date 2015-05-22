void setup () {
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);    
  pinMode(9, OUTPUT);   
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT);
  pinMode(2, INPUT);
  Serial.begin(9600);
 
 }


//*********************loop********************************************
void loop () { 
  
 int val = analogRead(A0);
   int time = 50;
 time= map(val,0,1023,8,255);
 Serial.println (time);
 
  
  analogWrite(9, 0);
  delay (time);
    analogWrite(9, 17);
  delay (time);
      analogWrite(9, 34);
  delay (time);
      analogWrite(9, 51);
  delay (time);
      analogWrite(9, 68);
  delay (time);
      analogWrite(9, 85);
  delay (time);
      analogWrite(9, 102);
  delay (time);
      analogWrite(9, 119);
  delay (time);
      analogWrite(9, 136);
  delay (time);
      analogWrite(9, 153);
  delay (time);
      analogWrite(9, 170);
  delay (time);
      analogWrite(9, 187);
  delay (time);
      analogWrite(9, 204);
  delay (time);
      analogWrite(9, 221);
  delay (time);
      analogWrite(9, 238);
  delay (time);
      analogWrite(9, 255);
  delay (time);
 //tornada
  analogWrite(9, 255);
  delay (time);
       analogWrite(9, 238);
  delay (time);
      analogWrite(9, 221);
  delay (time);
      analogWrite(9, 204);
  delay (time);
      analogWrite(9, 187);
  delay (time);
      analogWrite(9, 187);
  delay (time);
      analogWrite(9, 170);
  delay (time);
      analogWrite(9, 153);
  delay (time);
      analogWrite(9, 136);
  delay (time);
      analogWrite(9, 119);
  delay (time);
      analogWrite(9, 102);
  delay (time);
      analogWrite(9, 85);
  delay (time);
      analogWrite(9, 68);
  delay (time);
      analogWrite(9, 51);
  delay (time);
      analogWrite(9, 34);
  delay (time); 
    analogWrite(9, 17);
  delay (time);
      analogWrite(9, 0);
  delay (time);
}
