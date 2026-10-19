#include "m2c.h"

s32 func_0200dd3c(s32 *);                           /* extern */
M2C_UNK func_ov123_020cd050();                      /* extern */
M2C_UNK func_ov123_020cd0e8(s32 *);                 /* extern */
extern s32 *data_ov123_020e47a0;

void func_ov123_020ccf28(void) {
    if (data_ov123_020e47a0 == NULL) {
        return;
    }
    *data_ov123_020e47a0 |= 0x100;
    *data_ov123_020e47a0 &= ~8;
    func_ov123_020cd0e8(data_ov123_020e47a0 + 584);
    if (func_0200dd3c(data_ov123_020e47a0 + 536) == 0) {
        return;
    }
    func_ov123_020cd050();
}
