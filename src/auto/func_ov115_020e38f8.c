#include "m2c.h"

extern s32 data_ov115_020e9160[];

void func_ov115_020e38f8(s32 arg0, u8 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    u32 i;
    u8 *ent;
    s32 *ctr;
    i = (u32) (data_ov115_020e9160[0x216] << 24) >> 24;
    if (i >= 0x80) {
        return;
    }
    if (arg3 == 0) {
        return;
    }
    ent                        = (u8 *) &data_ov115_020e9160[4];
    *(u32 *) (ent + i * 8)     = arg4 | (arg5 | ((arg1 & 0xFF) | (arg7 << 0xA)) | ((arg0 & 0x1FF) << 16));
    *(u16 *) (ent + i * 8 + 4) = (u16) (arg3 | (arg6 << 0xA) | (arg2 << 0xC));
    ctr                        = data_ov115_020e9160 + 0x216;
    *ctr                       = (*ctr & ~0xFF) | ((((u32) (*ctr << 24) >> 24) + 1) & 0xFF);
}
