#include "m2c.h"

void func_ov004_020c9c78(u8 *, s32);
void func_0202f49c(s32);
void func_ov004_020c988c(u8 *);
void func_ov004_020c921c(u8 *);
void func_0202f45c(u8 *);
extern u8 data_ov004_020cf74c;

u8 *func_ov004_020c9c0c(u8 *self) {
    s32 i;
    *(u8 **) self = &data_ov004_020cf74c;
    for (i = 0; i < *(s32 *) (self + 0x34); i++) {
        func_ov004_020c9c78(self, (*(s32 **) (self + 0x38))[i]);
    }
    func_0202f49c(*(s32 *) (self + 0x38));
    func_ov004_020c988c(self + 0x28);
    func_ov004_020c921c(self + 4);
    func_0202f45c(self);
    return self;
}
