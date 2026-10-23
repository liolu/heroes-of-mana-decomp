#include "m2c.h"
extern void func_ov004_020c28fc(void *, s32, s32, s32, s32);
extern void func_ov004_020c88a0(s32);
extern void Ring_SoundEffect(void);
extern u8 data_ov004_020cf4e4;
void *func_ov004_020c8730(void *a, s32 b, s32 c, s32 d, s32 e) {
    func_ov004_020c28fc(a, b, c, d, e);
    *(u8 **) a                 = &data_ov004_020cf4e4;
    *(s32 *) ((u8 *) a + 0x14) = b;
    *(s32 *) ((u8 *) a + 0x18) = 0;
    *(s32 *) ((u8 *) a + 0x1C) = -1;
    func_ov004_020c88a0(b);
    Ring_SoundEffect();
    return a;
}
