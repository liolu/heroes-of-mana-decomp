/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK trsCommandNeedInit();                      /* extern */
M2C_UNK ReleaseTrsCommand();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa740;

void InitTrsCommand(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x268) != 0) {
        ReleaseTrsCommand();
    }
    M2C_FIELD(data_ov000_02051548, s32 *, 0x268) = func_0200ed38(0, -1, 0x100);
    M2C_FIELD(data_ov000_02051548, s32 *, 0x26C) = 1;
    trsCommandNeedInit();
}
