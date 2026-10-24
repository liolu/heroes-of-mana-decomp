/* compiler: 1.2/sp3 */
#include "m2c.h"
typedef struct {
    u8 a;
    u8 p;
    u16 b;
    u8 d[0x100];
} L;
typedef struct {
    s16 mode;
    L body;
    s16 f106;
    s16 f108;
    s16 f10a;
    s16 f10c;
    s16 f10e;
    u8 mac[6];
} G;
extern u8 data_ov123_020d7df0;
extern u8 data_ov123_020e45c4;
extern G *data_ov123_020e45c8;
void MI_CpuCopy8(void *, void *, s32);
void MIi_CpuClear16(s32, void *, s32);
void OS_GetMacAddress(void *);
void func_0200fddc(void);
s32 func_ov123_020a9164(void *, void *);
void *func_ov123_020ca4ec(s32, s32);
void func_ov123_020b20fc(void);
void func_ov123_020b2108(void);
void func_ov123_020b21e4(void) {
    L l;
    data_ov123_020e45c8 = func_ov123_020ca4ec(0x26c, 4);
    data_ov123_020e45c4 = 0;
    MIi_CpuClear16(0, &l, 0x104);
    l.a = 0x50;
    l.b = 0xc;
    MI_CpuCopy8(&data_ov123_020d7df0, l.d, 0xc);
    data_ov123_020e45c8->mode = 3;
    data_ov123_020e45c8->body = l;
    data_ov123_020e45c8->f106 = 1;
    data_ov123_020e45c8->f108 = -1;
    data_ov123_020e45c8->f10a = 1;
    data_ov123_020e45c8->f10c = -1;
    data_ov123_020e45c8->f10e = -1;
    OS_GetMacAddress(data_ov123_020e45c8->mac);
    if (func_ov123_020a9164(func_ov123_020b2108, func_ov123_020b20fc) != 0) {
        func_0200fddc();
    }
}
