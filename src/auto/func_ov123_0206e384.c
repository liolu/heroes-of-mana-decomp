/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void OS_YieldThread(void);
s32 func_ov123_0206e488(void *, s32, s32);
void func_ov123_0206e518(void *, s32, s32);
s32 func_ov123_0206e9d4(void *, s32);
s32 func_ov123_0206ebb0(s32, s32);

void func_ov123_0206e384(u8 *arg0, s32 arg1, s32 arg2) {
    s32 r;
    u16 temp_ip;
    u16 temp_r0;
    u16 temp_r3;
    u16 temp_r7;

    temp_ip = *(u16 *) (arg0 + 0x10);
    temp_r7 = *(u16 *) (arg0 + 0xC);
    temp_r3 = *(u16 *) (arg0 + 0x12);
    temp_r0 = *(u16 *) (arg0 + 0xE);
    if (func_ov123_0206ebb0(
            ((u16) (((s32) temp_r7 >> 8) | (temp_r7 << 8)) << 0x10) | (u16) (((s32) temp_r0 >> 8) | (temp_r0 << 8)),
            ((u16) (((s32) temp_ip >> 8) | (temp_ip << 8)) << 0x10) | (u16) (((s32) temp_r3 >> 8) | (temp_r3 << 8))) == 0) {
        return;
    }
    if (func_ov123_0206e488(arg0, arg1, arg2) != 0) {
        return;
    }
    r = func_ov123_0206e9d4(arg0, arg1);
    if (r != 0) {
        func_ov123_0206e518(arg0, arg1, r);
        return;
    }
    OS_YieldThread();
    r = func_ov123_0206e9d4(arg0, arg1);
    if (r == 0) {
        return;
    }
    func_ov123_0206e518(arg0, arg1, r);
}
