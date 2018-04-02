// copied from https://playground.arduino.cc/Code/Time

void setup()
{
 Serial.begin(9600);
 Ethernet.begin(mac, ip, gateway);
 Serial.println("waiting for sync");
 setSyncProvider(getNtpTime);
 while (timeStatus() == timeNotSet)
 ; // wait until the time is set by the sync provider
}

void loop()
{
 if ( now() != prevDisplay) //update the display only if the time has changed
 {
 prevDisplay = now();
 digitalClockDisplay();
 }
}

void digitalClockDisplay() {
 // digital clock display of the time
 Serial.print(hour());
 printDigits(minute());
 printDigits(second());
 Serial.print(" ");
 Serial.print(day());
 Serial.print(" ");
 Serial.print(month());
 Serial.print(" ");
 Serial.print(year());
 Serial.println();
}

void printDigits(int digits) {
 // utility function for digital clock display: prints preceding colon and leading 0
 Serial.print(":");
 if (digits < 10)
 Serial.print('0');
 Serial.print(digits);
}

/*-------- NTP code ----------*/
// ntp code not shown - see TimeNTP.ino example sketch
