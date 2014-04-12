// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;
int value = 0;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);
  pinMode(5, INPUT);  
}

// the loop routine runs over and over again forever:
void loop() 
{
  //Read in the value from the switch
  value = digitalRead(5);
  //Set the LED to the value from the switch
  digitalWrite(ledPin, value);
}
