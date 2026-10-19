/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteYesNoIcon();                      /* extern */
extern void *data_ov000_02051550;
extern M2C_UNK data_ov003_020ab370;

void DeleteWin_HookTakeOff(void) {
    M2C_FIELD(data_ov000_02051550, s32 *, 0x54)  = (s32) (M2C_FIELD(data_ov000_02051550, s32 *, 0x54) & ~3);
    M2C_FIELD(data_ov000_02051550, s32 *, 0x124) = (s32) (M2C_FIELD(data_ov000_02051550, s32 *, 0x124) & ~3);
    DeleteYesNoIcon();
}
