/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_020c8ec0(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 *tab;
    s32 i;
    u32 hi;
    u32 t;

    tab = *(u32 **) (arg0 + 8);
    if (arg1 >= 0) {
        if (arg2 != 0x100 && arg2 != 0x300) {
            t             = tab[arg1 * 2] & 0xC1FFFCFF;
            tab[arg1 * 2] = t | arg2;
            return;
        }
        t             = tab[arg1 * 2] & 0xC1FFFCFF;
        tab[arg1 * 2] = t | arg2 | (arg3 << 0x19);
        return;
    }
    i = 0;
    if ((s32) arg0[0xC] <= 0) {
        return;
    }
    hi = arg3 << 0x19;
    do {
        if (arg2 != 0x100 && arg2 != 0x300) {
            t          = tab[i * 2] & 0xC1FFFCFF;
            tab[i * 2] = t | arg2;
        } else {
            t          = tab[i * 2] & 0xC1FFFCFF;
            tab[i * 2] = hi | (t | arg2);
        }
        i += 1;
    } while (i < (s32) arg0[0xC]);
}
