#include "m2c.h"

s32 WMi_CheckInitialized();

u16 WM_GetAllowedChannel(void) {
    if (WMi_CheckInitialized() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
