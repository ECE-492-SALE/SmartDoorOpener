// Adapted from:
// https://github.com/daniloc/PicoW_HomeAssistant_Starter/tree/main/src

#ifndef SRC_HAINTEGRATION
#define SRC_HAINTEGRATION

#include <ArduinoHA.h>
#include "button_out.h"

void onButtonCommand(HAButton* sender);
void loop();
void configure();

#endif // SRC_HAINTEGRATION
