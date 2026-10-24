/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

void OS_FreeToHeap(s32, s32, void *);
extern M2C_UNK data_ov003_020a83f4;

void ReleaseTexGetSub(u8 *p) {
    if (p != 0) {
        u8 *c = *(u8 **) (p + 8);
        if (c != 0) {
            ReleaseTexGetSub(c);
        }
        if (p != 0) {
            OS_FreeToHeap(0, -1, p);
        }
    }
}
