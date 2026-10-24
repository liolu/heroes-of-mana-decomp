/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct A {
    u8 f;
    u8 pad[3];
} A;
typedef struct Q {
    u8 low : 7;
    u8 hi : 1;
} Q;

u8 func_ov123_020929dc(u8 *base) {
    s32 i;
    u8 n;
    Q *q;
    u8 *rec;
    n = 0;
    i = 0;
    if (i < base[0xd12]) {
        rec = base;
        q   = (Q *) (base + 0x447);
        do {
            if (((A *) (base + 0x444))[i].f == 0 && (*(u16 *) (rec + 0x4A6) - 1) != q->low) {
                q->hi = 0;
                n++;
            } else {
                q->hi = 1;
            }
            i++;
            q += 4;
            rec += 0xC0;
        } while (i < base[0xd12]);
    }
    return n;
}
