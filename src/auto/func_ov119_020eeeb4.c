/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_ov119_020f2258;
extern void *data_ov119_020f2f68;

void func_ov119_020eeeb4(void) {
    M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) = (s32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) | 0x1000);
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) = (u16) ((M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) & ~1) | 1);
}
