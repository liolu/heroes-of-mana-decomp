/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteNoAnimeObjOnlyOneSub(s32, s32);              /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a99f0;

void DeleteNoAnimeObjOnlyOne(s32 arg0) {
    DeleteNoAnimeObjOnlyOneSub(data_ov000_02051548 + 0x79C, arg0);
}
