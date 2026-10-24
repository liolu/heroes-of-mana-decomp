/* compiler: 1.2/sp3 */
#include "m2c.h"
void func_ov123_0207e0f0(void **, void *, s32);
void func_ov123_0207e128(void **, void *, void *);
void func_ov123_02086568(void *, s32, s32);
extern u8 data_ov123_020d9f98;
extern u8 data_ov123_020d9fb4;
extern u8 data_ov123_020da000;
extern u8 data_ov123_020da008;
extern u8 data_ov123_020da00c;
s32 func_ov123_0207ccec(void **arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 buf[0xDB4];
    u8 *t = *arg0;
    func_ov123_02086568(buf, arg3, 0xDAD);
    func_ov123_0207e128(arg0, t + 0x1F4, &data_ov123_020da000);
    func_ov123_0207e0f0(arg0, t + 0x1F4, arg2);
    func_ov123_0207e128(arg0, t + 0x1F4, &data_ov123_020d9f98);
    func_ov123_0207e0f0(arg0, t + 0x1F4, *(s32 *) (t + 0x198));
    func_ov123_0207e128(arg0, t + 0x1F4, &data_ov123_020da008);
    func_ov123_0207e0f0(arg0, t + 0x1F4, arg1);
    func_ov123_0207e128(arg0, t + 0x1F4, &data_ov123_020da00c);
    func_ov123_0207e128(arg0, t + 0x1F4, buf);
    func_ov123_0207e128(arg0, t + 0x1F4, &data_ov123_020d9fb4);
    return 0;
}
