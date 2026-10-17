#include "m2c.h"

M2C_UNK func_ov120_020ec2ac();                      /* extern */

void func_ov120_020ec290(void *arg0, s32 arg1) {
    if (arg1 <= 0x28) {
        return;
    }
    if (arg1 >= 0xC8) {
        return;
    }
    func_ov120_020ec2ac();
}
