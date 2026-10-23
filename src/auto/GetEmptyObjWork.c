/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 f : 1;
    u8 pad[0x10c];
} Obj;
extern Obj data_ov003_020b0cf0[];
s32 GetEmptyObjWork(void) {
    s32 i;
    Obj *p = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, p++) {
        if (!p->f) {
            return i;
        }
    }
    return -1;
}
