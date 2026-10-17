#include "m2c.h"

s32 null(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9c64(M2C_UNK, void *);       /* extern */
s8 func_ov004_020b9cd8(M2C_UNK);                    /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov004_020c29a0();                      /* extern */

void func_ov004_020c500c(void *arg0, M2C_UNK arg1) {
    func_ov004_020c29a0();
    func_ov004_020b9c64(arg1, arg0 + 0x10);
    M2C_FIELD(arg0, s32 *, 0x1C) = null(arg1);
    M2C_FIELD(arg0, s32 *, 0x20) = null(arg1);
    M2C_FIELD(arg0, s8 *, 0x24)  = func_ov004_020b9cd8(arg1);
    func_ov004_020b9d44(arg1, 3);
    M2C_FIELD(arg0, s32 *, 0x28) = null(arg1);
    func_ov004_020b9c64(arg1, arg0 + 0x2C);
    M2C_FIELD(arg0, s8 *, 0x88) = func_ov004_020b9cd8(arg1);
    M2C_FIELD(arg0, s8 *, 0x89) = func_ov004_020b9cd8(arg1);
    M2C_FIELD(arg0, s8 *, 0x8A) = func_ov004_020b9cd8(arg1);
    M2C_FIELD(arg0, s8 *, 0x8B) = func_ov004_020b9cd8(arg1);
    func_ov004_020b9c64(arg1, arg0 + 0x8C);
    func_ov004_020b9c64(arg1, arg0 + 0xA0);
}
