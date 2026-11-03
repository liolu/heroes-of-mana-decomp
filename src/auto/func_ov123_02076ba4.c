/* compiler: 1.2/sp2p3 */
/* near start: 3 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

typedef struct {
    s32 pad0;
    s32 f4;
    s32 f8;
    s32 fc;
    s32 f10;
} B;

extern u8 *(*data_ov123_020df1e4)(s32);
extern void (*data_ov123_020df210)(u8 *);

void func_ov123_02078938(u8 *, s32, s32, s32);
s32 func_ov123_020774d4(void);
void func_ov123_02078e64(u8 *, u8 *, u8 *, s32, u8 *);
void func_ov123_0207749c(s32);
void func_ov123_020788f0(u8 *, u8 *, s32, s32);
s32 func_020213f0(u8 *, u8 *, s32);

s32 func_ov123_02076ba4(u8 *a, B *b) {
    u8 *p6;
    u8 *p5;
    u8 *p10;
    u8 *p9;
    s32 n;
    s32 saved;
    s32 res;
    s32 len;
    s32 i;
    s32 j;

    if (*(s32 *) (a + 0x5A4) == 0 || *(s32 *) (a + 0x5A8) == 0 || b->f10 == 0 || b->fc == 0 || b->f8 == 0 || b->f4 == 0) {
        return 2;
    }
    n  = (b->f4 * 2) / 2;
    p6 = data_ov123_020df1e4(n * 8);
    if (p6 == 0) {
        return 2;
    }
    p5  = p6 + n * 2;
    p10 = p5 + n * 2;
    p9  = p10 + n * 2;
    func_ov123_02078938(p5, *(s32 *) (a + 0x5A4), *(s32 *) (a + 0x5A8), n);
    func_ov123_02078938(p10, b->f10, b->fc, n);
    func_ov123_02078938(p9, b->f8, b->f4, n);
    saved = func_ov123_020774d4();
    func_ov123_02078e64(p6, p5, p10, n, p9);
    func_ov123_0207749c(saved);
    func_ov123_020788f0(p5, p6, b->f4, n);
    res = 0;
    if (p6[n * 2] != 0 || p5[1] != 1) {
        res = 2;
    } else {
        len = b->f4;
        i   = 2;
        if (i < len) {
            do {
                if (p5[i] != 0xFF) {
                    break;
                }
                i++;
            } while (i < len);
        }
        j = i + 1;
        if (j >= len || p5[i] != 0 || p5[j] != 0x30 ||
            func_020213f0(a + 0x468, p5 + len - *(s32 *) (a + 0x47C), *(s32 *) (a + 0x47C)) != 0) {
            res = 2;
        }
    }
    data_ov123_020df210(p6);
    return res;
}
