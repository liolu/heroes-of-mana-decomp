/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void PutEventTitle(s32, s32);
extern u8 *data_ov000_02051548;
void Routine_PutEventTitle(s32 a, s32 b) {
    *(s32 *) (data_ov000_02051548 + 0x1D0) = 0;
    PutEventTitle(a, b);
}
