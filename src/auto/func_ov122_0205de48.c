#include "m2c.h"

M2C_UNK func_ov122_0205dafc(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov122_0205db94();                          /* extern */
s32 func_ov123_020d332c();                          /* extern */
extern void *data_0203673c;

s32 func_ov122_0205de48(void) {
    void *temp_r1;

    if (func_ov123_020d332c() == 0) {
        do {
            func_ov122_0205dafc(8, 3);
        } while (func_ov122_0205db94() == 0);
        return 0;
    }
    temp_r1                           = M2C_FIELD(data_0203673c, void **, 0x2C);
    M2C_FIELD(temp_r1, s32 *, 0x108C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x108C) & ~0x80000000);
    return 1;
}
