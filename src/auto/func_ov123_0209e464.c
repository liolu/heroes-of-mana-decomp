/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 p[0xd];
    u8 n;
    u8 q[0xe6];
    s32 k[0x77];
    u8 v[0x40];
} G;
extern G *func_ov123_0209d368(void);
u8 func_ov123_0209e464(s32 key, s32 b) {
    s32 i = (b == 0);
    if (i <= func_ov123_0209d368()->n) {
        do {
            if (key == func_ov123_0209d368()->k[i]) {
                return *(u8 *) ((u8 *) func_ov123_0209d368() + (i + 0x2d0));
            }
            i++;
        } while (i <= func_ov123_0209d368()->n);
    }
    return 0xff;
}
