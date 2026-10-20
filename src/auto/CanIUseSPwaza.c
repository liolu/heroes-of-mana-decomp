/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 GetRnd(void);

s32 CanIUseSPwaza(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0xE8), u16 *, 0x16) == 0) {
        return 0;
    }
    if ((M2C_FIELD(arg0, s32 *, 0xE0) & 0x660) != 0) {
        if ((s32) GetRnd() % 100 < 100) {
            return 1;
        }
    }
    if ((M2C_FIELD(arg0, s32 *, 0xE0) & 8) != 0) {
        if ((s32) GetRnd() % 100 < 30) {
            return 1;
        }
    }
    return 0;
}
