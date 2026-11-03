/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 func_0200fa98(void);
extern void func_0200faac(s32 e);
extern u8 *func_ov123_02067bac(void);

u8 *func_ov123_02069254(u16 *arg0) {
    u8 *ret;
    u16 val;
    u8 *w;
    s32 e;

    ret = NULL;
    val = 0;
    w   = func_ov123_02067bac();
    e   = func_0200fa98();
    if (w != NULL && *(s32 *) (w + 0x2260) == 9 && *(u8 *) (w + 0x226B) == 0) {
        ret = w + 0x214C;
        val = *(u16 *) (w + 0x214A);
    }
    func_0200faac(e);
    if (arg0 != NULL) {
        *arg0 = val;
    }
    return ret;
}
