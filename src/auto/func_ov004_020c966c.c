#include "m2c.h"

void func_ov004_020c96d0(u8 *, s32);
void func_0202f49c(s32);
void func_ov004_020c9154(u8 *);
void func_0202f45c(u8 *);
extern u8 data_ov004_020cf6f0;

u8 *func_ov004_020c966c(u8 *self) {
    s32 i;
    *(u8 **) self = &data_ov004_020cf6f0;
    for (i = 0; i < *(s32 *) (self + 0x14); i++) {
        func_ov004_020c96d0(self, (*(s32 **) (self + 0x18))[i]);
    }
    func_0202f49c(*(s32 *) (self + 0x18));
    func_ov004_020c9154(self);
    func_0202f45c(self);
    return self;
}
