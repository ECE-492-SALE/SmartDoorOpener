// Adapted from:
// https://github.com/daniloc/PicoW_HomeAssistant_Starter/tree/main/src

#include "HAIntegration.h"
#include "Credentials.h"

#include <ArduinoHA.h>
#include <WiFi.h>

//Adapted via:
//  https://github.com/dawidchyrzynski/arduino-home-assistant/blob/main/examples/button/button.ino 

WiFiClient client;
HADevice device;
HAMqtt mqtt(client, device);
HAButton buttonA("myButtonA");
HAButton buttonB("myButtonB");
HAButton buttonC("myButtonC");
HAButton buttonD("myButtonD");

void onButtonCommand(HAButton* sender)
{
    if (sender == &buttonA) {
        Serial.print("Button A was clicked");
        digitalWrite(BUTTONA_PIN, HIGH);
        delay(BUTTON_PRESS_TIME);
        digitalWrite(BUTTONA_PIN, LOW);
    } else if (sender == &buttonB) {
        Serial.print("Button B was clicked");
        digitalWrite(BUTTONB_PIN, HIGH);
        delay(BUTTON_PRESS_TIME);
        digitalWrite(BUTTONB_PIN, LOW);
    } else if (sender == &buttonC) {
        Serial.print("Button C was clicked");
        digitalWrite(BUTTONC_PIN, HIGH);
        delay(BUTTON_PRESS_TIME);
        digitalWrite(BUTTONC_PIN, LOW);
    } else if (sender == &buttonD) {
        Serial.print("Button D was clicked");
        digitalWrite(BUTTOND_PIN, HIGH);
        delay(BUTTON_PRESS_TIME);
        digitalWrite(BUTTOND_PIN, LOW);
    }
}

void configure() {
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

void loop() {
    mqtt.loop();
}