#include <ESP8266WiFi.h>

#define MY_DEBUG
#define MY_BAUD_RATE 9600
#define MY_RADIO_RF24

#define MY_GATEWAY_ESP8266
// #define MY_WIFI_SSID WIFI_SSID
// #define MY_WIFI_PASSWORD WIFI_PASS

// The port to keep open on node server mode
#define MY_PORT 5003

// How many clients should be able to connect to this gateway (default 1)
#define MY_GATEWAY_MAX_CLIENTS 2

// Enable inclusion mode
#define MY_INCLUSION_MODE_FEATURE
// Enable Inclusion mode button on gateway
// #define MY_INCLUSION_BUTTON_FEATURE
// Set inclusion mode duration (in seconds)
#define MY_INCLUSION_MODE_DURATION 60
// Digital pin used for inclusion mode button
#define MY_INCLUSION_MODE_BUTTON_PIN  3

// Set blinking period
// #define MY_DEFAULT_LED_BLINK_PERIOD 300

// Flash leds on rx/tx/err
// Led pins used if blinking feature is enabled above
#define MY_DEFAULT_ERR_LED_PIN 16  // Error led pin
#define MY_DEFAULT_RX_LED_PIN  16  // Receive led pin
#define MY_DEFAULT_TX_LED_PIN  16  // the PCB, on board LED

#if defined(MY_USE_UDP)
#include <WiFiUdp.h>
#endif

#include <MySensors.h>

void setup() {
}

void presentation() {
	// Present locally attached sensors here
}

void loop() {
	// Send locally attached sensors data here
}
