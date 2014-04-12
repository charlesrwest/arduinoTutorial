
    //Retrieved from http://playground.arduino.cc/Code/Timer1
    /*
     *  Timer1 library example
     *  June 2008 | jesse dot tane at gmail dot com
     */
     
    #include "TimerOne.h"
    int ledPin = 13;
     
    void setup()
    {
      pinMode(ledPin, OUTPUT);
      Timer1.initialize(500000);         // initialize timer1, and set a 1/2 second period
      Timer1.attachInterrupt(callback);  // attaches callback() as a timer overflow interrupt
    }
     
    void callback()
    {
      digitalWrite(ledPin, digitalRead(ledPin) ^ 1);
    }
     
    void loop()
    {
      // your program here...
      delay(1000);
    }
     

