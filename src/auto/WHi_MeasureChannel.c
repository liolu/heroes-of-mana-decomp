/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK WM_MeasureChannel(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_ov003_020ae900;

void WHi_MeasureChannel(void *arg0, void *arg1) {

    WM_MeasureChannel(arg0, 3, 0x11, arg1, 0x1E);
}
