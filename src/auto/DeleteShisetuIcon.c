/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObjByComnoRect(s32, s32, M2C_UNK);     /* extern */
extern M2C_UNK data_ov109_020e9d60;
extern s32 data_ov109_020ea340;

void DeleteShisetuIcon(void) {
    deleteComObjByComnoRect(data_ov109_020ea340 + 0x3C, 0xFF09, 0xFF1A);
}
