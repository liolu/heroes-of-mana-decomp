/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObjByComno(void *, s32);           /* extern */
M2C_UNK deleteTouchWaitIconInShip(u32);                   /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ab124;

void deleteTouchWaitIcon(void) {
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x13) >> 0x1F;
    if (temp_r0 != 0) {
        deleteTouchWaitIconInShip(temp_r0);
    } else {
        deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFBC);
    }
}
