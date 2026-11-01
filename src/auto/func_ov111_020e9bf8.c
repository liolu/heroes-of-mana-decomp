/* compiler: 2.0/sp1p5 -O1 */
/* near start: 5 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
extern s32 func_ov111_020e9fcc(s32 a, s32 b, s32 c);
extern s32 func_0202c014(s32 a);
void func_ov111_020e9bf8(s32 a, s32 b, s32 c, s32 *d) {
    s32 x;
    d[0] = func_0202c014(func_ov111_020e9fcc(a, b, c));
    x    = func_0202c014(func_ov111_020e9fcc(a, b, c + 0x2ac));
    c    = c + 0x158;
    d[1] = x;
    d[2] = func_0202c014(func_ov111_020e9fcc(a, b, c + 0x400));
}
