/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_ov123_020ae090();                      /* extern */
M2C_UNK func_ov123_020b2410(M2C_UNK *);             /* extern */
M2C_UNK func_ov123_020b2f68();                      /* extern */
s32 func_ov123_020b2f94();                          /* extern */
M2C_UNK func_ov123_020c3658();                      /* extern */
M2C_UNK func_ov123_020c36bc(M2C_UNK);               /* extern */
M2C_UNK func_ov123_020c536c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern s8 data_ov123_020e467c;
extern M2C_UNK func_ov123_020bdb48;
extern M2C_UNK func_ov123_020bddb0;

void func_ov123_020bdb80(void) {
    s32 temp_r0;

    temp_r0 = func_ov123_020b2f94();
    switch (temp_r0) {                              /* irregular */
        case 3:
            data_ov123_020e467c = 1;
            func_ov123_020c3658();
            func_ov123_020b2f68();
            func_ov123_020b2410(&func_ov123_020bddb0);
            return;
        case 4:
            data_ov123_020e467c = 0;
            func_ov123_020c3658();
            func_ov123_020c36bc(9);
            func_ov123_020c536c(0xD, 1, 1, -1, 0);
            func_ov123_020ae090();
            func_ov123_020b2410(&func_ov123_020bdb48);
            return;
        case 5:
            data_ov123_020e467c = 0;
            func_ov123_020c3658();
            func_ov123_020c36bc(0x12);
            func_ov123_020c536c(0xE, 1, 1, -1, 0);
            func_ov123_020ae090();
            func_ov123_020b2410(&func_ov123_020bdb48);
            return;
    }
}
