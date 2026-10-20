/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

u32 GetHowManyCariSt(u16);
s32 GetNoCariStByJunban(u16, u32);
extern void *data_ov000_02051548;
extern u8 data_ov003_020ab06c[];
extern u8 data_ov003_020b0cf0[];

void changePatBySync(void *arg0) {
    u8 *p;
    u8 c;

    p = data_ov003_020b0cf0 + (M2C_FIELD(arg0, s16 *, 0x72) * 0x110);
    if ((M2C_FIELD(p, s32 *, 0xE0) & 0x7FFF) == 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = M2C_FIELD(arg0, s32 *, 0xC) & ~1;
    } else {
        M2C_FIELD(arg0, s32 *, 0xC) = (M2C_FIELD(arg0, s32 *, 0xC) & ~1) | 1;
        c = data_ov003_020ab06c[GetNoCariStByJunban((u16) M2C_FIELD(p, s32 *, 0xE0),
                                                    ((u32) M2C_FIELD(data_ov000_02051548, u32 *, 0x1A4) >> 5)
                                                        % GetHowManyCariSt((u16) M2C_FIELD(p, s32 *, 0xE0)))];
        if (M2C_FIELD(arg0, u16 *, 0x2A) != c) {
            M2C_FIELD(arg0, u16 *, 0x2A) = c;
            M2C_FIELD(arg0, u16 *, 0x2E) = 0;
            M2C_FIELD(arg0, u16 *, 0x36) = 0x8000;
        }
    }
}