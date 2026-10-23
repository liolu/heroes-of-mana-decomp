#include "m2c.h"
typedef struct Root {
    u8 pad[8];
    u8 *p8;
    u8 pad2[8];
    void *p14;
} Root;
extern u16 data_ov123_020e4670;
extern Root *data_ov123_020e4674;
extern u16 data_ov123_020d8058[];
s32 func_02008fb4(s32, s32);
void func_ov123_020c9970(void *, s32);
void func_ov123_020bc060(s32, s32);
void func_ov123_020c1ce8(void *, s32, s32, s32);
void func_ov123_020bbf0c(s32, s32);
void func_ov123_020c1d40(void);
void func_ov123_020c98a8(void *);
void func_ov123_020bb938(void);
void func_ov123_020bc1fc(void) {
    s32 base = func_02008fb4(data_ov123_020e4670, 0x1d);
    s32 i;
    s32 j;
    s32 p;
    func_ov123_020c9970(data_ov123_020e4674->p14, 0);
    p = base;
    for (i = 0; i < 5; i++, p++) {
        func_ov123_020bc060(p, i);
    }
    func_ov123_020c1ce8(data_ov123_020e4674->p8 + data_ov123_020d8058[base] * 2, 0, 0x1e, 0x13);
    for (j = 0; j < 5; j++, base++) {
        func_ov123_020bbf0c(base, j);
    }
    func_ov123_020c1d40();
    func_ov123_020c98a8(data_ov123_020e4674->p14);
    func_ov123_020bb938();
}
