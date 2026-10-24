#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
    u8 pad0c[0x1C - 0x0C];
    u16 ang;
    u8 pad1e[0x28 - 0x1E];
    u8 *prog;
    u8 pad2c[0x50C - 0x2C];
    u16 pc;
} Efc;

s64 func_0202c0ec(s32);
s32 func_ov111_020e5d98(s32);
void func_ov111_020e9c50(s32, s64, s64, s64, s32);
void func_ov111_020e9cb8(void *);

extern Efc *data_ov111_020f1bd8;
extern s16 data_02030644[];
extern s32 data_ov111_020f1bdc[];
extern u8 data_ov111_020eda9c[];
extern u8 data_ov111_020ed298[];
extern u8 data_ov111_020edaa8[];
extern u8 data_ov111_020edaac[];

void func_ov111_020e72f0(void) {
    s32 r6;
    Efc *e;
    Efc *f;
    s32 idx;
    s32 off;

    r6 = func_ov111_020e5d98(2);
    e  = data_ov111_020f1bd8;
    switch (e->prog[e->pc + 1]) {
        case 2:
            func_ov111_020e9c50(r6, func_0202c0ec(e->x), func_0202c0ec(e->y), func_0202c0ec(e->z), 0);
            f   = data_ov111_020f1bd8;
            idx = ((s32) (u16) (f->ang + 0x8000) >> 4) * 2;
            func_ov111_020e9c50(r6, func_0202c0ec(f->x + ((*(s16 *) ((u8 *) data_02030644 + idx * 2) * 0x5000) >> 12)),
                                func_0202c0ec(f->y),
                                func_0202c0ec(f->z + ((*(s16 *) ((u8 *) data_02030644 + (idx + 1) * 2) * 0x5000) >> 12)), 1);
            data_ov111_020f1bdc[r6]              = 2;
            off                                  = r6 * 0x820;
            *(s64 *) (data_ov111_020eda9c + off) = 0;
            break;
        case 0:
            off                                  = r6 * 0x820;
            data_ov111_020f1bdc[r6]              = 0;
            *(s64 *) (data_ov111_020eda9c + off) = 0;
            break;
        case 1:
            off                                  = r6 * 0x820;
            *(s32 *) (data_ov111_020edaa8 + off) = data_ov111_020f1bdc[r6];
            func_ov111_020e9cb8(data_ov111_020ed298 + off);
            *(s32 *) (data_ov111_020edaac + off) = 0;
            break;
    }
    data_ov111_020f1bd8->pc += 4;
}
