/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern s32 *data_ov109_020ea340;

void deleteComObjByComnoRect(s32 *, s32, s32);

void DeleteCancelButtonInShip(void) {
    if (((u32) (*data_ov109_020ea340 << 21) >> 31) != 0) {
        *data_ov109_020ea340 = *data_ov109_020ea340 & ~0x400;
        deleteComObjByComnoRect((s32 *) ((u8 *) data_ov109_020ea340 + 0x3C), 0xFF69, 0xFF6B);
    }
}
