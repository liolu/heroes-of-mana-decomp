#include "m2c.h"

M2C_UNK func_ov004_020bc2b8(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc2bc(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc2c0(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov004_020bc3a8(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc3bc(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc3d0(M2C_UNK);               /* extern */
M2C_UNK func_ov004_020bc7b8(M2C_UNK, u8);           /* extern */
M2C_UNK func_ov004_020bc89c(M2C_UNK);               /* extern */

void func_ov004_020c0afc(void *arg0, M2C_UNK arg1) {
    if (M2C_FIELD(arg0, u8 *, 0xBF) == 0) {
        return;
    }
    func_ov004_020bc2b8(arg1);
    func_ov004_020bc2c0(arg1, 1);
    func_ov004_020bc3a8(arg1);
    func_ov004_020bc3d0(arg1);
    func_ov004_020bc7b8(arg1, M2C_FIELD(arg0, u8 *, 0xBF));
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0) =
        (s32) (u16) (((s32) M2C_FIELD(arg0, u8 *, 0xBC) >> 3) | (((s32) M2C_FIELD(arg0, u8 *, 0xBD) >> 3) << 5) |
                     (((s32) M2C_FIELD(arg0, u8 *, 0xBE) >> 3) << 0xA));
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = 0x40FFA0;
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = 0xFD80;
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = -0x3F0060;
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = 0xFD80;
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = -0x3FFFA0;
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = 0xFD80;
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = 0x400060;
    M2C_FIELD((void *) 0x04000480, volatile s32 *, 0xC) = 0xFD80;
    func_ov004_020bc89c(arg1);
    func_ov004_020bc3bc(arg1);
    func_ov004_020bc2bc(arg1);
}
