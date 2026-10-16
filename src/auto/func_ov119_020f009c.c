#include "m2c.h"

extern void *data_ov119_020f1e40;
extern void *data_ov119_020f2f68;

void func_ov119_020f009c(void) {
    if ((((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x404) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x814) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0xC24) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1034) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1444) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1854) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x1C64) << 0x1E) >> 0x1F) != 0) ||
        (((u32) (M2C_FIELD(data_ov119_020f1e40, s32 *, 0x2074) << 0x1E) >> 0x1F) != 0)) {
        M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) = (u16) ((M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4FA) & ~1) | 1);
        return;
    }
    M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) = (u16) (M2C_FIELD(data_ov119_020f2f68, u16 *, 0x4F8) + 1);
}
