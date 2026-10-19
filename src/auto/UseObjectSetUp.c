/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ObjInitializeByFirstPara(s32);                   /* extern */
M2C_UNK SetETC_TexAndPal(M2C_UNK);               /* extern */
extern M2C_UNK data_ov003_020a87e8;

void UseObjectSetUp(M2C_UNK arg0) {
    ObjInitializeByFirstPara(arg0);
    SetETC_TexAndPal(1);
}
