#include "m2c.h"
struct VC0 {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual M2C_UNK f3();
};

extern "C" M2C_UNK func_0202bbcc(void *);                      /* extern */

extern "C" void func_0202bb9c(void *arg0) {
    s32 temp_r1;

    temp_r1                   = M2C_FIELD(arg0, s32 *, 4) - 1;
    M2C_FIELD(arg0, s32 *, 4) = temp_r1;
    if (temp_r1 != 0) {
        return;
    }
    ((VC0 *) (arg0))->f3();
    func_0202bbcc(arg0);
}
