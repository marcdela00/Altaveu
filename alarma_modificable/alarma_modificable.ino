// Modificant val es canvia el to de l'altaveu
// Modificant Time es canvia la freqüenca de la alarma
  


void setup () {
  pinMode(2, INPUT);
  pinMode(A0, INPUT );
 
  pinMode(5, OUTPUT);  

}
void loop () {
  int val = analogRead(A0);
  int time = analogRead(A1);
  val = map(val,0,900,0,255);
    
if(digitalRead(2)){
  analogWrite(5, val );
 delay (time);
 analogWrite(5, 0 );
delay (time);



} else{
   digitalWrite(5, LOW);
 
 


}

}
//minim de cada programa


