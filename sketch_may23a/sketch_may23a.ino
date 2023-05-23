#include <Servo.h>
Servo myservo; // create servo object to control a servo
// twelve servo objects can be created on most boards
int pos = 0; // variable to store the servo position
int redPin=12;
int greenPin=11;
int bluePin=10;
void setup() {
// attaches the servo on pin 9 to the servo object
pinMode(redPin, OUTPUT);
pinMode(greenPin, OUTPUT);
pinMode(bluePin, OUTPUT);
myservo.attach(9);
}
void loop() {


analogWrite(redPin,255);
analogWrite(greenPin,0);
analogWrite(bluePin,0);
// goes from 0 degrees to 180 degrees in steps of 1 degree
for (pos = 0; pos <= 180; pos += 1) {
// tell servo to go to position in variable 'pos'
myservo.write(pos);
// waits 10ms for the servo to reach the position
delay(10);
}
analogWrite(redPin,0);
analogWrite(greenPin,225);
analogWrite(bluePin,0);

// goes from 180 degrees to 0 degrees
for (pos = 180; pos >= 0; pos -= 1) {
// tell servo to go to position in variable 'pos'
myservo.write(pos);
// waits 10ms for the servo to reach the position
delay(10);

}

}