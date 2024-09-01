#ifndef DRIVER_H
#define DRIVER_H

#include "Arduino.h"
#include "Polytone.h"

void play_buzzer(Polytone* poly, const uint16_t sound_data[], uint8_t tempo, unsigned int data_size);

#endif