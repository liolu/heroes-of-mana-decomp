/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct R {
    u16 x;
    u16 y;
    u16 w;
    u16 h;
} R;
extern void func_ov123_020ca7c0(R *);
void func_ov123_020ca6a0(R *a) {
    R r;
    r.x = a->x;
    r.y = a->y;
    r.w = a->x + a->w;
    r.h = a->y + a->h;
    func_ov123_020ca7c0(&r);
}
