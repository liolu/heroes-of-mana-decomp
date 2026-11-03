/* compiler: 1.2/sp3 */
/* near start: 12 diffs with profile "1.2/sp3" */
/* near start: 40 diffs with profile "2.0/sp1p5" */
#include "m2c.h"

typedef struct Buf {
    char c[256];
} Buf;
extern Buf data_ov123_020d4f2c;
extern Buf data_ov123_020db408;
extern s32 data_ov123_020e0ea4;
extern char data_ov123_020e10ac[];
s32 func_02024c28(Buf *);
void func_02024d5c(Buf *, void *);
s32 func_02024f10(void *, Buf *);

char *func_ov123_02086d74(void *arg0, void *arg1) {
    Buf sp = data_ov123_020d4f2c;
    char *src;
    char *dst;
    char *res;
    s32 r;
    data_ov123_020e0ea4 ^= 1;
    func_02024d5c(&sp, arg1);
    func_02024d5c(&sp, &data_ov123_020db408);
    r = func_02024f10(arg0, &sp);
    if (r == 0) {
        return NULL;
    }
    src = (char *) r + func_02024c28(&sp);
    res = data_ov123_020e10ac + (data_ov123_020e0ea4 << 8);
    dst = res;
    while (*src != 0 && *src != 0x5C) {
        *dst++ = *src++;
    }
    *dst = 0;
    return res;
}
