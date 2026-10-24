#include "m2c.h"

typedef struct {
    u8 pad[8];
    u32 f0 : 1;
    u32 rest : 31;
    u8 pad1[0x118 - 12];
} Ent;

typedef struct {
    u32 lo : 19;
    u32 f19 : 1;
    u32 hi : 12;
    s16 a;
    s16 b;
    u8 pad[0x14 - 8];
    s16 c;
    s16 pad2;
} Slot;

typedef struct {
    u8 pad0[0x14];
    u8 *tab;
    u8 pad1[0x20 - 0x18];
    Slot s[8];
    u8 pad2[0xf0 - 0xe0];
    s32 sel;
    u8 pad3[0x4f8 - 0xf4];
    u16 cnt;
    u16 flags;
} Blk;

s16 func_ov119_020edf78(s32);
void func_ov119_020ec238(s32, s32, s32, s32, s32);
extern Ent data_ov119_020f2028[];
extern Blk *data_ov119_020f2f68;

void func_ov119_020eec80(void) {
    if (data_ov119_020f2028[0].f0 || data_ov119_020f2028[1].f0) {
        data_ov119_020f2f68->flags = (data_ov119_020f2f68->flags & ~1) | 1;
        return;
    }
    data_ov119_020f2f68->s[data_ov119_020f2f68->sel].c   = func_ov119_020edf78(1);
    data_ov119_020f2f68->s[data_ov119_020f2f68->sel].f19 = data_ov119_020f2f68->tab[data_ov119_020f2f68->cnt + 3];
    func_ov119_020ec238(1, 1, func_ov119_020edf78(1), 0, data_ov119_020f2f68->tab[data_ov119_020f2f68->cnt + 3]);
    data_ov119_020f2f68->cnt = data_ov119_020f2f68->cnt + 4;
}
