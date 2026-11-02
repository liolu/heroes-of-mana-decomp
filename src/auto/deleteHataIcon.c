/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObjByComno(void *, s32);
extern u8 *data_ov000_02051548;

void deleteHataIcon(void) {
    deleteComObjByComno(data_ov000_02051548 + 0x78C, 0xFFA2);
    *(s32 *) (data_ov000_02051548 + 0x260) = 0;
    if (((u32) (*(s32 *) (data_ov000_02051548 + 0x10) << 22) >> 28) == 1) {
        *(s32 *) (data_ov000_02051548 + 0x10) = *(s32 *) (data_ov000_02051548 + 0x10) & ~0x3C0;
    }
}
