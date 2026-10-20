/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

M2C_UNK OS_JoinThread(M2C_UNK *);                   /* extern */
M2C_UNK OS_WakeupThreadDirect(M2C_UNK *);           /* extern */
s32 func_0200dd3c(M2C_UNK *);                       /* extern */
M2C_UNK func_0200e0a4(s32);                         /* extern */
M2C_UNK func_ov123_020a9b84();                      /* extern */
s32 func_ov123_020acf00();                          /* extern */
extern M2C_UNK (*data_ov123_020e303c)();
extern s32 data_ov123_020e3040;
extern s32 data_ov123_020e3060;
extern s32 data_ov123_020e3068;
extern s32 data_ov123_020e3094;
extern s32 data_ov123_020e30a4;
extern M2C_UNK data_ov123_020e3168;

s32 func_ov123_020a9bf8(void) {
    s32 temp_r0;
    s32 temp_r6;

    if (data_ov123_020e3094 != 0) {
        temp_r6 = data_ov123_020e3068;
        data_ov123_020e3040 = 1;
        while ((data_ov123_020e3068 >= 1) && (data_ov123_020e3068 <= 5)) {
            func_0200e0a4(0x64);
        }
        func_0200e0a4(0x1F4);
        if (func_0200dd3c(&data_ov123_020e3168) == 0) {
            do {
                OS_WakeupThreadDirect(&data_ov123_020e3168);
                OS_JoinThread(&data_ov123_020e3168);
            } while (func_0200dd3c(&data_ov123_020e3168) == 0);
        }
        if (data_ov123_020e3060 != 0) {
            data_ov123_020e303c(data_ov123_020e3060);
            data_ov123_020e3060 = 0;
        }
        data_ov123_020e3094 = 0;
        if (temp_r6 != data_ov123_020e3068) {
            func_ov123_020a9b84();
        }
    }
    if (data_ov123_020e30a4 > 0) {
        temp_r0 = func_ov123_020acf00();
        data_ov123_020e30a4 = 0;
        return temp_r0;
    }
    return -0xA;
}
