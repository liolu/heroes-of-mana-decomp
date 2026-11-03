/* compiler: 1.2/sp3 */
/* near start: 6 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Buf12;

typedef struct {
    u8 pad0[0x60];
    u8 b60;
    s8 b61;
    u8 pad62[3];
    u8 b65;
    u8 b66;
} State;

extern u8 data_ov123_020d845c[];
extern u8 data_ov123_020d7d58[];
extern u8 data_ov123_020d7cf0[];
extern State *data_ov123_020e45c0;
extern u8 data_ov123_020d7d20[];
extern u8 data_ov123_020d7cf8[];
extern u8 data_ov123_020d7d28[];
extern u8 data_ov123_020d7cfc[];

s32 func_ov123_020ca82c(void *);
void func_ov123_020ca080(void *, void *, void *);
void func_ov123_020b13cc(s32);
void func_ov123_020c36bc(s32);

void func_ov123_020b1418(void) {
    s32 i;
    u8 *p;
    u8 *q;
    s32 j;
    u8 *r;
    s32 k;
    Buf12 sp;

    if (func_ov123_020ca82c(data_ov123_020d845c) == 0) {
        goto fail;
    }
    p = data_ov123_020d7d58;
    for (i = 0; i < 10; i++, p += 4) {
        func_ov123_020ca080(p, data_ov123_020d7cf0, &sp);
        if (func_ov123_020ca82c(&sp) != 0) {
            if (data_ov123_020e45c0->b61 != i) {
                goto fail;
            }
            func_ov123_020b13cc(i);
            goto end;
        }
    }
    q = data_ov123_020d7d20;
    for (j = 0; j < 2; j++, q += 4) {
        func_ov123_020ca080(q, data_ov123_020d7cf8, &sp);
        if (func_ov123_020ca82c(&sp) != 0) {
            if (data_ov123_020e45c0->b61 != j + 10) {
                goto fail;
            }
            func_ov123_020b13cc(j + 10);
            if (j != 0) {
                goto end;
            }
            data_ov123_020e45c0->b65++;
            if (data_ov123_020e45c0->b65 < 0x28) {
                return;
            }
            if (data_ov123_020e45c0->b66 == 0) {
                func_ov123_020c36bc(9);
                data_ov123_020e45c0->b61 = -1;
                return;
            }
            data_ov123_020e45c0->b60 = 0x10;
            data_ov123_020e45c0->b65 -= 7;
            return;
        }
    }
    r = data_ov123_020d7d28;
    for (k = 0; k < 2; k++, r += 4) {
        func_ov123_020ca080(r, data_ov123_020d7cfc, &sp);
        if (func_ov123_020ca82c(&sp) != 0) {
            if (data_ov123_020e45c0->b61 != k + 12) {
                goto fail;
            }
            func_ov123_020b13cc(k + 12);
            goto end;
        }
    }
fail:
    func_ov123_020b13cc(-1);
end:
    data_ov123_020e45c0->b65 = 0;
}
