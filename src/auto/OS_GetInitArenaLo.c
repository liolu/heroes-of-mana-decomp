#include "m2c.h"

s32 OS_GetConsoleType();
extern M2C_UNK OSi_Initialized;

s32 OS_GetInitArenaLo(u32 arg0) {
    switch (arg0) {
        case 0:
            return 0x020F7800;
        case 2:
            if ((M2C_FIELD(&OSi_Initialized, s32 *, 4) == 0) || ((OS_GetConsoleType() & 3) == 1)) {
                return 0;
            }
            return 0x023E0000;
        case 3:
            return 0x01FFEC20;
        case 4:
            return 0x027E1060;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
        case 1:
            return 0;
    }
}
