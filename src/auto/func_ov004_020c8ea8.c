#include "m2c.h"

extern u8 data_ov004_020cf628[];
extern u8 data_ov004_020cf630[];
void func_ov004_020c8f50(s32, s32);
void func_ov004_020c8c60(void *);
s32 func_ov004_020c8c98(void *, s32);
s32 func_ov004_020c8cc4(void *, void *);
s32 func_ov004_020c8d98(void *, void *);
s32 func_ov004_020c8f78(s32, s32);
void func_ov004_020c8c80(void *);

s32 func_ov004_020c8ea8(s32 a, s32 b) {
    u8 sp[8];
    func_ov004_020c8f50(a, 1);
    func_ov004_020c8c60(sp);
    if (func_ov004_020c8c98(sp, b) != 1 || func_ov004_020c8cc4(sp, data_ov004_020cf628) != 1) {
        func_ov004_020c8c80(sp);
        return 0;
    }
    if (func_ov004_020c8f78(a, func_ov004_020c8d98(sp, data_ov004_020cf630)) == 1) {
        func_ov004_020c8c80(sp);
        return 1;
    }
    func_ov004_020c8c80(sp);
    return 0;
}
