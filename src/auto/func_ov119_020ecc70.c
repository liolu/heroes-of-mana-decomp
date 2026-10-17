#include "m2c.h"
typedef struct {
    u32 a : 6;
    u32 b6 : 1;
    u32 b7 : 1;
    u32 b8 : 1;
    u32 c : 5;
    u32 b14 : 1;
    u32 d : 17;
} Fl;
typedef struct {
    u8 pad[8];
    Fl f;
    u8 rest[268];
} Ent;
extern Ent data_ov119_020f2028[];
extern s32 data_ov119_020f2278[];
M2C_UNK MIi_CpuCopy16(s32, s32, M2C_UNK);
s32 func_0200a7b8();
s32 func_0200a7ec();
s32 func_ov119_020ecc70(s32 arg0) {
    Ent *e = &data_ov119_020f2028[arg0];
    if (e->f.b8 != 0) {
        return 1;
    }
    if (e->f.b6 == 0) {
        if (arg0 == 0) {
            MIi_CpuCopy16(data_ov119_020f2278[e->f.b7], func_0200a7b8(), 0x400);
        } else {
            MIi_CpuCopy16(data_ov119_020f2278[e->f.b7], func_0200a7ec(), 0x400);
        }
    }
    e->f.b8 = 1;
    return 1;
}
