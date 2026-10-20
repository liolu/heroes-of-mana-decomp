#include "m2c.h"

s32 func_0202d478(s32, u16);                        /* extern */
extern void *data_ov000_02051548;

s32 func_ov107_020dfe70(void *arg0) {
    s32 t;
    void *p;

    p = M2C_FIELD(arg0, void **, 0xE8);
    t = func_0202d478(M2C_FIELD(p, u16 *, 0x10) * 0x64, M2C_FIELD(p, u16 *, 0x12));
    if (t > 0x4B) {
        return 0;
    }
    if ((t <= 0x4B) && (t > 0x32)) {
        if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x40000) != 0x40000) {
            M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) |= 0x8000;
        }
    } else if ((t <= 0x32) && (t > 0x19)) {
        if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x80000) != 0x80000) {
            M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) |= 0x10000;
        }
    } else if (t <= 0x19) {
        if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x100000) != 0x100000) {
            M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) |= 0x20000;
        }
    }
    if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x8000) == 0x8000) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) |= 0x40000;
        M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) ^= 0x8000;
        return 1;
    }
    if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x10000) == 0x10000) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) |= 0x80000;
        M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) ^= 0x10000;
        return 1;
    }
    if ((M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) & 0x20000) != 0x20000) {
        return 0;
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) |= 0x100000;
    M2C_FIELD(data_ov000_02051548, s32 *, 0x8C) ^= 0x20000;
    return 1;
}
