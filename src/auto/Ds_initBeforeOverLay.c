/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK func_02003948(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK ana_InitCommon();                      /* extern */
M2C_UNK new_LowLevelWork(s32);                   /* extern */
M2C_UNK SetTouchPadCali();                      /* extern */
M2C_UNK InitMessageWorkForDS();                      /* extern */
extern M2C_UNK data_ov000_020504d8;

void Ds_initBeforeOverLay(M2C_UNK arg0) {
    new_LowLevelWork(arg0);
    SetTouchPadCali();
    func_02003948(0, 0);
    ana_InitCommon();
    InitMessageWorkForDS();
}
