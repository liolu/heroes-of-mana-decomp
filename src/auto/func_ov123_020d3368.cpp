#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual s32 f5();
};
struct VC1 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4();
};
struct VC2 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual s32 f4();
};

extern "C" M2C_UNK func_ov123_020d1d80(s32, M2C_UNK);          /* extern */
extern "C" M2C_UNK func_ov123_020d1e0c(s32);                   /* extern */
extern "C" void *data_ov123_020e47e8;

extern "C" s32 func_ov123_020d3368(void) {
    func_ov123_020d1e0c(M2C_FIELD(data_ov123_020e47e8, s32 *, 0x7AC4));
    if (((VC0 *) ((u8 *) data_ov123_020e47e8 + 0xED4))->f5() != 0) {
        func_ov123_020d1d80(M2C_FIELD(data_ov123_020e47e8, s32 *, 0x7AC4), 8);
    }
    if (((VC1 *) ((u8 *) data_ov123_020e47e8 + 0x18))->f4() != 0) {
        func_ov123_020d1d80(M2C_FIELD(data_ov123_020e47e8, s32 *, 0x7AC4), 5);
    }
    if (((VC2 *) ((u8 *) data_ov123_020e47e8 + 4))->f4() != 0) {
        func_ov123_020d1d80(M2C_FIELD(data_ov123_020e47e8, s32 *, 0x7AC4), 2);
    }
    return 1;
}
