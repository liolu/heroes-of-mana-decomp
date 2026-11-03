#include "m2c.h"

typedef struct {
    s32 a;
    u16 b;
} Ent8;
typedef struct {
    u8 pad[0x414];
    Ent8 ent[16];
} Blk;
extern Blk data_ov117_020f23e0;
void func_ov117_020e573c(void) {
    s32 i;
    for (i = 0; i < 16; i++) {
        data_ov117_020f23e0.ent[i].a = 0x200;
        data_ov117_020f23e0.ent[i].b = 0;
    }
}
