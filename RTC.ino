#include "Arduino.h"
#include "Wire.h"
#include "uRTCLib.h"

// uRTCLib rtc;
uRTCLib rtc(0x68, 0x57);

unsigned int pos;

void setup() {
delay (2000);
	Serial.begin(9600);
	Serial.println("Serial OK");

	Wire.begin();

//	rtc.set(0, 19, 23, 5, 21, 6, 18);
	//  RTCLib::set(byte second, byte minute, byte hour, byte dayOfWeek, byte dayOfMonth, byte month, byte year)

}

void loop() {
	rtc.refresh();

	Serial.print("RTC DateTime: ");
	Serial.print(rtc.year());
	Serial.print('/');
	Serial.print(rtc.month());
	Serial.print('/');
	Serial.print(rtc.day());

	Serial.print(' ');

	Serial.print(rtc.hour());
	Serial.print(':');
	Serial.print(rtc.minute());
	Serial.print(':');
	Serial.print(rtc.second());

	Serial.print(" DOW: ");
	Serial.print(rtc.dayOfWeek());

	Serial.print(" - Temp: ");
	Serial.print(rtc.temp());

	Serial.println();

	delay(1000);
}
