#include "m2c.h"

extern void func_020037e8(s32);
extern s32 func_ov119_020eba5c(void);

typedef struct {
    u32 w0;
    u32 w1;
    u32 pad : 3;
    u32 a : 1;
    u32 b : 1;
    u32 rest : 27;
    u8 tail[0x118 - 12];
} Ent;
extern Ent data_ov119_020f2028[];

s32 func_ov119_020ece18(s32 arg0) {
    Ent *p = &data_ov119_020f2028[arg0];
    if (p->b == 0) {
        if ((u16) (((*(volatile u16 *) 0x04000130 | *(volatile u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF) & 1 ||
            func_ov119_020eba5c() != 0) {
            return 0;
        }
        p->a = 1;
        p->b = 1;
    }
    if ((u16) (((*(volatile u16 *) 0x04000130 | *(volatile u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF) & 3 ||
        func_ov119_020eba5c() != 0) {
        func_020037e8(0x65);
        p->a = 0;
        p->b = 0;
        return 1;
    }
    p->a = 1;
    return 0;
}
