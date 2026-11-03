#include "m2c.h"

u32 CalRnd();                          /* extern */
extern M2C_UNK data_ov096_020d1840;

void func_ov096_020d02c4(s32 *arg0, s32 *arg1) {
    u8 sp[3];
    s32 i;
    s32 r;
    s8 t;
    s8 v;

    sp[0] = M2C_FIELD(&data_ov096_020d1840, u8 *, 0);
    sp[1] = M2C_FIELD(&data_ov096_020d1840, u8 *, 1);
    sp[2] = M2C_FIELD(&data_ov096_020d1840, u8 *, 2);
    for (i = 0; i < 3; i++) {
        r     = (s32) CalRnd() % 3;
        t     = (s8) sp[i];
        v     = *(s8 *) (sp + r);
        sp[i] = (u8) v;
        sp[r] = (u8) t;
    }
    switch ((s8) sp[0]) {
        case 0:
            *arg0 = 0x20;
            *arg1 = 9;
            break;
        case 1:
            *arg0 = 0x13;
            *arg1 = 0x15;
            break;
        case 2:
            *arg0 = 0xE;
            *arg1 = 0x1F;
            break;
        default:
            *arg0 = 0x20;
            *arg1 = 9;
            break;
    }
}
