/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct A {
    u8 pad[0x50];
    u8 *buf;
    u8 pad2[0x12];
    u16 w66;
    u8 pad3[0x20];
    s32 w88;
    s32 w8c;
} A;
typedef struct B {
    s32 off;
    s32 w4;
    s32 w8;
    s32 wc;
} B;
s32 func_ov123_02088338(A *, u8 *, s32);
void func_ov123_0208a580(u8 *, s32, u16);
s32 func_ov123_02088924(A *a, B *b) {
    func_ov123_0208a580(a->buf, b->off + 5, a->w66);
    if (func_ov123_02088338(a, a->buf + b->off, b->w4) == 0) {
        return 0;
    }
    b->wc = a->w88;
    if (*(u8 *) ((s32) a->buf + (b->off + 2)) == 2) {
        a->w8c = a->w88;
    }
    return 1;
}
