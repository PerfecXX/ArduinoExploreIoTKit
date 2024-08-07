// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = "LabIOT_03";    // Network SSID (name)
const char PASS[]     = "12345678";    // Network password (use for WPA, or use as key for WEP)

void onMessageChange();
void onHumidityChange();
void onTemperatureChange();
void onLedStateChange();

String message;
float humidity;
float temperature;
bool led_state;

void initProperties(){

  ArduinoCloud.addProperty(message, READWRITE, ON_CHANGE, onMessageChange);
  ArduinoCloud.addProperty(humidity, READWRITE, ON_CHANGE, onHumidityChange);
  ArduinoCloud.addProperty(temperature, READWRITE, ON_CHANGE, onTemperatureChange);
  ArduinoCloud.addProperty(led_state, READWRITE, ON_CHANGE, onLedStateChange);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
