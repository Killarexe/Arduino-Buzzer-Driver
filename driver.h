#ifndef DRIVER_H
#define DRIVER_H

#define DEBUG_MODE false

#include "Arduino.h"

void play_buzzer(const uint16_t sound_data[], uint8_t tempo, unsigned int data_size, uint8_t pin);

#endif