/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 func_ov123_0208d988(void *arg0, u8 arg1) {
    u8 *s;
    u8 a;
    u8 t3;
    u8 t4;

    s           = (u8 *) arg0;
    a           = s[0x100];
    s[0x100]    = (u8) (a + 1);
    s[0x101]    = (u8) (s[0x101] + s[a]);
    t3          = s[0x104];
    t4          = s[t3];
    s[t3]       = s[s[0x101]];
    s[s[0x101]] = s[s[0x103]];
    s[s[0x103]] = s[s[0x100]];
    s[s[0x100]] = t4;
    s[0x102]    = (u8) (s[0x102] + s[t4]);
    s[0x103]    = (u8) (arg1 ^ s[(u8) (s[s[0x102]] + s[s[0x100]])] ^ s[s[(u8) (s[s[0x101]] + (s[s[0x103]] + s[s[0x104]]))]]);
    s[0x104]    = arg1;
    return s[0x103];
}
