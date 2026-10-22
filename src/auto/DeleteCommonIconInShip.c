/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
M2C_UNK DeleteNoAnimeObjOnlyOne();
M2C_UNK deleteComObjByComnoRect(s32 *, s32, M2C_UNK);
extern void *data_ov000_02051548;
extern u8 *data_ov109_020ea340;
void DeleteCommonIconInShip(void) {
    s32 *p = (s32 *) data_ov109_020ea340;
    if (((u32) (*p << 0x1C) >> 0x1F) != 0) {
        *p &= ~8;
        deleteComObjByComnoRect((s32 *) (data_ov109_020ea340 + 0x3C), 0xFF6C, 0xFF71);
        if (M2C_FIELD(data_ov000_02051548, s32 *, 0x1F8) != 0) {
            DeleteNoAnimeObjOnlyOne();
            M2C_FIELD(data_ov000_02051548, s32 *, 0x1F8) = 0;
        }
        if (M2C_FIELD(data_ov000_02051548, s32 *, 0x1F4) != 0) {
            DeleteNoAnimeObjOnlyOne();
            M2C_FIELD(data_ov000_02051548, s32 *, 0x1F4) = 0;
        }
    }
}
