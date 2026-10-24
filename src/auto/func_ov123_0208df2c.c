/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct B {
    u8 pad[0x14];
    u8 f14;
    u8 pad2[7];
    s32 f1c;
} B;
typedef struct A A;
struct A {
    u8 pad[0x44];
    void (*fn)(A *, s32, B *, s32);
    s32 arg;
};
extern u8 data_ov123_020dbd34[];
s32 func_02024f10(s32, void *);
void func_ov123_0208e76c(B *, s32);
s32 func_ov123_0207b3f4(void);
void func_ov123_0208e308(void *, B *);

void func_ov123_0208df2c(A *a, B *b, s32 c) {
    s32 on;
    if (func_02024f10(c, data_ov123_020dbd34) != 0) {
        on = 1;
    } else {
        on = 0;
    }
    func_ov123_0208e76c(b, c);
    if (on == 0) {
        return;
    }
    if (b->f14 & 4) {
        b->f14 |= 0x41;
    } else {
        b->f14 |= 0x42;
    }
    b->f14 &= 0xF3;
    b->f1c = func_ov123_0207b3f4() - b->f1c;
    func_ov123_0208e308((u8 *) a + 8, b);
    a->fn(a, 0, b, a->arg);
}
