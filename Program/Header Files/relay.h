#ifndef RELAY_H
#define RELAY_H

#include "includes.h"
#define rlyon()		rly1on()
#define rlyoff()	rly1off()

#define rly1on()			RLY_PORT |= _BV(RLY1_PIN)
#define rly1off()			RLY_PORT &= ~_BV(RLY1_PIN)

#define rly2on()			RLY_PORT |= _BV(RLY2_PIN)
#define rly2off()			RLY_PORT &= ~_BV(RLY2_PIN)

void	rlyinit		(void);

#endif