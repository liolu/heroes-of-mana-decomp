#include "m2c.h"

extern M2C_UNK data_ov117_020f0ee8;
extern M2C_UNK data_ov117_020f0f00;
extern M2C_UNK data_ov117_020f0f18;
extern M2C_UNK data_ov117_020f0f30;
extern M2C_UNK data_ov117_020f0fc4;
extern M2C_UNK data_ov117_020f10e8;
extern M2C_UNK data_ov117_020f1310;
extern M2C_UNK data_ov117_020f1d18;
extern M2C_UNK data_ov117_020f237c;
extern M2C_UNK data_ov117_020f3d94;

void func_ov117_020e9f30(s32 arg0) {
    if (!(arg0 & 7)) {
        M2C_FIELD(&data_ov117_020f0fc4, s32 *, 0x120) = (s32) (M2C_FIELD(&data_ov117_020f0fc4, s32 *, 0x120) & ~1);
    }
    if (!(arg0 & 4)) {
        M2C_FIELD(&data_ov117_020f0f00, u16 *, 0x16) = (u16) (M2C_FIELD(&data_ov117_020f0f00, u16 *, 0x16) & ~1);
    }
    if (!(arg0 & 2)) {
        M2C_FIELD(&data_ov117_020f1310, u16 *, 2) = (u16) (M2C_FIELD(&data_ov117_020f1310, u16 *, 2) & ~1);
    }
    if (!(arg0 & 1)) {
        M2C_FIELD(&data_ov117_020f0ee8, u16 *, 2) = (u16) (M2C_FIELD(&data_ov117_020f0ee8, u16 *, 2) & ~1);
    }
    if (!(arg0 & 8)) {
        M2C_FIELD(&data_ov117_020f237c, u16 *, 0x62) = (u16) (M2C_FIELD(&data_ov117_020f237c, u16 *, 0x62) & ~0x100);
    }
    if (!(arg0 & 0x10)) {
        M2C_FIELD(&data_ov117_020f10e8, s32 *, 0x224) = (s32) (M2C_FIELD(&data_ov117_020f10e8, s32 *, 0x224) & ~0x20000);
    }
    if (!(arg0 & 0x20)) {
        M2C_FIELD(&data_ov117_020f1d18, u16 *, 0x62) = (u16) (M2C_FIELD(&data_ov117_020f1d18, u16 *, 0x62) & ~0x100);
    }
    if (!(arg0 & 0x40)) {
        M2C_FIELD(&data_ov117_020f0f18, s32 *, 0x14) = (s32) (M2C_FIELD(&data_ov117_020f0f18, s32 *, 0x14) & ~1);
    }
    if (!(arg0 & 0x80)) {
        M2C_FIELD(&data_ov117_020f3d94, u16 *, 0x22) = (u16) (M2C_FIELD(&data_ov117_020f3d94, u16 *, 0x22) & ~0x100);
    }
    if (arg0 & 0x100) {
        return;
    }
    M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) = (s32) (M2C_FIELD(&data_ov117_020f0f30, s32 *, 0x90) & ~1);
}
