/* compiler: 2.0/sp1p5 -profile */
/* MATCH 2.0/sp1p5 -profile */
/* near start: 9 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"

typedef struct {
    u8 pad[0xc6];
    u16 shake;
    u8 pad2[8];
    u32 flags;
} A;
typedef struct {
    u8 pad[0xaf4];
    s32 frame;
} B;
extern A *data_ov000_02051548;
extern B *data_ov000_0205154c;

void ShakeControl(void) {
    s32 v;
    u16 s;
    s = data_ov000_02051548->shake;
    if (s != 0) {
        v = s - data_ov000_0205154c->frame;
        if (v <= 0) {
            data_ov000_02051548->shake = 0;
            data_ov000_02051548->flags &= ~0x200;
        } else {
            data_ov000_02051548->shake = v;
            data_ov000_02051548->flags |= 0x200;
        }
    }
}
