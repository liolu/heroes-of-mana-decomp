/* compiler: 1.2/sp3 -profile */
#include "m2c.h"

typedef struct {
    u32 w0;
    u32 w1;
    u32 pad : 23;
    u32 flag : 1;
} Sub;
typedef struct {
    u32 flag : 1;
    u8 pad[0xd4];
    u16 unitno;
    u8 pad2[0xe];
    Sub *sub;
    u8 pad3[0x24];
} Aoo;
extern Aoo data_ov003_020b0cf0[];

Aoo *GetAooByUnitno(u16 unitno) {
    s32 i;
    Aoo *a = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, a++) {
        if (a->flag && a->unitno == unitno && a->sub != 0 && !a->sub->flag) {
            return a;
        }
    }
    return 0;
}
