/* compiler: 1.2/sp3 */
#include "m2c.h"

u16 func_02008fb4(s32, u8);                         /* extern */
s32 func_02008ff0(u16, M2C_UNK);                    /* extern */
M2C_UNK func_ov123_020ae090();                      /* extern */
M2C_UNK func_ov123_020ae0a8();                      /* extern */
M2C_UNK func_ov123_020ae628();                      /* extern */
M2C_UNK func_ov123_020b76b8();                      /* extern */
M2C_UNK func_ov123_020b7bc4();                      /* extern */
u32 func_ov123_020c23c0();                          /* extern */
s32 func_ov123_020c23d4();                          /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
s32 func_ov123_020cb6ac(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern u16 data_ov123_020e4650;
extern void *data_ov123_020e4654;
extern M2C_UNK func_ov123_020b7784;
extern M2C_UNK func_ov123_020b7824;

void func_ov123_020b807c(void) {
    s32 temp_r0_3;
    u32 temp_r0_2;
    u8 temp_r0;

    if (M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(data_ov123_020e4654, u8 *, 0x55);
    if (temp_r0 != 0) {
        M2C_FIELD(data_ov123_020e4654, u8 *, 0x55) = (u8) (temp_r0 - 1);
    }
    temp_r0_2 = func_ov123_020c23c0();
    switch (temp_r0_2) {
        case 1:
            M2C_FIELD(data_ov123_020e4654, s8 *, 0x57) = 1;
            func_ov123_020ae090();
            return;
        case 2:
            if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x55) != 0) {
                return;
            }
            func_ov123_020ae628();
            data_ov123_020e4650 = func_02008fb4(M2C_FIELD(data_ov123_020e4654, u16 *, 0x40) * func_ov123_020c23d4(),
                                                M2C_FIELD(data_ov123_020e4654, u8 *, 0x53));
            func_ov123_020b7bc4();
            M2C_FIELD(data_ov123_020e4654, u8 *, 0x55) = 4U;
            return;
        case 3:
            M2C_FIELD(data_ov123_020e4654, s8 *, 0x57) = 0;
            func_ov123_020ae0a8();
            data_ov123_020e4650 = func_02008fb4(M2C_FIELD(data_ov123_020e4654, u16 *, 0x40) * func_ov123_020c23d4(),
                                                M2C_FIELD(data_ov123_020e4654, u8 *, 0x53));
            func_ov123_020c36bc(0x13);
            func_ov123_020b7bc4();
            temp_r0_3 = func_02008ff0(data_ov123_020e4650, 0x1C);
            if (temp_r0_3 == 0) {
                func_ov123_020b76b8();
                return;
            }
            if (temp_r0_3 < 0xE) {
                M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020b7824, 0, 0x78);
                return;
            }
            M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020b7784, 0, 0x78);
            return;
        case 4:
            if (data_ov123_020e4650 == 0) {
                if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x58) != 0) {
                    return;
                }
                func_ov123_020c36bc(9);
                M2C_FIELD(data_ov123_020e4654, u8 *, 0x58) = 1U;
                return;
            }
            func_ov123_020c36bc(0x13);
            M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020b7824, 0, 0x78);
            return;
        case 6:
            if (((u32) M2C_FIELD(data_ov123_020e4654, u8 *, 0x51) <= 4U) ||
                (data_ov123_020e4650 == M2C_FIELD(data_ov123_020e4654, u16 *, 0x40))) {
                if (M2C_FIELD(data_ov123_020e4654, u8 *, 0x58) != 0) {
                    return;
                }
                func_ov123_020c36bc(9);
                M2C_FIELD(data_ov123_020e4654, u8 *, 0x58) = 1U;
                return;
            }
            func_ov123_020c36bc(0x13);
            M2C_FIELD(data_ov123_020e4654, s32 *, 0x38) = func_ov123_020cb6ac(0, &func_ov123_020b7784, 0, 0x78);
            return;
        case 5:
        case 7:
            M2C_FIELD(data_ov123_020e4654, u8 *, 0x58) = 0U;
        /* fallthrough */
            return;
        default:
            return;
    }
}
