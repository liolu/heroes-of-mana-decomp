/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK SearchXYforObjSub(s32, s32, s32);         /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020a81ec;

void SearchXYforObj(void *arg0, void *arg1) {

    SearchXYforObjSub(M2C_FIELD(data_ov000_02051548, s32 *, 0x4AC), arg0, arg1);
}
