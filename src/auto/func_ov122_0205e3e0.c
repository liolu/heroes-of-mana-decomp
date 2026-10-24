#include "m2c.h"

typedef struct {
    u8 pad[0xC];
    s32 flag;
} G;
typedef struct {
    u8 pad[0x10];
    u32 w;
} E;
typedef struct {
    u8 pad[0x2c];
    u8 *tbl;
} H;

extern s32 func_ov122_0205e3a4(s32);
extern H *data_0203673c;
extern G data_ov122_020664b0;

void func_ov122_0205e3e0(void) {
    s32 i = 0x32;
    E *e;
    s32 off = 0x3E8;
    for (; i <= 0x5C; i++, off += 0x14) {
        e = (E *) (data_0203673c->tbl + off);
        if (e->w >> 31) {
            if (func_ov122_0205e3a4(i) == 0) {
                data_ov122_020664b0.flag = 1;
                e->w                     = e->w & ~0x80000000;
            }
        } else if (func_ov122_0205e3a4(i) != 0) {
            data_ov122_020664b0.flag = 1;
            e->w                     = (e->w & ~0x80000000) | 0x80000000;
        }
    }
}
