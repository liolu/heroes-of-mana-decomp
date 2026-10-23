/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct P {
    void *f0;
    void *f1;
    u8 a;
    u8 b;
} P;
typedef struct D {
    u8 pad[4];
    u16 state;
    u16 pad2;
    u16 v0;
    u16 v1;
} D;
extern D *data_ov123_020e172c;
extern void func_ov123_02099778(void);
extern void func_ov123_020997c4(void);
extern void MI_CpuFill8(void *, s32, s32);
extern s32 func_ov123_02091824(P *);
extern void func_ov123_02099524(s32, s32);
void func_ov123_02099b20(void) {
    P p;
    if (data_ov123_020e172c != 0) {
        if (data_ov123_020e172c->state != 1) {
            return;
        }
        MI_CpuFill8(&p, 0, 12);
        p.a                        = data_ov123_020e172c->v0;
        p.b                        = data_ov123_020e172c->v1;
        p.f0                       = func_ov123_020997c4;
        p.f1                       = func_ov123_02099778;
        data_ov123_020e172c->state = 2;
        if (func_ov123_02091824(&p) != 0) {
            return;
        }
        func_ov123_02099524(9, -6);
        return;
    }
    func_ov123_02099524(9, -4);
}
