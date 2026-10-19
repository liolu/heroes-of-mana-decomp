/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 touchIconEffectInShipCom(s32);                       /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov109_020ea21c;

void touchIconEffectInShip(M2C_UNK arg0) {
    if (touchIconEffectInShipCom(arg0) == 1) {
        M2C_FIELD(data_ov000_02051548, s32 *, 0x20) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) | 0x4000);
    }
}
