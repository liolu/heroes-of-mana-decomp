/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 data_ov003_020aea9c[];
void ClearTensouOam(s32 idx) {
    *(u16 *) (data_ov003_020aea9c + idx * 0xF08) = 0;
}
