/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 SetTrsDataFirstForParent(s32 *);                     /* extern */
M2C_UNK SetBigTrans(s32, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_ov003_020a63c8;
extern s32 data_ov003_020aea88[];

void SetGameConditionForParent(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0                = SetTrsDataFirstForParent(&sp0);
    data_ov003_020aea88[2] = temp_r0;
    SetBigTrans(temp_r0, sp0, 2, 1);
}
