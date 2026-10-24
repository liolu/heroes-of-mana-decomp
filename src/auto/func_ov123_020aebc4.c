/* compiler: 1.2/sp3 -O2,p */
/* near start: 1 diffs with profile "1.2/sp3 -O2,p" */
#include "m2c.h"

extern u8 *data_ov123_020e45bc;
void func_ov123_020c8f8c(s32);
void func_ov123_020c9e10(s32);
void func_ov123_020ca49c(void *);
void func_ov123_020cae80(s32);
void func_ov123_020cb5f8(s32, s32);

void func_ov123_020aebc4(s32 arg0) {
    s32 i;
    s32 j;
    s32 k;
    s32 m;
    s32 n;
    func_ov123_020cb5f8(0, arg0);
    i = 0;
    do {
        j = 0;
        do {
            func_ov123_020c9e10(*(s32 *) ((i << 4) + (s32) data_ov123_020e45bc + j * 4));
            if (i == 0) {
                func_ov123_020c8f8c(((s32 *) (data_ov123_020e45bc + 0x104))[j]);
            }
            j += 1;
        } while (j < 4);
        i += 1;
    } while (i < 3);
    k = 0;
    do {
        func_ov123_020c8f8c(((s32 *) (data_ov123_020e45bc + 0xFC))[k]);
        k += 1;
    } while (k < 2);
    m = 0;
    do {
        func_ov123_020cae80(((s32 *) (data_ov123_020e45bc + 0xEC))[m]);
        m += 1;
    } while (m < 4);
    n = 0;
    do {
        func_ov123_020cae80(((s32 *) (data_ov123_020e45bc + 0x30))[n]);
        n += 1;
    } while (n < 0x2F);
    func_ov123_020ca49c(&data_ov123_020e45bc);
}
