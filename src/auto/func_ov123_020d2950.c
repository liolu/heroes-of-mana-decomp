#include "m2c.h"

M2C_UNK OS_InitAlarm();                             /* extern */
M2C_UNK RTC_Init();                                 /* extern */
s32 func_ov123_020cc9a8(s32);                       /* extern */
M2C_UNK func_ov123_020cc9b4(M2C_UNK *, M2C_UNK *);  /* extern */
extern M2C_UNK func_ov123_020d2988;
extern M2C_UNK func_ov123_020d29bc;

s32 func_ov123_020d2950(s32 arg0) {
    s32 temp_r4;

    OS_InitAlarm();
    RTC_Init();
    temp_r4 = func_ov123_020cc9a8(arg0 + 0x20);
    func_ov123_020cc9b4(&func_ov123_020d2988, &func_ov123_020d29bc);
    return temp_r4;
}
