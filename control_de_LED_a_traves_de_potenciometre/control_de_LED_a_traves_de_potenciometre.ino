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
 
 val= map(val,0,1023,0,255);
 Serial.println (val);
 
  
  analogWrite(9, val);
}
