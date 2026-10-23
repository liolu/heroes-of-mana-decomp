/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    void (*f[5])(void *);
} Tbl;
typedef struct {
    u8 pad[4];
    u32 *reg;
    u8 pad2[0x15 - 8];
    u8 flag;
} O;
extern Tbl data_ov123_020d7fac;
extern O *data_ov123_020e465c;
s32 func_ov123_020c52f0(void);
void func_ov123_020b2410(void (*)(void));
void func_ov123_020b2398(s32 *, s32);
void func_ov123_020ba1e8(void);
void func_ov123_020b9c0c(void);
void func_ov123_020b99ac(void) {
    s32 idx;
    Tbl t = data_ov123_020d7fac;
    if (func_ov123_020c52f0() != 0) {
        return;
    }
    if (data_ov123_020e465c->flag == 0) {
        *data_ov123_020e465c->reg &= 0xc1fffcff;
        func_ov123_020b2410(func_ov123_020ba1e8);
    } else {
        func_ov123_020b2398(&idx, 0);
        t.f[idx]((u8 *) data_ov123_020e465c + 8);
        func_ov123_020b2410(func_ov123_020b9c0c);
    }
}
