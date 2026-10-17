/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207a7c4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_ov123_020996a0(void *);                /* extern */
void *func_ov123_020996d4(M2C_UNK);                 /* extern */
extern M2C_UNK func_ov123_0208e4e0;
extern M2C_UNK func_ov123_0208e4f4;
extern M2C_UNK func_ov123_0208e504;

void *func_ov123_0208e428(void *arg0, s32 arg1, s16 arg2) {
    void *temp_r0;

    temp_r0 = func_ov123_020996d4(0x24);
    if (temp_r0 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r0, s32 *, 0x18) =
        func_ov123_0207a7c4(8, 8, 4, &func_ov123_0208e4f4, &func_ov123_0208e4e0, &func_ov123_0208e504);
    if (M2C_FIELD(temp_r0, s32 *, 0x18) == 0) {
        func_ov123_020996a0(temp_r0);
        return NULL;
    }
    M2C_FIELD(temp_r0, u8 *, 0x14)  = 0;
    M2C_FIELD(temp_r0, u8 *, 0x15)  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_r0, s32 *, 0)    = arg1;
    M2C_FIELD(temp_r0, s16 *, 4)    = arg2;
    M2C_FIELD(temp_r0, s32 *, 8)    = 0;
    M2C_FIELD(temp_r0, s16 *, 0xC)  = 0;
    return temp_r0;
}
