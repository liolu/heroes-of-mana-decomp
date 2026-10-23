#include "m2c.h"
typedef struct {
    u8 pad[0x20];
    u8 *a;
    u8 pad2[4];
    u8 *b;
} S;
extern s32 func_ov111_020e2098(s32);
void func_ov111_020e22a4(S *self, s32 i, s32 j) {
    s32 r                       = func_ov111_020e2098(*(s16 *) (self->a + i * 16));
    *(volatile u32 *) 0x40004ac = *(u32 *) (self->b + j * 8 + 4) >> (4 - (r == 2));
}
