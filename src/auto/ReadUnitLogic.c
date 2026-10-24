/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct F {
    u32 pad : 26;
    u32 a : 1;
    u32 b : 1;
} F;

typedef struct G {
    u8 pad[0x20];
    F f;
} G;

extern G *data_ov000_02051548;
extern void func_02000f78(s32);
extern void func_02000f44(s32);

void ReadUnitLogic(u32 v) {
    if (data_ov000_02051548->f.a) {
        u32 cur = data_ov000_02051548->f.b;
        if (cur == v) {
            return;
        }
        if (cur != 0) {
            func_02000f78(5);
        } else {
            func_02000f78(4);
        }
        data_ov000_02051548->f.a = 0;
    }
    if (v != 0) {
        func_02000f44(5);
    } else {
        func_02000f44(4);
    }
    data_ov000_02051548->f.b = v;
    data_ov000_02051548->f.a = 1;
}
