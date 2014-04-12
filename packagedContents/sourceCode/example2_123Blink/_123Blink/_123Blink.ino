// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pins as an output.
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);  
}

// the loop routine runs over and over again forever:
void loop() {
  //Turn off pin 4 and turn on pin 2
  digitalWrite(4, LOW);
  digitalWrite(2, HIGH);   
  delay(333);           // wait 333 milliseconds (1/3 sec)
  //Turn off pin 2 and turn on pin 3
  digitalWrite(2, LOW);  
  digitalWrite(3, HIGH);  
  delay(333);           // wait 333 milliseconds (1/3 sec)
  //Turn off pin 3 and turn on pin 4
  digitalWrite(3, LOW);  
  digitalWrite(4, HIGH);  
  delay(333);           // wait 333 milliseconds (1/3 sec)
}
