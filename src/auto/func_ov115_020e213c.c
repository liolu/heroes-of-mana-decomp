#include "m2c.h"
void func_ov115_020e57e4(void);
void func_ov115_020e5870(void);
extern u32 data_ov115_020e8d20[];
s32 func_ov115_020e213c(void) {

    data_ov115_020e8d20[0x327] &= ~0x40000;
    data_ov115_020e8d20[0x327] &= ~0x20000;
    data_ov115_020e8d20[0x327] |= 0x200000;
    func_ov115_020e5870();
    func_ov115_020e57e4();
    return 1;
}
