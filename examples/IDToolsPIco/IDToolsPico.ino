#include "IDToolsPico.h"

void setup() {
	Serial.begin(9600);
	delay(2000);
	}

void loop() {
	static uint8_t uuid[16];
	generateUUID(uuid);
	Serial.printf("UUID %s version %d\n", printUUID(uuid), verifyUUID(uuid));
	static uint8_t mac[6];
	generateMAC(mac);
	Serial.printf("MAC %s\n", printMAC(mac));
	delay(1000);
	}
