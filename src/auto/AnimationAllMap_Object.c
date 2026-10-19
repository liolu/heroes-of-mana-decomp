/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK AnimationAllMap_ObjectSub(s32, s32);              /* extern */
extern s32 data_ov000_02051548;
extern M2C_UNK data_ov003_020a9874;

void AnimationAllMap_Object(M2C_UNK arg0) {
    AnimationAllMap_ObjectSub(data_ov000_02051548 + 0x2F0, arg0);
}
