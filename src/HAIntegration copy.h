// Adapted from:
// https://github.com/daniloc/PicoW_HomeAssistant_Starter/tree/main/src

#ifndef SRC_HAINTEGRATION_COPY
#define SRC_HAINTEGRATION_COPY

#include <ArduinoHA.h>

// GPIO Pins connected to the buttons
#define BUTTONA_PIN     9
#define BUTTONB_PIN     10
#define BUTTONC_PIN     11
#define BUTTOND_PIN     12

class HAIntegration {
    public:
    void onButtonCommand(HAButton* sender);
    void loop();
    void configure();
};

#endif // SRC_HAINTEGRATION_COPY
