/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK OS_FreeToHeap(M2C_UNK, M2C_UNK, void *);    /* extern */
extern M2C_UNK data_ov003_020a86fc;

void DeleteAllObjPat(void *arg0) {

    if (arg0 != NULL) {
        DeleteAllObjPat(M2C_FIELD(arg0, s32 *, 0x14));
        if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
            OS_FreeToHeap(0, -1, M2C_FIELD(arg0, s32 *, 0xC));
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0x10) != 0) {
            OS_FreeToHeap(0, -1, M2C_FIELD(arg0, s32 *, 0x10));
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
        }
        if ((M2C_FIELD(arg0, s32 *, 4) == 0) && (M2C_FIELD(arg0, s32 *, 8) != 0)) {
            OS_FreeToHeap(0, -1, M2C_FIELD(arg0, s32 *, 8));
            M2C_FIELD(arg0, s32 *, 8) = 0;
        }
        if (arg0 != NULL) {
            OS_FreeToHeap(0, -1, arg0);
        }
    }
}
