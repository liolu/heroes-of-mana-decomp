#include "m2c.h"
typedef struct {
    s32 a;
    s16 b;
    s16 p;
} E;
typedef struct {
    u8 pad[0x68];
    E a[6][12];
    E b[7][12];
    E c[1][12];
} D;
extern D data_ov122_020630e0;
void func_ov122_02056f04(s32 arg0) {
    s32 i;
    for (i = 0; i < 12; i++) {
        data_ov122_020630e0.a[arg0][i].a = 0x200;
        data_ov122_020630e0.a[arg0][i].b = 0;
        data_ov122_020630e0.b[arg0][i].a = 0x200;
        data_ov122_020630e0.b[arg0][i].b = 0;
        data_ov122_020630e0.c[arg0][i].a = 0x200;
        data_ov122_020630e0.c[arg0][i].b = 0;
    }
}
