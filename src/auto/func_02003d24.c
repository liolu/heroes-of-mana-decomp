#include "m2c.h"

M2C_UNK func_02010854(s32, M2C_UNK);                /* extern */
extern s32 data_020367bc;

void func_02003d24(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02010854(arg0, 0);
    data_020367bc &= ~arg0;
}
