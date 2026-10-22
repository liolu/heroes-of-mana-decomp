/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
s32 SetTrsDataFirst(s32 *);
void SetBigTrans(s32, s32, s32, s32);

extern s32 data_ov003_020aea88[];
void SetGameConditionForChild(void) {
    s32 sp0;
    s32 v                  = SetTrsDataFirst(&sp0);
    data_ov003_020aea88[1] = v;
    SetBigTrans(v, sp0, 1, 1);
}
