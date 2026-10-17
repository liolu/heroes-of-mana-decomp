/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

extern M2C_UNK data_ov003_020a9e28;

void CopyVecFx32(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r1;

    temp_r0                      = arg0;
    temp_r1                      = arg1;
    M2C_FIELD(temp_r1, s32 *, 0) = (s32) M2C_FIELD(temp_r0, s32 *, 0);
    M2C_FIELD(temp_r1, s32 *, 4) = (s32) M2C_FIELD(temp_r0, s32 *, 4);
    M2C_FIELD(temp_r1, s32 *, 8) = (s32) M2C_FIELD(temp_r0, s32 *, 8);
}
