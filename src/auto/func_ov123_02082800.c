/* compiler: 1.2/sp3 */
#include "m2c.h"

s32 func_ov123_0207a27c(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_ov123_0207ac60(M2C_UNK);                   /* extern */
void *func_ov123_020996d4(M2C_UNK);                 /* extern */
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);           /* extern */
extern M2C_UNK func_ov123_02082890;

void *func_ov123_02082800(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r0;
    void *temp_r5;

    temp_r5 = *arg0;
    temp_r0 = func_ov123_020996d4(0x40);
    if (temp_r0 == NULL) {
        return NULL;
    }
    memset(temp_r0, 0, 0x40);
    M2C_FIELD(temp_r0, s32 *, 0)       = 0x64;
    M2C_FIELD(temp_r0, s32 *, 4)       = arg2;
    M2C_FIELD(temp_r0, s32 *, 8)       = -1;
    M2C_FIELD(temp_r0, s32 *, 0xC)     = arg1;
    M2C_FIELD(temp_r0, s32 *, 0x10)    = (s32) (func_ov123_0207ac60(0) + 0x12C);
    M2C_FIELD(temp_r0, void **, 0x3C)  = (void *) M2C_FIELD(temp_r5, void **, 0x434);
    M2C_FIELD(temp_r0, s32 *, 0x38)    = func_ov123_0207a27c(0x18, 0, &func_ov123_02082890);
    M2C_FIELD(temp_r5, void **, 0x434) = temp_r0;
    return temp_r0;
}
