/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SearchModelTypeStSub(s32, s32, s32);         /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a9e60;

void SearchModelTypeSt(void *arg0, void *arg1) {

    SearchModelTypeStSub(arg0, arg1, M2C_FIELD(data_ov000_02051548, s32 *, 0x2D0));
}
