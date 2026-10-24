/* compiler: 1.2/sp3 */
/* near start: 6 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    u8 *data;
    s32 cap;
    s32 len;
} Buf;

void func_02020d04(u8 *, u8 *, s32, s32);
void func_02021318(u8 *, u8 *, s32);
void func_ov123_02086078(s32, u8 *);
u8 *func_ov123_020996b8(u8 *, s32);
extern u8 data_ov123_020da0cc;
extern u8 data_ov123_020da0e4;
extern u8 data_ov123_020da168;
extern u8 data_ov123_020da254;
extern u8 data_ov123_020da264;

s32 func_ov123_0207e158(s32 a, Buf *b, u8 *src, s32 n) {
    s32 len;
    s32 cap;
    u8 *d;
    if (src == NULL) {
        func_02020d04(&data_ov123_020da254, &data_ov123_020da0e4, 0, 0x51);
    }
    if (n < 0) {
        func_02020d04(&data_ov123_020da264, &data_ov123_020da0e4, 0, 0x52);
    }
    if (b == NULL) {
        func_02020d04(&data_ov123_020da0cc, &data_ov123_020da0e4, 0, 0x53);
    }
    if (src == NULL) {
        return 0;
    }
    len = b->len;
    cap = b->cap;
    d   = b->data;
    if (cap - len < n) {
        cap += (n < 0x800) ? 0x800 : n;
        d = func_ov123_020996b8(d, cap + 1);
        if (d == NULL) {
            func_ov123_02086078(a, &data_ov123_020da168);
            return 1;
        }
    }
    func_02021318(d + len, src, n);
    *(u8 *) ((s32) d + (len + n)) = 0;
    b->len += n;
    b->cap  = cap;
    b->data = d;
    return 0;
}
