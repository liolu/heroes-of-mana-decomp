#include "m2c.h"

M2C_UNK GX_SetBankForBG(M2C_UNK);                   /* extern */
M2C_UNK func_ov121_020e9be4();                      /* extern */
M2C_UNK func_ov121_020ea4f4();                      /* extern */
extern s32 data_ov000_02051540;

void func_ov121_020e9aa0(void) {
    data_ov000_02051540 = 0;
    func_ov121_020ea4f4();
    func_ov121_020e9be4();
    GX_SetBankForBG(1);
}
