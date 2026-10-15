#include "m2c.h"

extern u16 wmInitialized;

s32 WMi_CheckInitialized(void) {
    if (wmInitialized != 0) {
        return 0;
    }
    return 3;
}
