#include "m2c.h"

extern s32 data_ov121_020f6d60[];

void func_ov121_020eb2ac(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 i;
    u8 *ent;
    s32 *ctr;
    if (arg3 == 0) {
        return;
    }
    i = (u32) (data_ov121_020f6d60[0xA48 / 4] << 8) >> 24;
    if (i >= 0x80) {
        return;
    }
    ent                        = (u8 *) &data_ov121_020f6d60[4];
    *(u32 *) (ent + i * 8)     = arg4 | (arg5 | ((arg1 & 0xFF) | (arg7 << 0xA)) | ((arg0 & 0x1FF) << 16));
    *(u16 *) (ent + i * 8 + 4) = (u16) (arg3 | (arg6 << 0xA) | (arg2 << 0xC));
    ctr                        = data_ov121_020f6d60 + 0xA48 / 4;
    *ctr                       = (*ctr & ~0xFF0000) | (((((u32) (*ctr << 8) >> 24) + 1) << 0x18) >> 8);
}
