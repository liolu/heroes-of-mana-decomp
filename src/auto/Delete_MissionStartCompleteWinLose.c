/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ResetColorRoll(M2C_UNK);               /* extern */
M2C_UNK deleteComObjByComno(void *, s32);           /* extern */
M2C_UNK ReleaseObjectGraCommon();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab42c;

void Delete_MissionStartCompleteWinLose(void) {
    M2C_FIELD(data_ov000_02051548, s32 *, 0x20) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) & ~0x20000);
    ResetColorRoll(1);
    deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFA5);
    ReleaseObjectGraCommon();
}
