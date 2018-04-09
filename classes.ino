#include<Servo.h>
#include<RTCZero.h>

int SERVO_PIN = 9;    // The pin which the servo is attached to
Servo myservo; //create a servo object to control a servo
int position = 0; //variable to store the servo position
int MONDAY_POS = 1;
int TUESDAY_POS = 2;
int WEDNESDAY_POS = 3;
int THUSRDAY_POS = 4;
int FRIDAY_POS = 5;
int SATURDAY_POS = 6;
int SUNDAY_POS = 7;
RTCZero rtc;

const byte seconds = 0;
const byte minutes = 0;
const byte hours = 16;

const byte day = 25;
const byte month = 9;
const byte year = 15;

class day {
  public:
    int minutes;
    int hours;
    int day;

    void set_minutes(int m);
    void set_hours(int h);
    void set_day(int d);

  private:
    int position;

    
}

void setup() {
 // put your setup code here, to run once:
 myservo.attach(SERVO_PIN);
 myservo.write(position);
 Serial.begin(9600);

 monday = new day();
 tuesday = new day();
 wednesday = new day();
 thursday = new day();
 friday = new day();
 saturday = new day();
 sunday = new.day();

 
 rtc.begin(); //initialize RTC 24H format
 rtc.setDOW(
 rtc.setTime(hours, minutes, seconds);
 rtc.setDate(day, month, year);

 rtc.setAlarmTime(16, 0, 10);
 rtc.enableAlarm(rtc.MATCH_HHMMSS);

 rtc.attachInterrupt(alarmMatch);

 
}
void loop() {

  while(Serial.available() > 0) {
    monday.
    Serial.read();
  }

}


void set_Monday() {
   int choice = Serial.read();   // Read data sent by the cloud
   servo.write(choice); 
  
}

void set_Tuesday() {
  int choice = Serial.read(); //Read data
  servo.write(choice)
}

//void loop() {
//  for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
//    // in steps of 1 degree
//    myservo.write(pos);              // tell servo to go to position in variable 'pos'
//    delay(100);                       // waits 15ms for the servo to reach the position
//  }
//}
