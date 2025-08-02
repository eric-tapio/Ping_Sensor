// Adafruit TinyUSB is needed if running on the Adafruit ItsyBitsy. Otherwise it can be commented out 
#include <Adafruit_TinyUSB.h> // for Serial
#include <ping_sensor.h>

// Construct the Ping Sensor
Ping_Sensor ping;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
	while (!Serial) {
		delay(10);
	}

	// Ultimlately, the SlimSat Bus will run a program similar to this 
	Serial.print(" ~ Running Ping Sensor (Class version) ... ");

	// Print the ping sensor data members and their values
	ping.print();
}

void loop() {
  // put your main code here, to run repeatedly:
	ping.getRangeMeasurementInCm();
	delay(1000);
}
