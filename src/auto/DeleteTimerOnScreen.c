/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteNoAnimeObjOnlyOne();                      /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab5cc;

void DeleteTimerOnScreen(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x1FC) != 0) {
        DeleteNoAnimeObjOnlyOne();
        M2C_FIELD(data_ov000_02051548, s32 *, 0x1FC) = 0;
    }
}
