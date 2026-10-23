/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 p0;
    u32 p4;
    u32 a : 23;
    u32 f : 4;
    u32 b : 5;
    u8 pad[0x20];
    u16 flag : 1;
    u16 rest : 15;
} O;
s32 CheckCanTargetting(O *);

s32 SearchUnitFunc(O *o, u32 side) {
    if (side == o->flag && o->f < 4 && CheckCanTargetting(o) != 0) {
        return 1;
    }
    return 0;
}
