/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_020885cc(s32);                       /* extern */
s32 func_ov123_0208b074(s32, M2C_UNK, M2C_UNK);     /* extern */
s32 func_ov123_0208b8b0(s32, s32, u8, M2C_UNK *, M2C_UNK *, void *); /* extern */
M2C_UNK func_ov123_0208ec64(s32, s32, u16, s32);    /* extern */
void *func_ov123_0209d368();                        /* extern */
s32 func_ov123_0209de24();                          /* extern */
extern M2C_UNK func_ov123_0209d408;
extern M2C_UNK func_ov123_0209d7e4;

s32 func_ov123_020a1d00(void *arg0) {
    s32 temp_r0;
    s32 var_r6;
    void *temp_r4;

    if (M2C_FIELD(arg0, u8 *, 0) == 0) {
        temp_r4 = func_ov123_0209d368();
        func_ov123_0208ec64(M2C_FIELD(temp_r4, s32 *, 0xE4), func_ov123_0208b074(M2C_FIELD(arg0, s32 *, 4), 0, 0),
                            M2C_FIELD(arg0, u16 *, 2), M2C_FIELD(arg0, s32 *, 8));
        if (func_ov123_0209de24() != 0) {
            return 2;
        }
    }
    var_r6 = 0;
loop_4:
    temp_r0 = func_ov123_0208b8b0(func_ov123_020885cc(*M2C_FIELD(func_ov123_0209d368(), s32 **, 4)), M2C_FIELD(arg0, s32 *, 8),
                                  M2C_FIELD(arg0, u8 *, 0), &func_ov123_0209d7e4, &func_ov123_0209d408, arg0);
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (temp_r0 != 3) {
        return temp_r0;
    }
    var_r6 += 1;
    if (var_r6 >= 5) {
        return temp_r0;
    }
    goto loop_4;
}
