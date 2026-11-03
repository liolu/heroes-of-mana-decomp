#include "m2c.h"

typedef struct {
    s32 a;
    u16 b;
} Ent8;
typedef struct {
    u8 pad[0x510];
    Ent8 ent[1][8];
} Blk;
extern Blk data_ov115_020e9160;

void func_ov115_020e3d78(s32 arg0) {
    s32 i;
    for (i = 0; i < 8; i++) {
        data_ov115_020e9160.ent[arg0][i].a = 0x200;
        data_ov115_020e9160.ent[arg0][i].b = 0;
    }
}
