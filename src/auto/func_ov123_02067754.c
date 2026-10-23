/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct {
    s16 a;
    s16 b;
    s32 c;
    s32 d;
    s32 e;
} M;
extern u8 *data_ov123_020df180;
void func_ov123_02067754(s16 a, s16 b, s32 c, s32 d, s32 e) {
    M m;
    u8 *g = data_ov123_020df180;
    g += 0x2000;
    if (*(void **) (g + 0x27c) == 0) {
        return;
    }
    m.a = a;
    m.c = c;
    m.d = d;
    m.e = e;
    m.b = b;
    (*(void (**)(M *))(g + 0x27c))(&m);
}
