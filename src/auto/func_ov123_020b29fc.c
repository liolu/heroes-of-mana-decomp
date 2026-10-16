#include "m2c.h"

M2C_UNK func_ov123_020c8840(s32);                   /* extern */
M2C_UNK func_ov123_020c9468(s32, void *);           /* extern */
extern void *data_ov123_020e45f0;

void func_ov123_020b29fc(void *arg0) {
    func_ov123_020c8840(M2C_FIELD(arg0, s32 *, 8));
    func_ov123_020c9468(M2C_FIELD(data_ov123_020e45f0, s32 *, 0x60), arg0);
}
