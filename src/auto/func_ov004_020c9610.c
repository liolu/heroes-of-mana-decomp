#include "m2c.h"
extern void func_0202f49c(void *);
extern void func_ov004_020c9154(void *);
extern void func_ov004_020c96d0(void *, void *);
extern u8 data_ov004_020cf6f0;
void *func_ov004_020c9610(void *arg0) {
    u8 *p = (u8 *) arg0;
    s32 i;
    *(u8 **) p = &data_ov004_020cf6f0;
    for (i = 0; i < *(s32 *) (p + 0x14); i++) {
        func_ov004_020c96d0(arg0, (*(void ***) (p + 0x18))[i]);
    }
    func_0202f49c(*(void **) (p + 0x18));
    func_ov004_020c9154(arg0);
    return arg0;
}
