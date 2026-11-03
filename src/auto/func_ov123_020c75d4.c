/* compiler: 1.2/sp3 */
#include "m2c.h"
extern s32 WM_SetWEPKey(void *, s32, void *);
extern void func_ov123_020c7718(void);
extern void func_ov123_020c7738(s32);
extern void func_ov123_020c758c(void);
typedef struct {
    u8 pad[0x13AC];
    s32 (*fn)(void *, void *);
    u8 pad2[0x10];
    u8 buf[4];
} W;
extern W *data_ov123_020e4708;
s32 func_ov123_020c75d4(void) {
    s32 r;
    func_ov123_020c7738(3);
    r = (*data_ov123_020e4708->fn)(data_ov123_020e4708->buf, data_ov123_020e4708);
    if (WM_SetWEPKey((void *) func_ov123_020c758c, r, data_ov123_020e4708->buf) == 2) {
        return 1;
    }
    func_ov123_020c7718();
    func_ov123_020c7738(9);
    return 0;
}
