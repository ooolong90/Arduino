
#include "ESP8266WiFi.h"

char ssid[] = "mySSID";
char pass[] = "myPass";

IPAddress ip;
byte mac[6] = { 0 };

void setup()
{
	Serial.begin(115200);   // try WiFi connection

	while(WiFi.begin(ssid, pass) != WL_CONNECTED)
	{
		Serial.println("Try WiFi Connection");
		delay(10000);
	}
	Serial.println("WiFi Connection Ok");

	ip = WiFi.localIP();   // get local IP address
	Serial.println(ip);
}

void loop() 
{

}

