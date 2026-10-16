/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_SetAlarm(void *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK func_0200f8b4(void *);                      /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
extern void *data_ov123_020df180;
extern M2C_UNK func_ov123_02067614;

void func_ov123_02067630(void) {
    s32 temp_r4;

    temp_r4 = func_0200fa98();
    func_0200f8b4(data_ov123_020df180 + 0x22CC);
    if (M2C_FIELD(data_ov123_020df180, s32 *, 0x2260) == 9) {
        OS_SetAlarm(data_ov123_020df180 + 0x22CC, 0x022F5341, 0, &func_ov123_02067614, 0);
    }
    func_0200faac(temp_r4);
}
