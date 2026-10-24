#include "m2c.h"

extern void func_020037e8(s32);
extern s32 func_ov111_020e4c28(void);

typedef struct {
    u32 w0;
    u32 w1;
    u32 pad : 3;
    u32 a : 1;
    u32 b : 1;
    u32 rest : 27;
    u8 tail[0x34];
} Ent;
extern Ent data_ov111_020ec1bc[];

s32 func_ov111_020ea7f8(s32 arg0) {
    Ent *p = &data_ov111_020ec1bc[arg0];
    if (p->b == 0) {
        if ((u16) (((*(volatile u16 *) 0x04000130 | *(volatile u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF) & 1 ||
            func_ov111_020e4c28() != 0) {
            return 0;
        }
        p->a = 1;
        p->b = 1;
    }
    if ((u16) (((*(volatile u16 *) 0x04000130 | *(volatile u16 *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF) & 3 ||
        func_ov111_020e4c28() != 0) {
        func_020037e8(0x65);
        p->a = 0;
        p->b = 0;
        return 1;
    }
    p->a = 1;
    return 0;
}
