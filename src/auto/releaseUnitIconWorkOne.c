/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void deleteComObjBySt(u8 *, s32);
extern u8 *data_ov000_02051548;
void releaseUnitIconWorkOne(u8 *p) {
    s32 v = *(s32 *) (p + 0x7C);
    if (v != 0) {
        deleteComObjBySt(data_ov000_02051548 + 0x38C + 0x400, v);
    }
    *(s32 *) (p + 0x7C) = 0;
}
