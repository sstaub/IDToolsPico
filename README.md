# Raspberry Pi Pico ID Tools

Library creating randomized UUIDs and MAC addresses for Earl E. Philhowers Arduino core and PicoSDK.<br>

## Example
Here is a simple example which shows the capabilities of the library.<br>

```cpp
#include "Arduino.h"
#include "IDToolsPico.h"

void setup() {
	Serial.begin(9600);
	delay(2000);
	}

void loop() {
	uint8_t uuid[16];
	generateUUID(cid);
	Serial.printf("UUID %s version %d\n", printUUID(uuid), verifyUUID(uuid));
	uint8_t mac[6];
	generateMAC(mac);
	Serial.printf("MAC %s\n", printMAC(mac));
	delay(1000);
	}
```

# Documentation

## UUID Tools

### **generateUUID()**
Generate a random 128bit UUID version 4
```cpp
void generateUUID(uint8_t uuid[]);
uint8_t* generateUUID();
```
The results is stored in a 16 bytes wide uint8_t array

**Example**

```cpp
uint8_t uuid[16];
generateUUID(uuid);
```

### **verifyUUID()**
Verify for version
```cpp
uint8_t verifyUUID(uint8_t uuid[])
```
Returns the version (1 - 7) or 0 if the UUID is not correct

**Example**

```cpp
uint8_t version = verifyUUID(uuid);
```

### **printUUID()**
Generate a formated string of the UUID
```cpp
void printUUID(uint8_t uuid[], char uuidString[])
char* printUUID(uint8_t cid[])
```
The returned string size has 36(37) chars and is formated as FFFFFFFF-FFFF-FFFF-FFFF-FFFFFFFFFFFF

**Example**

```cpp
Serial.println(printUUID(uuid));
```

## MAC address Tools

### **generateMAC()**
Generate a random MAC address for local use
```cpp
void generateMAC(uint8_t mac[]);
uint8_t* generateMAC();
```
The result is stored in a 6 bytes wide uint8_t array

**Example**

```cpp
uint8_t mac[6];
generateMAC(mac);
```

### **printMAC()**
Generate a formated string of the MAC address
```cpp
void printMAC(uint8_t mac[], char macString[])
char* printMAC(uint8_t mac[])
```
The returned string size has 17(18) chars and is formated as FF:FF:FF:FF:FF:FF

**Example**

```cpp
Serial.println(printMAC(mac));
```
