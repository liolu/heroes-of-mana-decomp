#include "m2c.h"
typedef struct {
    s32 a;
    u16 b;
} Ent8;
extern Ent8 data_ov117_020f0f30[][8];
void func_ov117_020e5770(s32 arg0) {
    s32 i;
    for (i = 0; i < 8; i++) {
        data_ov117_020f0f30[arg0][i].a = 0x200;
        data_ov117_020f0f30[arg0][i].b = 0;
    }
}
