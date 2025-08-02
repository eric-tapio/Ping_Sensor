#ifndef PingSensorHeader
#define PingSensorHeader

// CAPE-Twiggs CubeSat Project
// HSSSI-26 SlimSat
// August 2, 2025
// Eric Tapio (eric.d.tapio@gmail.com)

// This is the ping sensor class
// The majority of the code is simply the Arduino Ping Sensor example code refactored into a class

#include "Arduino.h" // Arduino header file must be included to get the uintx_t types

#define DEFAULT_PING_PIN 10
#define VERBOSE_OUTPUT 1

class Ping_Sensor {
public:
	Ping_Sensor(void);
	Ping_Sensor(uint8_t ping_pin);
	void print(void) const;
	uint32_t getRangeMeasurementInCm(void);
	uint32_t getRangeMeasurementInIn(void);
	void setPingPin(uint8_t pin);

private:
	uint8_t ping_pin;
	uint32_t duration;
	uint32_t range;
	void getPulseDuration(void);
	uint32_t microsecondsToInches(void) const;
	uint32_t microsecondsToCentimeters(void) const;
};

#endif