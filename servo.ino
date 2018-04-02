#include<Servo.h>

int SERVO_PIN = 9;    // The pin which the servo is attached to
Servo myservo; //create a servo object to control a servo
int pos = 0; //variable to store the servo position
int MONDAY_POS = 1;
int TUESDAY_POS = 2;
int WEDNESDAY_POS = 3;
int THUSRDAY_POS = 4;
int FRIDAY_POS = 5;
int SATURDAY_POS = 6;
int SUNDAY_POS = 7;

void setup() {
 // put your setup code here, to run once:
 myservo.attach(SERVO_PIN);
 myservo.write(pos);
}
void loop() {

}


void set_Monday() {
   int choice = Serial.read();   // Read data sent by the cloud
   servo.write(choice); 
  
}

//void loop() {
//  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(100);                       // waits 15ms for the servo to reach the position
//  }
//}
