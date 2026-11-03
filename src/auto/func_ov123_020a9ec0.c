/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

typedef struct {
    u8 b[0x58];
} Buf58;

void func_ov123_020aa8b8(Buf58 *buf);
void func_ov123_020aa838(Buf58 *buf, s32 a, s32 b);
void func_ov123_020aa7dc(s32 dst, Buf58 *buf);

void func_ov123_020a9ec0(s32 arg0, s32 arg1, s32 arg2) {
    Buf58 L;

    func_ov123_020aa8b8(&L);
    func_ov123_020aa838(&L, arg1, arg2);
    func_ov123_020aa7dc(arg0, &L);
}
