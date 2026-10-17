/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void *SearchComObjByComno(s32, s32);                /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020ab450;

void MoveOut_MissionStartAndComplete(void) {
    void *temp_r0;

    temp_r0 = SearchComObjByComno(data_ov000_02051548 + 0x78C, 0xFFA5);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s16 *, 0x72) = -0x100;
        M2C_FIELD(temp_r0, s32 *, 0xC)  = (s32) ((M2C_FIELD(temp_r0, s32 *, 0xC) & ~0x3E0) | 0x240);
    }
}
