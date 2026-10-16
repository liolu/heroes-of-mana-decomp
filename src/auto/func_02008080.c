/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_02007aa8(void *, s32, void *, s32, u16);
void *InitMBlock(void *, u16);
typedef struct Obj {
    u8 pad[0x18];
    u32 s0;
    u32 s1;
    u32 pad2;
    void *h0;
    u16 pad3[2];
} Obj;

void *func_02008080(u8 *o, s32 b, u16 c) {
    u8 *p = o + 0x24;
    u32 st[2];
    void *h;
    func_02007aa8(o, 0x45585048, p + 0x14, b, c);
    *(u16 *) (p + 0x10) = 0;
    *(u16 *) (p + 0x12) = 0;
    *(u16 *) (p + 0x12) &= ~1;
    st[0]                 = *(u32 *) (o + 0x18);
    st[1]                 = *(u32 *) (o + 0x1c);
    h                     = InitMBlock(st, 0x4652);
    *(void **) (o + 0x24) = h;
    *(void **) (p + 4)    = h;
    *(u32 *) (p + 8)      = 0;
    *(u32 *) (p + 0xc)    = 0;
    return o;
}
