/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK ChangeComObjByFuncAndNo(s32, s32, M2C_UNK *);   /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020ab5a8;
extern M2C_UNK ChgRaceIconOffOne;

void ChgRaceIconOff(void) {
    ChangeComObjByFuncAndNo(data_ov000_02051548 + 0x78C, 0xFFA4, &ChgRaceIconOffOne);
}
