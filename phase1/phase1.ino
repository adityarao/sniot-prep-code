/*
 *  Test if esp8266 is all ok after fixing to the breadboard 
 *  This program blinks the onboard LED and prints on the serial log a 'value'
 */

#include <ESP8266WiFi.h>
#define ONBOARDLED D0

void setup()
{
	Serial.begin(115200);

	pinMode(ONBOARDLED, OUTPUT);
}

unsigned int value = 0;

void loop()
{
	// test LED flashes 500 ms each
	blink(ONBOARDLED, 500, 500);
	Serial.print("Value : ");
	Serial.println(value++);

}

void blink(int pin_number, int on, int off)
{
	digitalWrite(pin_number, HIGH);
	delay(on);
	digitalWrite(pin_number, LOW);
	delay(off);
}