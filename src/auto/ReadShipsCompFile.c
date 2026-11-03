/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_ov109_020e9c0c;

typedef struct {
    s32 cnt;
    s32 size;
    s32 a;
    s32 b;
} ShipsParam;

void ReadShipsCompFile(s32 a, s32 b, s32 c) {
    ShipsParam L;

    L.cnt  = 5;
    L.size = 8;
    L.b    = b;
    L.a    = a;
    ReadFileAndUncomp(4, (s32) &L, c, 8);
}
