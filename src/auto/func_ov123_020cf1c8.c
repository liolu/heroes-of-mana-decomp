#include "m2c.h"

extern void MI_CpuFill8(void *, s32, s32);
extern s32 RTC_GetTime(s32 *);
extern void func_ov123_020cc9c0(void *, s32);
extern void func_ov123_020cc9cc(void *);

void func_ov123_020cf1c8(u8 *arg0) {
    s32 t[3];
    s32 v;

    func_ov123_020cc9c0(arg0 + 4, 0x41484550);
    func_ov123_020cc9cc(arg0 + 4);
    if (RTC_GetTime(t) != 0) {
        v = *(s32 *) (arg0 + 4);
    } else {
        v                      = *(s32 *) (arg0 + 4);
        *(s32 *) (arg0 + 0x44) = v;
        v += t[0];
        *(s32 *) (arg0 + 0x44) = v;
        v += t[1];
        *(s32 *) (arg0 + 0x44) = v;
        v += t[2];
    }
    *(s32 *) (arg0 + 0x44) = v;
    *(s32 *) (arg0 + 0x48) = 0;
    *(u8 *) (arg0 + 0x4C)  = 0;
    *(u8 *) (arg0 + 0x4D)  = 0;
    *(u8 *) (arg0 + 0x4E)  = 0;
    *(u8 *) (arg0 + 0x4F)  = 0;
    MI_CpuFill8(arg0 + 0x50, 0, 0x4C);
}
