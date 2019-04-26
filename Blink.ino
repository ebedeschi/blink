/*
  Blink
  Turns on an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */
#define RN_RESET 9

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(8, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(0, OUTPUT);
  digitalWrite(0, LOW);
  pinMode(1, OUTPUT);
  digitalWrite(1, LOW);
  pinMode(RN_RESET, OUTPUT);
  digitalWrite(RN_RESET, LOW);
  delay(2000);
  digitalWrite(RN_RESET, HIGH);
  //Serial1.begin(57600);

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);
  delay(200);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(5, LOW);
  delay(2000);              // wait for a second
}
