#include "m2c.h"
typedef struct {
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 x : 1;
} C;
s16 func_ov004_020b9e00(u8 *p) {
    C c;
    c.r = p[0] >> 3;
    c.g = p[1] >> 3;
    c.b = p[2] >> 3;
    return *(s16 *) &c;
}
