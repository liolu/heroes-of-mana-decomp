/* compiler: 1.2/sp3 -profile */
#include "m2c.h"
typedef struct {
    u32 a : 1;
    u32 b : 31;
} A;
typedef struct {
    u32 c : 29;
    u32 b : 1;
    u32 a : 2;
} B;
typedef struct {
    A f0;
    u8 pad4[4];
    B f8;
    u8 pad[0xAA - 0xC];
    u8 fAA;
    u8 pad2[0x110 - 0xAB];
} Anchor;
extern Anchor data_ov003_020b0cf0[0x42];
void TrsAnchorCondition(void) {
    Anchor *p;
    s32 i;
    p = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, p++) {
        if (p->f0.a != 0) {
            if (p->f8.b != 0) {
                p->fAA |= 0x80;
            }
        }
    }
}
