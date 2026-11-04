/* compiler: 2.0/sp1p5 -profile */
/* near start: 2 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK *, M2C_UNK, M2C_UNK);   /* extern */
s32 WH_StateInInitialize();                          /* extern */
extern M2C_UNK data_ov003_020ae954;
typedef enum {
    WB_FALSE = 0,
    WB_TRUE  = 1
} WB;
extern M2C_UNK data_ov003_020b6440;
extern M2C_UNK data_ov003_020b7820;

s32 WH_Initialize(void) {
    WB var_r0;
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0x30) = 0;
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0x28) = 0;
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0x3C) = 0;
    M2C_FIELD(&data_ov003_020b6440, s16 *, 0xA)  = 0;
    M2C_FIELD(&data_ov003_020b6440, s16 *, 6)    = 1;
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0x20) = 0;
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0xA0) = 0;
    M2C_FIELD(&data_ov003_020b6440, s16 *, 0xA4) = 0;
    MI_CpuFill8(&data_ov003_020b7820, 0, 0x18);
    M2C_FIELD(&data_ov003_020b6440, s32 *, 0x34) = 0;
    if (WH_StateInInitialize() == 0) {
        var_r0 = WB_FALSE;
    } else {
        var_r0 = WB_TRUE;
    }
    return var_r0;
}
