#include "m2c.h"
typedef struct {
    s32 v;
} W;
extern u8 func_ov004_020bd504(s32);
extern void func_ov004_020bc948(void *, void *);
extern void func_ov004_020b9490(void *, void *, W);
void func_ov004_020bd460(void *arg0, u8 *arg1) {
    s32 tmp;
    W w;
    if (func_ov004_020bd504(*(s32 *) (arg1 + 0x1C)) != 0) {
        w.v = 0x394BB8;
        func_ov004_020bc948(&tmp, arg1);
        func_ov004_020b9490(arg0, &tmp, w);
        return;
    }
    func_ov004_020bc948(arg0, arg1);
}
