#include "m2c.h"
typedef struct {
    s32 a;
    s16 b;
    s16 p;
} E;
typedef struct {
    u8 pad[0xC18];
    E a[3][6];
    E b[3][6];
} D;
extern D data_ov112_020eca1c;
void func_ov112_020e7c9c(s32 arg0) {
    s32 i;
    for (i = 0; i < 6; i++) {
        data_ov112_020eca1c.a[arg0][i].a = 0x200;
        data_ov112_020eca1c.a[arg0][i].b = 0;
        data_ov112_020eca1c.b[arg0][i].a = 0x200;
        data_ov112_020eca1c.b[arg0][i].b = 0;
    }
}
