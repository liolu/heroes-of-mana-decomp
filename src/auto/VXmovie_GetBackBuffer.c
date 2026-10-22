/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct VXS {
    u8 pad[0x104];
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 1;
    u32 f3 : 1;
    u32 f4 : 1;
} VXS;
extern M2C_UNK data_ov110_020e3d2c;
extern VXS *data_ov110_020e3dc0;
void *G2S_GetBG2ScrPtr(void);
u32 VXmovie_GetBackBuffer(void) {
    u32 r;
    if (data_ov110_020e3dc0->f4 == 0) {
        if (data_ov110_020e3dc0->f1 != 0) {
            r = 0x06800000;
        } else {
            r = 0x06820000;
        }
    } else {
        if (data_ov110_020e3dc0->f1 == 0) {
            r = 0x06600000;
        } else {
            r = (u32) G2S_GetBG2ScrPtr();
        }
    }
    return r;
}
