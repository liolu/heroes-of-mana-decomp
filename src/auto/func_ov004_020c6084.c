#include "m2c.h"

s32 func_ov004_020b9a20(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9c64(M2C_UNK, void *);       /* extern */
s8 func_ov004_020b9cd8(M2C_UNK);                    /* extern */
s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c6084(void *arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    func_ov004_020b9c64(arg1, arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x1C) = func_ov004_020b9a20(arg1);
    M2C_FIELD(arg0, s8 *, 0x20)  = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 3);
    M2C_FIELD(arg0, s32 *, 0x24) = func_ov004_020b9cf4(arg1);
    M2C_FIELD(arg0, s32 *, 0x28) = func_ov004_020b9cf4(arg1);
    M2C_FIELD(arg0, s32 *, 0x2C) = func_ov004_020b9cf4(arg1);
    func_ov004_020b9d44(arg1, 2);
    M2C_FIELD(arg0, s32 *, 0x30) = func_ov004_020b9a20(arg1);
    func_ov004_020b9c64(arg1, arg0 + 0x34);
    M2C_FIELD(arg0, s8 *, 0x90) = func_ov004_020b9cd8(arg1);
    M2C_FIELD(arg0, s8 *, 0x91) = func_ov004_020b9cd8(arg1);
    M2C_FIELD(arg0, s8 *, 0x92) = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 1);
    func_ov004_020b9c64(arg1, arg0 + 0x94);
    func_ov004_020b9c64(arg1, arg0 + 0xA8);
}
