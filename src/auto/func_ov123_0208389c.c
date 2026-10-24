/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    s32 a;
    s32 b;
} P;
typedef struct {
    s32 x;
    s32 y;
} Node;
typedef struct {
    u8 pad[0xC];
    s32 f0c;
    s32 f10;
} Arg;
s32 func_02024ea0(void *, void *, s32);
s32 func_02026c4c(void *);
s32 func_ov123_0207e5e0(void *, P, Node *, void *, s32);
void func_ov123_0207e68c(void *, s32, s32);
void func_ov123_02081e10(void *, void *);
void func_ov123_02086078(void *, void *);
void func_ov123_0208608c(void *, s32, void *);
s32 func_ov123_0208637c(void *, void *, void *, s32);
s32 func_ov123_02086484(void *, void *, s32);
Node *func_ov123_020996d4(s32);
extern u8 data_ov123_020dada0;
extern u8 data_ov123_020dada8;
extern u8 data_ov123_020dadd8;
extern u8 data_ov123_020dade4;

s32 func_ov123_0208389c(void *arg0, Arg *arg1, void *arg2) {
    u8 sp10[16];
    P p;
    s32 r6;
    Node *n;
    s32 r;

    if (func_ov123_02086484(arg0, arg2, 1) != 0) {
        return 4;
    }
    if (func_02024ea0(arg2, &data_ov123_020dada0, 5) != 0) {
        func_ov123_0208608c(arg0, 1, &data_ov123_020dada8);
        func_ov123_0207e68c(arg0, 3, 1);
        return 3;
    }
    if (func_ov123_0208637c(arg2, &data_ov123_020dadd8, sp10, 0x10) == 0) {
        func_ov123_0208608c(arg0, 1, &data_ov123_020dada8);
        func_ov123_0207e68c(arg0, 3, 1);
        return 3;
    }
    r6 = func_02026c4c(sp10);
    p  = *(P *) &arg1->f0c;
    if (p.a != 0) {
        n = func_ov123_020996d4(8);
        if (n == NULL) {
            func_ov123_02086078(arg0, &data_ov123_020dade4);
            return 1;
        }
        n->y = r6;
        n->x = 0;
        r    = func_ov123_0207e5e0(arg0, p, n, arg1, 0);
        if (r != 0) {
            return r;
        }
    }
    func_ov123_02081e10(arg0, arg1);
    return 0;
}
