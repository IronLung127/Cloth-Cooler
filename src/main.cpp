#include <Arduino.h>
#include <HCSR04.h>

HCSR04 uSensor(11, 10);

void setup()
{
	Serial.begin(25000);
}

void loop()
{
	while (uSensor.dist() > 5)
	{
		if (uSensor.dist() > 5) 
		{
			Serial.print("Ultrasonic Sensor ");
			Serial.print(uSensor.dist());
			Serial.println(" cm");
			delay(300);
		} else {
			Serial.println();
		}
	}
	Serial.flush();
	Serial.println("Distance less than 5 cm");
	delay(300);
}