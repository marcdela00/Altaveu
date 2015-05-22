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
 
 val= map(val,0,1023,0,8);
 Serial.println (val);
 
 
 if ( val==0){
   digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  digitalWrite(10, LOW);
    digitalWrite(9, LOW); 
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW); 
  digitalWrite(5, LOW); 
  }
  if (val==1){
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, LOW); 
  digitalWrite(5, HIGH); 
  }
  
    if (val==2){
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH); 
  digitalWrite(5, HIGH); 
    }
  
    if (val==3){
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW); 
  digitalWrite(8, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(5, HIGH);  
  }
  
      if (val==4){
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(5, HIGH);  
  }
      if (val==5){
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(5, HIGH);  
  }
        if (val==6){
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(5, HIGH);  
  }
      if (val==7){
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(5, HIGH);  
  }
      if (val==8){
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH); 
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH); 
  digitalWrite(5, HIGH);  
  }
  
  }

