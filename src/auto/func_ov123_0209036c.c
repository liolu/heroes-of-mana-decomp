/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 pad[8];
    s32 h;
} A;
typedef struct {
    s32 a;
    s32 kind;
} B;
extern u8 data_ov123_020dbde8;
extern u8 data_ov123_020dbdc4;
void func_02020d04(void *, void *, s32, s32);
B *func_ov123_0207a194(s32, s32);
s32 func_ov123_0207a204(s32);
s32 func_ov123_02090ed8(u8 *, s32);
s32 func_ov123_0209036c(A *a, u8 *p, s32 n) {
    s32 cnt;
    s32 i;
    s32 r;
    cnt = func_ov123_0207a204(a->h);
    for (i = 0; i < cnt; i++) {
        switch (func_ov123_0207a194(a->h, i)->kind) {
            case 1:
                p += 1;
                n -= 1;
                break;
            case 2:
                p += 2;
                n -= 2;
                break;
            case 0:
                if (n < 1) {
                    return 0;
                }
                r = *p++;
                n--;
                if (r == 0xff) {
                    r = func_ov123_02090ed8(p, n);
                    if (r == -1) {
                        return 0;
                    }
                    p += r;
                    n -= r;
                }
                break;
            default:
                func_02020d04(&data_ov123_020dbde8, &data_ov123_020dbdc4, 0, 0x317);
                return 0;
        }
        if (n < 0) {
            return 0;
        }
    }
    return 1;
}
