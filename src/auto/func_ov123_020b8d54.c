#include "m2c.h"
typedef struct Pair {
    void (*f[2])(void *);
} Pair;
typedef struct Root {
    u8 pad[4];
    u32 *p4;
    u8 pad2[0x22];
    u8 flag;
} Root;
extern Pair data_ov123_020d7f5c;
extern Root *data_ov123_020e4658;
s32 func_ov123_020c52f0(void);
void func_ov123_020b2410(void (*)());
void func_ov123_020b2398(s32 *, s32);
void func_ov123_020b9440();
void func_ov123_020b8ff8();
void func_ov123_020b8d54(void) {
    s32 idx;
    Pair tbl = data_ov123_020d7f5c;
    if (func_ov123_020c52f0() != 0) {
        return;
    }
    if (data_ov123_020e4658->flag == 0) {
        *data_ov123_020e4658->p4 &= 0xc1fffcff;
        func_ov123_020b2410(func_ov123_020b9440);
    } else {
        func_ov123_020b2398(&idx, 0);
        tbl.f[idx]((u8 *) data_ov123_020e4658 + 8);
        func_ov123_020b2410(func_ov123_020b8ff8);
    }
}
