/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);    /* extern */
extern M2C_UNK data_ov003_020a870c;

void DeleteAllObjPal(void *arg0) {

    if (arg0 != NULL) {
        DeleteAllObjPal(M2C_FIELD(arg0, s32 *, 0xC));
        if (M2C_FIELD(arg0, s32 *, 4) != 0) {
            OS_FreeToHeap(0, -1, M2C_FIELD(arg0, s32 *, 4));
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
        if (arg0 != NULL) {
            OS_FreeToHeap(0, -1, arg0);
        }
    }
}
