#include "m2c.h"

M2C_UNK MIi_CpuClearFast(M2C_UNK, s32, M2C_UNK);    /* extern */
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);           /* extern */
s32 func_0200a7b8();                                /* extern */
s32 func_0200a80c();                                /* extern */
M2C_UNK func_ov112_020e72cc(M2C_UNK);               /* extern */

typedef struct {
    u8 pad0[0x488];
    u32 a:19;
    u32 b:4;
    u32 c:3;
    u32 d:2;
    u32 e:1;
    u32 f:3;
} S;

extern S data_ov112_020ec588;
extern u8 data_ov112_020eca1c[];

void func_ov112_020e6e40(void) {
    s32 i;
    u8 *p;

    MIi_CpuCopy16(M2C_FIELD(&data_ov112_020ec588, s32 *, 0x444), func_0200a80c(), 0x800);
    MIi_CpuClearFast(0, func_0200a7b8(), 0x800);
    data_ov112_020ec588.b = 0;
    data_ov112_020ec588.c = 0;
    data_ov112_020ec588.e = 0;
    p = data_ov112_020eca1c;
    i = 0;
    do {
        i += 1;
        p[0xD38] = 0;
        p += 1;
    } while (i < 6);
    func_ov112_020e72cc(3);
}
