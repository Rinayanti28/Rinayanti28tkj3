int merah = 0,
    kuning = 1,
    hijau = 2,
     
    fromR = 3, 
    toT = 4,
    firstsignal = 5;
 
byte ex  = 0b0;
byte first = 0b0;
void setup() {
  // put your setup code here, to run once:
pinMode(merah,OUTPUT);
  pinMode(kuning,OUTPUT);
  pinMode(hijau,OUTPUT); 
 
  pinMode(fromR,INPUT);
  pinMode(firstsignal,INPUT); 
  pinMode(toT,OUTPUT);
  
  
  if(digitalRead(firstsignal) == HIGH) first = 0b1;
}
int myspeed = 500;
void gantiLampu(int pin){
    for(int i=0; i < 3; i++){
        if(i == pin) digitalWrite(i,HIGH);
        else digitalWrite(i,LOW);
      }

}

void loop() {
  // put your main code here, to run repeatedly:
  myspeed = analogRead(A0);
 
   if(myspeed < 200) myspeed = 200; 
 
   
  int i = digitalRead(fromR);
  if(first == 0b1){
      i = HIGH;
      ex = 0b1;
      first = 0b0;
    }
 
  if(i == LOW) ex = 0b1;
     
  if( i == HIGH && ex == 0b1){
      ex = 0b0;
 
     digitalWrite(toT,LOW);
     gantiLampu(kuning);
      delay(myspeed);
     gantiLampu(hijau);
      delay(myspeed);
     gantiLampu(merah);
     digitalWrite(toT,HIGH);
     delay(1000);
    } else {
       
 
     gantiLampu(merah);
      } 
}
