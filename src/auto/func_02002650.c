#include "m2c.h"

extern void *data_0203673c;

s32 func_02002650(void *arg0, u16 arg1) {
    s32 i;

    if (((u32) M2C_FIELD(M2C_FIELD(data_0203673c, s32 *, 0x24) + (arg1 * 0x34), s32 *, 0) >> 0x1F) != 0) {
        M2C_FIELD((u8 *) arg0 + 0x200, u16 *, 0xAE) = arg1;
        return 0x25;
    }
    i = 0;
    do {
        if (((u16 *) ((u8 *) arg0 + 0x200))[i + 0x32] == 0xFFFF) {
            ((u16 *) ((u8 *) arg0 + 0x200))[i + 0x32] = arg1;
            return i;
        }
        i += 1;
    } while (i < 0x25);
    return -1;
}
