#include "m2c.h"

M2C_UNK func_020137d0();                            /* extern */
extern s32 data_0203a5b8;

void func_02013168(s32 arg0) {
    if (data_0203a5b8 != 0) {
        return;
    }
    data_0203a5b8 = 1;
    func_020137d0(arg0);
}
