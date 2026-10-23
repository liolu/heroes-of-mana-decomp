#include "m2c.h"
typedef struct {
    u8 p0[0xC];
    u8 *pc;
    u8 pad[0xA00];
    u32 a10;
} G;
extern s16 data_ov120_020f42d4;
extern G data_ov120_020f46dc;
extern u8 data_ov120_020f4eec;
extern u8 data_ov120_020f4dec;
u8 *func_ov120_020ee13c(s32);
void func_ov120_020ec798(s32, s32, s32, s32, s32, void *);
void func_ov120_020ec924(s32, s32, s32, s32, s32, void *);
void func_ov120_020ee214(u8 *o) {
    s32 i;
    u8 *t;
    t                      = func_ov120_020ee13c(data_ov120_020f42d4);
    data_ov120_020f46dc.pc = o + 0x5C8;
    if ((u16) data_ov120_020f46dc.a10 == 2) {
        func_ov120_020ec798(0x10, 0x10, 0x10, 0, 1, &data_ov120_020f4eec);
    } else {
        func_ov120_020ec798(8, 0x10, 0x10, 0, 1, &data_ov120_020f4eec);
    }
    data_ov120_020f46dc.pc = o + 0x5E8;
    func_ov120_020ec924(0x8D, 0x4A, t[8], 0, 1, &data_ov120_020f4dec);
    for (i = 0; i < 3; i++) {
        data_ov120_020f46dc.pc = o + ((i + 2) * 32 + 0x5C8);
        func_ov120_020ec924(0x8D, 0x7A + i * 0x18, t[9 + i], 0, 1, &data_ov120_020f4dec + ((i + 1) << 6));
    }
}
