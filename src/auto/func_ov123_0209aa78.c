/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    void *f0;
    u8 pad[0x10];
    s32 f14;
    s32 f18;
} S;
extern S *data_ov123_020e1748;
extern u8 func_ov123_0209a058[];
extern u8 func_ov123_020a33e0[];
extern u8 func_ov123_020a3640[];
extern s32 func_ov123_02099d90(s32);
extern s32 func_ov123_0208b074(s32, u16, s32);
extern s32 func_ov123_020888e0(S *, s32, s32, s32, void *);
extern s32 func_ov123_0209a660(s32);
extern void func_ov123_0208888c(void *, void *);
extern void func_ov123_020885c4(void *, void *);

s32 func_ov123_0209aa78(void) {
    S *s;
    s32 r;
    s32 t;
    if (data_ov123_020e1748->f0 != 0) {
        return 0;
    }
    t = func_ov123_02099d90(0x4000) + 0xc000;
    s = data_ov123_020e1748;
    t = func_ov123_0208b074(0, t, 0);
    r = func_ov123_020888e0(data_ov123_020e1748, t, s->f14, s->f18, func_ov123_0209a058);
    if (func_ov123_0209a660(r) != 0) {
        return r;
    }
    func_ov123_0208888c(data_ov123_020e1748->f0, func_ov123_020a33e0);
    func_ov123_020885c4(data_ov123_020e1748->f0, func_ov123_020a3640);
    return r;
}
