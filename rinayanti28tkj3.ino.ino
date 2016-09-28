void setup() {
  // initialize digital pin 5 as an output.
  pinMode (5, OUTPUT)

}

void loop() {
  // the loop function runs over and over again forever.
  digitalWrite (5, HIGH) ;  // turn the LED on (HIGH is the voltage level)
  delay(3000) ;             // wait for a second
  digitalWrite  (5 ,LOW) ;  // turn the LED off by making the voltage LOW
  delay(3000) ;             // wait for a second
}
