#include "m2c.h"

extern M2C_UNK data_02036278;

void func_02020c7c(void *arg0);

void *func_0202b9b8(u8 *param_1) {
    s32 n;
    u32 off;
    u8 *arr;

    *(u32 *) param_1 = (u32) &data_02036278;
    n                = *(s32 *) (param_1 + 0x8);
    if (n != 0) {
        off = n * 8;
        do {
            arr = *(u8 **) (param_1 + 0x4);
            off = off - 8;
            n   = n - 1;
            ((void (*)(s32, void *, u32))(*(u32 *) (arr + off)))(0, param_1, *(u32 *) (arr + off + 4));
        } while (n != 0);
    }
    func_02020c7c(*(void **) (param_1 + 0x18));
    func_02020c7c(*(void **) (param_1 + 0x10));
    func_02020c7c(*(void **) (param_1 + 0x4));
    return param_1;
}
