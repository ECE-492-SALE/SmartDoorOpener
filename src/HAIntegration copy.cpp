// Adapted from:
// https://github.com/daniloc/PicoW_HomeAssistant_Starter/tree/main/src

#include "HAIntegration copy.h"
#include "Credentials.h"

#include <ArduinoHA.h>
#include <WiFi.h>

//Adapted via:
//  https://github.com/dawidchyrzynski/arduino-home-assistant/blob/main/examples/button/button.ino 

/*
WiFiClient client;
HADevice device;
HAMqtt mqtt(client, device);
HAButton buttonA("myButtonA");
HAButton buttonB("myButtonB");
HAButton buttonC("myButtonC");
HAButton buttonD("myButtonD");

void HAIntegration::onButtonCommand(HAButton* sender)
{
    if (sender == &buttonA) {
        // button A was clicked, do your logic here
    } else if (sender == &buttonB) {
        // button B was clicked, do your logic here
    } else if (sender == &buttonC) {
        // button C was clicked, do your logic here
    } else if (sender == &buttonD) {
        // button D was clicked, do your logic here
    }
}

void HAIntegration::configure() {
    //Set device ID as MAC address
    byte mac[WL_MAC_ADDR_LENGTH];
    WiFi.macAddress(mac);
    device.setUniqueId(mac, sizeof(mac));

    //Device metadata:
    device.setName("Door Opener");
    device.setSoftwareVersion("0.1");
    // buttonA.setIcon("mdi:fire");
    buttonA.setName("Stacker");
    buttonB.setName("Pet access");
    buttonC.setName("Open");
    buttonD.setName("Change Mode");

    // handle button presses
    buttonA.onCommand(onButtonCommand);
    buttonB.onCommand(onButtonCommand);
    buttonC.onCommand(onButtonCommand);
    buttonD.onCommand(onButtonCommand);

    Serial.print("Connecting to MQTT\n");
    
    if (mqtt.begin(MQTT_BROKER, MQTT_LOGIN, MQTT_PASSWORD) == true) {
        Serial.print("Connected to MQTT broker");
    } else {
        Serial.print("Could not connect to MQTT broker");
    }
}

void HAIntegration::loop() {
    mqtt.loop();
}
*/