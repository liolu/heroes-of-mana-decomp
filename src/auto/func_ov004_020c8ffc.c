#include "m2c.h"

typedef struct Ob {
    s32 a;
    s32 b;
} Ob;
void func_ov004_020c90a0(void *);
void func_ov004_020c8c60(Ob *);
s32 func_ov004_020c8c98(Ob *, void *);
s32 func_ov004_020c8cc4(Ob *, void *);
s32 func_ov004_020c8d98(Ob *, void *);
s32 func_ov004_020c90b0(void *, s32);
void func_ov004_020c8c80(Ob *);
extern u8 data_ov004_020cf654;
extern u8 data_ov004_020cf65c;

s32 func_ov004_020c8ffc(void *a, void *b) {
    Ob o;
    func_ov004_020c90a0(a);
    func_ov004_020c8c60(&o);
    if (func_ov004_020c8c98(&o, b) != 1 || func_ov004_020c8cc4(&o, &data_ov004_020cf654) != 1) {
        func_ov004_020c8c80(&o);
        return 0;
    }
    if (func_ov004_020c90b0(a, func_ov004_020c8d98(&o, &data_ov004_020cf65c)) == 1) {
        func_ov004_020c8c80(&o);
        return 1;
    }
    func_ov004_020c8c80(&o);
    return 0;
}
