/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK TrsDeathToChild();                      /* extern */
M2C_UNK ObjToDeath(s32, s32);              /* extern */
extern M2C_UNK data_ov003_020a858c;

void Obj2DeadStatus(void *arg0, void *arg1, s32 arg4) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = arg0;
    temp_r4 = arg1;
    TrsDeathToChild();
    ObjToDeath(temp_r5, temp_r4);
}
