/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 GetPosNoInShisetuIconList(s32);                       /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020acee8;

s32 Routine_GetPosNoInShisetuIconList(void *arg0) {
    s32 var_r0;

    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x13) >> 0x1F) == 0) {
        var_r0 = -1;
    } else {
        var_r0 = GetPosNoInShisetuIconList(arg0);
    }
    return var_r0;
}
