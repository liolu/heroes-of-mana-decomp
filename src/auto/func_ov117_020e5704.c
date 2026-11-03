#include "m2c.h"

typedef struct {
    s32 a;
    u16 b;
} Ent8;
typedef struct {
    u8 pad[0x494];
    Ent8 ent[1][8];
} Blk;
extern Blk data_ov117_020f23e0;

void func_ov117_020e5704(s32 arg0) {
    s32 i;
    for (i = 0; i < 8; i++) {
        data_ov117_020f23e0.ent[arg0][i].a = 0x200;
        data_ov117_020f23e0.ent[arg0][i].b = 0;
    }
}
