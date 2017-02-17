#include "relay.h"

void rlyinit(void) {
	RLY_DDR		|= _BV(RLY1_PIN) | _BV(RLY2_PIN);
	RLY_PORT 	&= ~(_BV(RLY1_PIN) | _BV(RLY2_PIN));
}
