#include "m2c.h"
s32 func_ov004_020c88a0(s32);
void Ring_SoundEffect(s32);
s32 func_ov004_020c88b0(s32);
void func_ov004_020c87d0(u8 *arg0) {
    s32 t;
    s32 n;
    n                      = *(s32 *) (arg0 + 0x1C) + 1;
    *(s32 *) (arg0 + 0x1C) = n;
    t                      = *(s32 *) (arg0 + 0x14);
    if (n == 0) {
        Ring_SoundEffect(func_ov004_020c88a0(t));
        *(s32 *) (arg0 + 0x18) = *(s32 *) (arg0 + 0x18) + 1;
        return;
    }
    if (*(s32 *) (arg0 + 0x1C) == func_ov004_020c88b0(t)) {
        *(s32 *) (arg0 + 0x1C) = -1;
    }
}
