// Adapted from:
// https://github.com/daniloc/PicoW_HomeAssistant_Starter/tree/main/src/main.cpp

#include <Arduino.h>
#include "HAIntegration.h"
#include "Network.h"

void setup() {
  Serial.begin();

  delay(1000); //Give the serial terminal a chance to connect, if present

  Network::connect();
  configure();
}

int main() {
  setup();
  loop();
}