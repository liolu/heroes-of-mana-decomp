/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    void *p;
    u16 sz;
} Buf;

typedef struct {
    u8 pad0[0x2260];
    s32 state;
    u8 pad1[0x2280 - 0x2264];
    u16 f80;
    u8 pad2[0x2284 - 0x2282];
    s32 cnt;
    Buf buf;
} G;

extern G *data_ov123_020df180;
s32 func_0200fa98(void);
void func_0200faac(s32);
void func_ov123_020678c4(s32, s32, s32);
void func_ov123_020676ac(s32);
void DC_InvalidateRange(void *, u32);
s32 func_020197dc(void *, Buf *);
void func_ov123_02066edc(void);

s32 func_ov123_0206834c(s32 a, s32 b, s32 c) {
    s32 irq;

    irq = func_0200fa98();
    if (data_ov123_020df180 == NULL) {
        func_0200faac(irq);
        return 1;
    }
    switch (data_ov123_020df180->state) {
        case 5:
            func_ov123_020678c4(a, b, c);
            func_0200faac(irq);
            return 2;
        case 6:
            func_ov123_020678c4(a, b, c);
            func_0200faac(irq);
            return 0;
        default:
            func_0200faac(irq);
            return 1;
        case 3:
            func_ov123_020678c4(a, b, c);
            DC_InvalidateRange(data_ov123_020df180->buf.p, data_ov123_020df180->buf.sz);
            data_ov123_020df180->cnt++;
            switch (func_020197dc(func_ov123_02066edc, &data_ov123_020df180->buf)) {
                case 2:
                    func_ov123_020676ac(5);
                    data_ov123_020df180->f80 = 3;
                    break;
                case 8:
                    func_0200faac(irq);
                    return 4;
                case 3:
                default:
                    func_ov123_020676ac(11);
                    func_0200faac(irq);
                    return 7;
            }
            func_0200faac(irq);
            return 3;
    }
}
