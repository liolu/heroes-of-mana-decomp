/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObjByComno(s32, s32);              /* extern */
extern M2C_UNK data_ov109_020ea10c;
extern s32 data_ov109_020ea340;

void deleteTouchWaitIconInShip(void) {
    deleteComObjByComno(data_ov109_020ea340 + 0x3C, 0xFF03);
}
