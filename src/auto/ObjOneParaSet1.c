/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SetGetObjTrsDataOne(M2C_UNK);               /* extern */
M2C_UNK ObjOneParaSet(s32);                   /* extern */
extern M2C_UNK data_ov003_020aa814;

void ObjOneParaSet1(M2C_UNK arg0) {
    ObjOneParaSet(arg0);
    SetGetObjTrsDataOne(3);
}
