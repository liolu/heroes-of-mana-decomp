/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteModelTypeSub(s32, s32, s32);         /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a9e8c;

void DeleteModelType(void *arg0, void *arg1) {

    DeleteModelTypeSub(arg0, arg1, data_ov000_02051548 + 0x2D0);
}
