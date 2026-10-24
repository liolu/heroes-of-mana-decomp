/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct P {
    u8 pad[0x50];
    u32 act : 1;
    u32 r50 : 31;
    u32 pad54;
    u32 pad58 : 22;
    u32 life : 10;
    u8 pad5c[0xC0 - 0x5C];
} P;
typedef struct Q {
    u32 a[22];
    u32 pad58 : 22;
    u32 life : 10;
} Q;
extern P data_ov003_020b552c[];
void DisconnectOneParent(volatile P *);

void ScanParentLifeDec(void) {
    s32 i;
    volatile P *p = data_ov003_020b552c;
    for (i = 0; i < 20; i++, p++) {
        if (p->act) {
            if (p->life != 0) {
                ((Q *) p)->life--;
                if (((Q *) p)->life == 0) {
                    DisconnectOneParent(p);
                }
            }
        }
    }
}
