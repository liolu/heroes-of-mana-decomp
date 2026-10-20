/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK DeleteMap_ObjectOneByIDandOptSub(s32, s32, s32);         /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a9830;

void DeleteMap_ObjectOneByIDandOpt(void *arg0, void *arg1) {

    DeleteMap_ObjectOneByIDandOptSub(data_ov000_02051548 + 0x2F0, arg0, arg1);
}
