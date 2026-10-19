/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObj(void *);                /* extern */
M2C_UNK deleteComObjByComno(s32, s32);              /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020ac8e0;
extern s32 data_ov109_020ea340;

void DeleteTutorialIcon(void) {
    if (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x20) << 0x13) >> 0x1F) != 0) {
        deleteComObjByComno(data_ov109_020ea340 + 0x40, 0xFF02);
    } else {
        deleteComObj(data_ov000_02051548 + 0x798);
    }
}
