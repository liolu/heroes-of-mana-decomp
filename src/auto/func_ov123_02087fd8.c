#include "m2c.h"
void func_ov123_020996a0(void *p);
void func_ov123_0207a20c(void *p);
void func_ov123_02087fd8(u8 *self) {
    if (*(void **) (self + 0x38) != 0) {
        func_ov123_020996a0(*(void **) (self + 0x38));
    }
    if (*(void **) (self + 0x44) != 0) {
        func_ov123_020996a0(*(void **) (self + 0x44));
    }
    if (*(void **) (self + 0x50) != 0) {
        func_ov123_020996a0(*(void **) (self + 0x50));
    }
    if (*(void **) (self + 0x5c) != 0) {
        func_ov123_0207a20c(*(void **) (self + 0x5c));
    }
    if (*(void **) (self + 0x60) != 0) {
        func_ov123_0207a20c(*(void **) (self + 0x60));
    }
    if (*(void **) (self + 0x98) != 0) {
        func_ov123_0207a20c(*(void **) (self + 0x98));
    }
    if (*(void **) (self + 0x9c) != 0) {
        func_ov123_0207a20c(*(void **) (self + 0x9c));
    }
    func_ov123_020996a0(self);
}
