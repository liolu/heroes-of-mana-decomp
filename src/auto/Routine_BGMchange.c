/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK BGM_Change();                      /* extern */
extern void *data_0203678c;
extern M2C_UNK data_ov003_020ac5d4;

void Routine_BGMchange(M2C_UNK arg0) {
    if (M2C_FIELD(data_0203678c, s32 *, 0xA0) != arg0) {
        BGM_Change();
    }
}
