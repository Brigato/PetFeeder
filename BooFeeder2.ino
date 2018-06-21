#include <Servo.h>

// constants won't change. They're used here to set pin numbers:
const int buttonPin = 12;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

Servo myservo;  // create servo object to control a servo

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  // attaches the servo on pin 7 to the servo object
  myservo.attach(7);

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    // tell servo to go to position 90 - STOPPED
    myservo.write(80);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    // tell servo to turn CounterClockWise (CCW)
    myservo.write(170);
  }
}
