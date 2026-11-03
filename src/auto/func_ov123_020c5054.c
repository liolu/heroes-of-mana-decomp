/* compiler: 1.2/sp3 */
/* near start: 10 diffs with profile "1.2/sp3 -O2,p" */
/* near start: 13 diffs with profile "1.2/sp3 -O2,p" */
#include "m2c.h"
typedef struct {
    u8 p[0x1b];
    s8 sel;
    u8 page;
} S;
void func_ov123_020c4cdc(s32);
void func_ov123_020ca080(void *, void *, void *);
s32 func_ov123_020ca7c0(void *);
s32 func_ov123_020ca8e0(s32);
extern u8 data_ov123_020d8380[];
extern u8 data_ov123_020d8398[];
extern s8 data_ov123_020d83a4[];
extern u8 data_ov123_020d83bc[];
extern u8 data_ov123_020d8418[];
extern S *data_ov123_020e46e4;

void func_ov123_020c5054(void) {
    s32 sp0[2];
    s32 i;
    u32 page;
    S *st;
    s32 j;
    s32 n;
    i    = 0;
    page = data_ov123_020e46e4->page;
    if ((s32) data_ov123_020d8380[page] > 0) {
    loop:
        func_ov123_020ca080(data_ov123_020d8418 + page * 8 + (data_ov123_020d8398 + page * 2)[i] * 4,
                            data_ov123_020d83bc + page * 4, sp0);
        if (func_ov123_020ca7c0(sp0) != 0) {
            data_ov123_020e46e4->sel = i;
        } else {
            i++;
            page = data_ov123_020e46e4->page;
            if (i < data_ov123_020d8380[page]) {
                goto loop;
            }
        }
    }
    if (func_ov123_020ca8e0(1) != 0) {
        data_ov123_020e46e4->sel = data_ov123_020d83a4[data_ov123_020e46e4->page * 2];
    }
    if (func_ov123_020ca8e0(2) != 0) {
        data_ov123_020e46e4->sel = (data_ov123_020d83a4 + 1)[data_ov123_020e46e4->page * 2];
    }
    st = data_ov123_020e46e4;
    j  = 0;
    n  = data_ov123_020d8380[st->page];
    if (n > 0) {
        do {
            if (j == st->sel) {
                func_ov123_020c4cdc(j);
                return;
            }
            j++;
        } while (j < data_ov123_020d8380[st->page]);
    }
    st->sel = -1;
}
