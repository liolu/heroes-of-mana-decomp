/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ModelWorkReleaseOneSub(s32, s32);              /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a9edc;

void ModelWorkReleaseOne(s32 arg0) {
    ModelWorkReleaseOneSub(data_ov000_02051548 + 0x2CC, arg0);
}
