#include "m2c.h"

M2C_UNK func_ov117_020e4f7c(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov117_020e4fd8();                      /* extern */
M2C_UNK func_ov117_020e5018(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
u32 func_ov117_020e5474(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov117_020e57a4(M2C_UNK);                   /* extern */
M2C_UNK func_ov117_020e5ee0(M2C_UNK *, s32, u32);   /* extern */
M2C_UNK func_ov117_020e6af8(M2C_UNK *);             /* extern */
M2C_UNK func_ov117_020e7274();                      /* extern */
M2C_UNK func_ov117_020e7b80(u32);                   /* extern */
extern M2C_UNK data_ov117_020f0fc4;
extern M2C_UNK data_ov117_020f10d0;
typedef struct {
    u32 a : 25;
    u32 b : 1;
    u32 r : 6;
} B_data_ov117_020f23e0;
typedef struct {
    u8 pad[2736];
    B_data_ov117_020f23e0 f;
} D_data_ov117_020f23e0;
extern D_data_ov117_020f23e0 data_ov117_020f23e0;

void func_ov117_020e8758(void) {
    u32 temp_r2;
    u32 var_r0;

    M2C_FIELD(&data_ov117_020f23e0, s32 *, 0) = 1;
    M2C_FIELD(&data_ov117_020f23e0, s32 *, 8) = 1;
    func_ov117_020e4fd8();
    func_ov117_020e7274();
    func_ov117_020e5018(0xF4, 0x2C, func_ov117_020e57a4(8) + 0xF, 0);
    func_ov117_020e5018(0xF4, 0xB4, func_ov117_020e57a4(9) + 0x11, 0);
    func_ov117_020e6af8(&data_ov117_020f10d0);
    var_r0 = (u32) (M2C_FIELD(&data_ov117_020f0fc4, s32 *, 0x114) << 0x17) >> 0x1F;
    if (var_r0 != 0) {
        func_ov117_020e5474(0, 0x10, 0);
        var_r0 = func_ov117_020e5474(0, 0xA0, 0x100);
    }
    func_ov117_020e7b80(var_r0);
    func_ov117_020e4f7c(0, 0x400);
    temp_r2 = data_ov117_020f23e0.f.b;
    if (temp_r2 == 0) {
        return;
    }
    data_ov117_020f23e0.f.b = 0;
    func_ov117_020e5ee0((s32 *) (void *) &data_ov117_020f23e0, *(s32 *) (void *) &data_ov117_020f23e0.f, temp_r2);
}
