#ifndef BUTTON_OUT_H
#define BUTTON_OUT_H

#include "pico/stdlib.h"
#include "stdint.h"
#include <ArduinoHA.h>

#define BUTTONA_PIN     9
#define BUTTONB_PIN     10
#define BUTTONC_PIN     11
#define BUTTOND_PIN     12
#define BUTTON_PRESS_TIME 50 // time to hold button down in ms

void button_init();

#endif // SRC_BUTTON_OUT_H