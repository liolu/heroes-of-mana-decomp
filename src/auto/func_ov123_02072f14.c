/* compiler: 1.2/sp2p3 */
/* near start: 4 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

extern s32 func_0200fa98(void);
extern void func_0200faac(s32);
extern void func_ov123_02072d6c(void *);
extern void *data_ov123_020e0a10;
extern void *data_ov123_020e0a70;
extern s32 data_ov123_020e0a74;

s32 func_ov123_02072f14(void) {
    s32 st;
    void *p;

    for (;;) {
        st = func_0200fa98();
        p  = data_ov123_020e0a70;
        if (p != NULL) {
            void *a10 = data_ov123_020e0a10;
            s32 fl;
            do {
                if (p != a10) {
                    fl = *(s16 *) ((u8 *) p + 0x70) & 0x10;
                    if (fl == 0) {
                        break;
                    }
                }
                p = *(void **) ((u8 *) p + 0x7C);
            } while (p != NULL);
        }
        func_0200faac(st);
        if (p == NULL) {
            break;
        }
        func_ov123_02072d6c(p);
    }
    p = data_ov123_020e0a70;
    if (p == NULL || (p == data_ov123_020e0a10 && *(void **) ((u8 *) p + 0x7C) == NULL)) {
        if (data_ov123_020e0a74 == 0) {
            return 0;
        }
    }
    return -0x1A;
}
