#include "m2c.h"

M2C_UNK func_0200e0a4(M2C_UNK);                     /* extern */
s32 func_ov123_02091618();                          /* extern */
extern void *data_ov123_020e172c;

void func_ov123_02099910(void) {
    if (data_ov123_020e172c == NULL) {
        return;
    }
    if (M2C_FIELD(data_ov123_020e172c, u16 *, 4) == 1) {
        data_ov123_020e172c = NULL;
        return;
    }
    if (func_ov123_02091618() == 0) {
        do {
            func_0200e0a4(0xA);
        } while (func_ov123_02091618() == 0);
    }
    data_ov123_020e172c = NULL;
}
