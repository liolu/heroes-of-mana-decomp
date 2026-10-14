#include "m2c.h"

M2C_UNK func_0200db20(s32);                         /* extern */
M2C_UNK func_0200e214(void *, M2C_UNK (*)(s32));    /* extern */
M2C_UNK func_0200e2cc(void *);                      /* extern */
extern M2C_UNK data_0203863c;

void func_0200dac4(void *arg0, s32 arg1) {
    if (M2C_FIELD(&data_0203863c, s32 *, 0x1C) != 0) {
        func_0200e214(arg0, func_0200db20);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        func_0200e2cc(arg0);
        return;
    }
    func_0200db20(arg1);
}
