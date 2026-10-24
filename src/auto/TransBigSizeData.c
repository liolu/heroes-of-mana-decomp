/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Src {
    u32 lo : 8;
    u32 mid : 23;
    u32 top : 1;
    u32 w4;
} Src;
typedef struct Dst {
    u8 pad[0x174];
    u32 b0 : 5;
    u32 busy : 1;
    u32 b6 : 1;
    u32 f7 : 1;
    u32 b8 : 8;
    u32 val : 16;
    u8 pad2[0x8];
    u32 w180;
    u32 pad3;
    u32 w188;
    u32 w18c;
} Dst;
void SendOnePack(void);
extern Dst data_ov003_020b5380;

s32 TransBigSizeData(Src *s) {
    if (data_ov003_020b5380.busy) {
        return 0;
    }
    data_ov003_020b5380.w180 = s->w4;
    data_ov003_020b5380.w188 = 0;
    data_ov003_020b5380.w18c = s->mid;
    data_ov003_020b5380.busy = 1;
    data_ov003_020b5380.val  = s->lo;
    data_ov003_020b5380.f7   = s->top;
    SendOnePack();
    return 1;
}
