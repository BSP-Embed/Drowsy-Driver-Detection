#ifndef FIRE_SENSOR_H
#define FIRE_SENSOR_H

#include "includes.h"

#define firedet()			(FIRE_SENS_PPIN & _BV(FIRE_SENS_PIN))

void	FireSensInit(void);

#endif