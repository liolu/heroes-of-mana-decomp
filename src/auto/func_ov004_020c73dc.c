#include "m2c.h"

extern void *func_0202f3f8(s32);
extern s32 func_ov004_020c1f9c(void *);
extern void func_ov004_020c28fc(void *, s32, void *, s32, s32);
extern void *func_ov004_020c7660(s32);
extern u8 data_ov004_020ce7e4;
extern u8 data_ov004_020cf000;

void *func_ov004_020c73dc(u8 *arg0, s32 arg1, void *arg2, s32 arg3, s32 arg4) {
    void *r;
    func_ov004_020c28fc(arg0, arg1, arg2, arg3, arg4);
    *(u8 **) arg0          = &data_ov004_020cf000;
    *(s32 *) (arg0 + 0x14) = arg1;
    *(s32 *) (arg0 + 0x18) = func_ov004_020c1f9c(arg2);
    if (func_ov004_020c7660(arg1) != 0) {
        void *o = func_ov004_020c7660(arg1);
        r       = (*(void *(**) (void *) )(*(u8 **) o + 0x18))(o);
    } else {
        r = func_0202f3f8(4);
        if (r != 0) {
            *(u8 **) r = &data_ov004_020ce7e4;
        }
    }
    *(void **) (arg0 + 0x1c) = r;
    *(s32 *) (arg0 + 0x20)   = 1;
    return arg0;
}
