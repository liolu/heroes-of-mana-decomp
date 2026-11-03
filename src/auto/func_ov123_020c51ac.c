/* compiler: 1.2/sp3 */
#include "m2c.h"

extern void func_ov123_020c8c80(s32, s32, s32 *, s32 *);
extern void func_ov123_020c4e28(s32);
extern s32 func_ov123_020cb6ac(s32, void *, s32, s32);
extern void func_ov123_020cb5f8(s32, s32);
extern u8 *data_ov123_020e46e4;
extern u8 data_ov123_020d83e8[];
extern void func_ov123_020c4fdc(void);
extern void func_ov123_020c5054(void);

void func_ov123_020c51ac(s32 arg0) {
    struct {
        s32 a;
        s32 b;
    } L;
    u8 *p;
    u16 t;
    s32 v;

    func_ov123_020c8c80(*(s32 *) data_ov123_020e46e4, 0, &L.a, &L.b);
    v   = L.b - 0xC;
    L.b = v;
    p   = data_ov123_020e46e4;
    t   = *(u16 *) (data_ov123_020d83e8 + 2 + p[0x1C] * 4);
    if (v > (s32) t) {
        func_ov123_020c4e28(v);
        return;
    }
    func_ov123_020c4e28(t);
    if (*(u8 *) (data_ov123_020e46e4 + 0x1C) == 5) {
        *(s32 *) (data_ov123_020e46e4 + 0x14) = func_ov123_020cb6ac(0, (void *) func_ov123_020c4fdc, 0, 0x78);
    } else {
        *(s32 *) (data_ov123_020e46e4 + 0x14) = func_ov123_020cb6ac(0, (void *) func_ov123_020c5054, 0, 0x78);
    }
    func_ov123_020cb5f8(1, arg0);
}
