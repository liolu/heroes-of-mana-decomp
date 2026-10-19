#include "m2c.h"

M2C_UNK VBlankIntrWaitInGame();                      /* extern */
M2C_UNK func_ov119_020e9f30(M2C_UNK, s32, s32);     /* extern */
M2C_UNK func_ov119_020eb170();                      /* extern */
M2C_UNK func_ov119_020eb1d0();                      /* extern */
M2C_UNK func_ov119_020eb3b4();                      /* extern */
M2C_UNK func_ov119_020eb4f0();                      /* extern */
M2C_UNK func_ov119_020eb9e8();                      /* extern */
M2C_UNK func_ov119_020eba24();                      /* extern */
M2C_UNK func_ov119_020ecf08(M2C_UNK);               /* extern */
M2C_UNK func_ov119_020f0b28();                      /* extern */
M2C_UNK func_ov119_020f12a0();                      /* extern */
M2C_UNK func_ov119_020f13f4();                      /* extern */
u32 func_ov119_020f1470();                          /* extern */
extern M2C_UNK data_ov119_020f1e60;
extern M2C_UNK data_ov119_020f1e98;
extern M2C_UNK data_ov119_020f2258;

u32 func_ov119_020eb4f4(void) {
    s32 var_r10;
    s32 var_r9;
    u32 temp_r0;
    u32 temp_r0_2;

    VBlankIntrWaitInGame();
    func_ov119_020eb3b4();
    func_ov119_020eb4f0();
    if ((u16) (((*(u16 *) 0x04000130 | *(u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF) & 2) {
        var_r10 = 2;
    } else {
        var_r10 = 1;
    }
    temp_r0_2 = (u32) (M2C_FIELD(&data_ov119_020f2258, s32 *, 0x34) << 0xD) >> 0x1F;
    if (temp_r0_2 != 0) {
        var_r10 = 1;
    }
    var_r9 = 0;
    if (var_r10 <= var_r9) {
        return temp_r0_2;
    }
    do {
        func_ov119_020e9f30(0, M2C_FIELD(&data_ov119_020f1e98, s32 *, 0x14) + M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x14),
                            M2C_FIELD(&data_ov119_020f1e98, s32 *, 0x18) + M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x18));
        func_ov119_020e9f30(1, M2C_FIELD(&data_ov119_020f1e98, s32 *, 0x38) + M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x30),
                            M2C_FIELD(&data_ov119_020f1e98, s32 *, 0x3C) + M2C_FIELD(&data_ov119_020f1e60, s32 *, 0x34));
        func_ov119_020eb1d0();
        func_ov119_020eb170();
        func_ov119_020eb9e8();
        func_ov119_020eba24();
        func_ov119_020f0b28();
        func_ov119_020ecf08(0);
        func_ov119_020ecf08(1);
        func_ov119_020f12a0();
        func_ov119_020f13f4();
        temp_r0 = func_ov119_020f1470();
        var_r9 += 1;
    } while (var_r9 < var_r10);
    return temp_r0;
}
