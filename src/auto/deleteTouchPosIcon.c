/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK deleteComObj(void *);                /* extern */
extern void *data_ov000_02051548;
extern M2C_UNK data_ov003_020aa1f8;

void deleteTouchPosIcon(void) {
    if (M2C_FIELD(data_ov000_02051548, s32 *, 0x790) != 0) {
        deleteComObj(data_ov000_02051548 + 0x790);
        M2C_FIELD(data_ov000_02051548, s32 *, 0x790) = 0;
    }
}
