#include "m2c.h"

M2C_UNK func_02018c08(s32);                         /* extern */
s32 func_02019444(s32, s32, u16);                   /* extern */
M2C_UNK func_0201da30();                            /* extern */
M2C_UNK func_0201f34c(M2C_UNK);                     /* extern */
extern M2C_UNK data_020415e0;

s32 func_0201ede8(void) {
    s32 temp_r0;

    M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s16 *, 0x528) = 0;
    M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s16 *, 0x52A) = 0;
    M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s16 *, 0x526) = 0;
    M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s16 *, 0x548) = 0;
    func_0201f34c(0xA);
    if (M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 0xC), s32 *, 0x1320) == 0) {
        do {
            temp_r0 = func_02019444(M2C_FIELD(&data_020415e0, s32 *, 4),
                                    M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s32 *, 0x508),
                                    M2C_FIELD(&data_020415e0, u16 *, 0));
        } while (temp_r0 == 4);
        if (temp_r0 != 2) {
            return 8;
        }
        func_02018c08(M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s32 *, 0x508));
        M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s8 *, 0x50D) = 1;
        return 0;
    }
    func_02018c08(M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s32 *, 0x508));
    M2C_FIELD(M2C_FIELD(&data_020415e0, void **, 8), s8 *, 0x50D) = 1;
    func_0201da30();
    return 0;
}
