/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObj(void *);                /* extern */
extern M2C_UNK data_ov109_020ea1b0;
extern void *data_ov109_020ea340;

void deleteTouchPosIconInShip(void) {
    if (M2C_FIELD(data_ov109_020ea340, s32 *, 0x48) != 0) {
        deleteComObj(data_ov109_020ea340 + 0x48);
        M2C_FIELD(data_ov109_020ea340, s32 *, 0x48) = 0;
    }
}
