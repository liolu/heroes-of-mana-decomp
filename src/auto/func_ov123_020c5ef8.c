/* compiler: 1.2/sp3 -O2 */
#include "m2c.h"
extern void MB_DisconnectChild(s32);
extern s32 func_0200fa98(void);
extern void func_0200faac(s32);
extern s32 func_0201b10c(s32, s32);
extern u8 *data_ov123_020e46e8;
void func_ov123_020c5ef8(s32 arg0) {
    u16 mask;
    s32 e;
    if (func_0201b10c(arg0, 2) == 0) {
        mask                                 = ~(1 << arg0);
        e                                    = func_0200fa98();
        *(u16 *) (data_ov123_020e46e8 + 2)   = *(u16 *) (data_ov123_020e46e8 + 2) & mask;
        *(u16 *) (data_ov123_020e46e8 + 4)   = *(u16 *) (data_ov123_020e46e8 + 4) & mask;
        *(u16 *) (data_ov123_020e46e8 + 6)   = *(u16 *) (data_ov123_020e46e8 + 6) & mask;
        *(u16 *) (data_ov123_020e46e8 + 8)   = *(u16 *) (data_ov123_020e46e8 + 8) & mask;
        *(u16 *) (data_ov123_020e46e8 + 0xA) = *(u16 *) (data_ov123_020e46e8 + 0xA) & mask;
        *(u16 *) (data_ov123_020e46e8 + 0xC) = *(u16 *) (data_ov123_020e46e8 + 0xC) & mask;
        func_0200faac(e);
        MB_DisconnectChild(arg0);
        return;
    }
    e                                  = func_0200fa98();
    *(u16 *) (data_ov123_020e46e8 + 6) = *(u16 *) (data_ov123_020e46e8 + 6) & ~(1 << arg0);
    *(u16 *) (data_ov123_020e46e8 + 8) = *(u16 *) (data_ov123_020e46e8 + 8) | (1 << arg0);
    func_0200faac(e);
}
