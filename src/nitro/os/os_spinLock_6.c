#include "m2c.h"

void OSi_FreeCardBus(void) {
    *(u16 *) 0x04000204 |= 0x800;
}
