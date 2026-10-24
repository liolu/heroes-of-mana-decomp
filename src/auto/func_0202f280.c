#include "m2c.h"
typedef struct {
    s32 a, b, c, d, e, f;
} S;
u8 *func_0202de8c(u8 *, s32 *);
u8 *func_0202df18(u8 *, s32 *);
void func_0202e008(s32, S *);
void func_0202e4b4(void *, S *, void *);
s32 func_0202ed64(void *, S *);
u8 *func_0202f048(void *, S *, s32 *);
void func_0202f224(void *, s32, s32);
void func_0202f8dc(void);
void func_0202fb38(void *, S *);
void func_0202fc28(void *, S *, s32);
void func_0202f280(u8 *arg0) {
    s32 spC;
    s32 sp8;
    volatile s32 sp4;
    s32 sp0;
    S s;
    s32 temp_r0;
    u8 *temp_r4;

    func_0202e008(*(s32 *) (arg0 + 0x10), &s);
    if (s.b == 0) {
        func_0202f8dc();
    }
    func_0202fb38(arg0, &s);
    if (*(s32 *) arg0 != 0) {
        *(s32 *) (arg0 + 0xC) = 0;
    } else {
        temp_r0               = func_0202ed64(arg0, &s);
        *(s32 *) (arg0 + 0xC) = temp_r0;
        if (temp_r0 == 0) {
            func_0202f8dc();
        }
    }
    temp_r4 = func_0202f048(arg0, &s, &sp0);
    sp4     = temp_r4[1] | (temp_r4[2] << 8) | (temp_r4[3] << 0x10) | (temp_r4[4] << 0x18);
    func_0202de8c(func_0202df18(temp_r4 + 5, &sp8), &spC);
    func_0202e4b4(arg0, &s, temp_r4);
    func_0202f224(arg0, spC, sp0);
    func_0202fc28(arg0, &s, s.a + sp8);
}
