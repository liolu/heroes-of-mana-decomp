/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct B {
    u32 lo : 8;
    u32 mid : 8;
    u32 hi : 9;
    u32 rest : 7;
} B;
typedef struct O {
    u8 pad[0x90];
    B *bits;
    u8 pad2[0x11d - 0x94];
    u8 idx;
} O;
void func_ov123_020af5e8(u8, s32, s32);
void func_ov123_020cb618(s32, void (*)(void));
void func_ov123_020b0314(void);
extern O *data_ov123_020e45bc;
extern u8 data_ov123_020d7a74[];
void func_ov123_020b03c4(s32 arg) {
    volatile s32 v[2];
    s32 lim;
    s32 t;
    v[0] = (*(volatile u32 *) data_ov123_020e45bc->bits & 0x1ff0000) >> 16;
    lim  = *(u16 *) (data_ov123_020d7a74 + 0x62);
    t    = *(volatile u32 *) data_ov123_020e45bc->bits & 0xff;
    v[1] = t;
    t    = t - 12;
    v[1] = t;
    if (t > lim) {
        func_ov123_020af5e8(data_ov123_020e45bc->idx, 2, t);
        return;
    }
    func_ov123_020af5e8(data_ov123_020e45bc->idx, 2, lim);
    func_ov123_020af5e8(data_ov123_020e45bc->idx, 3, 0xc0);
    func_ov123_020cb618(arg, func_ov123_020b0314);
}
