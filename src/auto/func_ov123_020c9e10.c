#include "m2c.h"

M2C_UNK func_ov123_020c9468(s32, void *);           /* extern */
M2C_UNK func_ov123_020cb008(s32);                   /* extern */
extern void *data_ov123_020e4724;

void func_ov123_020c9e10(void *arg0) {
    func_ov123_020cb008(M2C_FIELD(arg0, s32 *, 0x30));
    func_ov123_020c9468(M2C_FIELD(data_ov123_020e4724, s32 *, 0x788), arg0);
}
