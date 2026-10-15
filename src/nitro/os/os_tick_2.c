#include "m2c.h"

u16 OS_GetTickLo(void) {
    return *(u16 *) 0x04000100;
}
