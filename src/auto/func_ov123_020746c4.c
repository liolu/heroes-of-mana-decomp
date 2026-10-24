/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u8 p0[0x30];
    u8 f30;
    u8 f31;
    u8 p1[0x423];
    u8 f455;
} T;
typedef struct {
    u8 p0[0xc];
    T *f0c;
    u8 p1[8];
    u16 f18;
    u8 p2[2];
    s32 f1c;
} O;

extern s32 func_ov123_020748dc(O *);
extern void func_ov123_02074914(O *);
extern void func_ov123_02074bcc(void);
extern void func_ov123_02074d7c(O *);
extern s32 func_ov123_02075310(O *);
extern void func_ov123_02075f44(T *);
extern void func_ov123_0207614c(T *);
extern void func_ov123_020775f0(T *, s32, u16);

s32 func_ov123_020746c4(O *arg0) {
    s32 temp_r0;
    T *temp_r4;

    temp_r4 = arg0->f0c;
    func_ov123_02074bcc();
    while (1) {
        temp_r0 = func_ov123_02075310(arg0);
        if (temp_r0 == 9) {
            return 1;
        }
        if (temp_r0 == 4 || temp_r4->f31 != 0) {
            break;
        }
    }
    if (temp_r4->f31 != 0) {
        func_ov123_02075f44(temp_r4);
        if (func_ov123_020748dc(arg0) != 0) {
            return 1;
        }
        func_ov123_02074d7c(arg0);
    } else {
        func_ov123_02074914(arg0);
        func_ov123_0207614c(temp_r4);
        if (temp_r4->f30 != 0) {
            func_ov123_020775f0(temp_r4, arg0->f1c, arg0->f18);
        }
        func_ov123_02075f44(temp_r4);
        func_ov123_02074d7c(arg0);
        if (func_ov123_020748dc(arg0) != 0) {
            return 1;
        }
    }
    temp_r4->f455 = 8;
    return 0;
}
