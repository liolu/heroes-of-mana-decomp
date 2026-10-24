#include "m2c.h"
typedef struct {
    u32 b0 : 1;
    u32 b1 : 1;
    u32 b2 : 1;
    u32 b3 : 1;
    u32 b4 : 1;
    u32 b5 : 1;
    u32 b6 : 7;
    u32 b13 : 1;
    u32 rest : 18;
} Fl;
typedef struct {
    u32 w0;
    u32 w4;
    Fl f;
    u8 pad[0x34];
} Ent;
extern Ent data_ov111_020ec1bc[];
extern void func_ov111_020ea9b0(s32);
extern s32 func_ov111_020e4c28(void);

void func_ov111_020ea8e4(s32 i) {
    Ent *e = &data_ov111_020ec1bc[i];
    if (e->f.b0 == 0) {
        return;
    }
    e->f.b13 = 0;
    do {
        func_ov111_020ea9b0(i);
        if (e->f.b0 == 0) {
            return;
        }
        if (e->f.b1 != 0 || e->f.b2 != 0 || e->f.b3 != 0 || e->f.b5 != 0 || e->f.b13 != 0) {
            return;
        }
        if (func_ov111_020e4c28() != 0) {
            return;
        }
    } while (((u16) ((((*(volatile u16 *) 0x4000130) | (*(volatile u16 *) 0x27fffa8)) ^ 0x2fff) & 0x2fff) & 2) != 0);
}
