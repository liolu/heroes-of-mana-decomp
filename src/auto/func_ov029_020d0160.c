#include "m2c.h"

M2C_UNK func_ov003_0209b9d4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d244(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d958(s32, M2C_UNK);          /* extern */
M2C_UNK func_ov003_0209ebb4(M2C_UNK);               /* extern */
u32 func_ov003_0209fb2c();                          /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

u32 func_ov029_020d0160(void) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_ip_3;
    s32 temp_ip_4;
    s32 temp_ip_5;
    s32 temp_r2;
    s32 temp_r2_2;
    s32 temp_r2_3;
    s32 temp_r3;
    s32 temp_r3_2;
    s32 var_r5;
    u32 temp_r0;
    u32 var_r0;

    temp_r0 = func_ov003_0209fb2c();
    switch (temp_r0) {
        case 0:
            temp_ip_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_2, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_r3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
            func_ov003_0209ebb4(0x18);
            break;
        case 1:
            temp_ip_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_3, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r3_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3_2, s32 *, 0x210) & 0xF0003FFF) | 0x10000);
            func_ov003_0209ebb4(0x32);
            break;
        case 2:
            temp_ip_4 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_4, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_4, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r2_2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2_2, s32 *, 0x210) & 0xF0003FFF) | 0x8000);
            break;
        case 3:
            temp_ip_5 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip_5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip_5, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r2_3 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                        M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2_3, s32 *, 0x210) = (s32) (M2C_FIELD(temp_r2_3, s32 *, 0x210) & 0xF0003FFF);
            break;
        default:
            temp_ip = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_ip, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_ip, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_r2 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r2, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
            break;
    }
    func_ov003_0209b9d4(0, 6);
    func_ov003_0209b9d4(1, 5);
    func_ov003_0209b9d4(2, 5);
    func_ov003_0209b9d4(3, 5);
    func_ov003_0209b9d4(4, 1);
    func_ov003_0209b9d4(5, 3);
    func_ov003_0209b9d4(6, 1);
    func_ov003_0209b9d4(7, 4);
    func_ov003_0209b9d4(0xC, 0);
    func_ov003_0209b9d4(0xA, 0);
    func_ov003_0209b9d4(0xF, 0);
    func_ov003_0209b9d4(8, 0);
    func_ov003_0209b9d4(0xB, 0);
    func_ov003_0209b9d4(0xD, 0);
    func_ov003_0209b9d4(0xE, 0);
    func_ov003_0209b9d4(9, 0);
    var_r5 = 0;
    do {
        func_ov003_0209d958(var_r5, -1);
        var_r5 += 1;
    } while (var_r5 < 0xB);
    func_ov003_0209d244(1, 0);
    var_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) << 0x1A) >> 0x1F;
    if (var_r0 != 0) {
        var_r0                                      = 0x17;
        M2C_FIELD(data_ov000_02051548, s32 *, 0x90) = 0x17;
    }
    return var_r0;
}
