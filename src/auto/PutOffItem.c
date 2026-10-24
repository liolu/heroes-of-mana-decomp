/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 b : 4;
    u32 a : 28;
} F;
extern void func_02002c20(s32, s32);
extern void func_0200273c(void *, s32);
void PutOffItem(u8 *p, s32 idx) {
    u8 *q = p + 0xC;
    if (q[idx] != 0) {
        func_02002c20(q[idx], ((F *) (p + 4))->b);
    }
    q[idx] = 0;
    func_0200273c(p, 1);
}
