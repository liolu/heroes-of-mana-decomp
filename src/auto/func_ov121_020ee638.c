#include "m2c.h"
typedef struct {
    s32 a;
    u16 b;
} Ent8;
typedef struct {
    u8 pad[0x588];
    Ent8 ent[4][8];
} Blk;
extern Blk data_ov121_020f6608;
void func_ov121_020ee638(s32 arg0) {
    s32 i;
    for (i = 0; i < 8; i++) {
        data_ov121_020f6608.ent[arg0][i].a = 0x200;
        data_ov121_020f6608.ent[arg0][i].b = 0;
    }
}
