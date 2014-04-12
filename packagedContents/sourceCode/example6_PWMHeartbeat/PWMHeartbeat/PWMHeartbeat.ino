// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  
  //Rising heartbeat
  //Use a 16 bit counter, so we can have values over 255
  //Do a thousand cycles, adding one to i each time
  for(uint16_t i=1; i<1000; i++)
  {
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(1000-i);          // wait for a 1000 - i microseconds
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(i);               // wait for i microseconds
  }
  
  //Falling heartbeat
  //Use a 16 bit counter, so we can have values over 255
  //Do a thousand cycles, adding one to i each time
  for(uint16_t i=1; i<1000; i++)
  {
  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delayMicroseconds(1000-i);               // wait for a 1000 - i microseconds
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delayMicroseconds(i);               // wait for i microseconds
  }
}
