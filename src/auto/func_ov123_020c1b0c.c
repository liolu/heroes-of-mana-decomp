/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Own {
    u8 color;
    u8 pad1;
    u8 month, day;
    u16 nick[10];
    u16 nickLen;
    u16 comment[26];
    u16 commentLen;
} Own;
extern u8 data_ov123_020e46b8;
void func_ov123_020c1a48(void);
void func_ov123_020ae8d8(s32);
void func_ov123_020ae530(s32);
void OS_GetOwnerInfo(Own *);
void MIi_CpuClear16(s32, void *, s32);
void MIi_CpuCopy16(void *, void *, s32);
void func_ov123_020ae3b4(void *, s32);
void func_ov123_020adaa0(s32);
void func_ov123_020c4964(void (*)(void));
void func_ov123_020c36bc(s32);
void func_ov123_020b2410(void (*)(void));
void func_ov123_020c1628(void);
void func_ov123_020c1a0c(void);

void func_ov123_020c1b0c(void) {
    u16 name[11];
    Own own;
    data_ov123_020e46b8 = 0;
    func_ov123_020c1a48();
    func_ov123_020ae8d8(8);
    func_ov123_020ae530(2);
    OS_GetOwnerInfo(&own);
    MIi_CpuClear16(0, name, 0x16);
    MIi_CpuCopy16(own.nick, name, own.nickLen * 2);
    func_ov123_020ae3b4(name, 0x28);
    func_ov123_020adaa0(0);
    func_ov123_020c4964(func_ov123_020c1628);
    func_ov123_020c36bc(0xb);
    func_ov123_020b2410(func_ov123_020c1a0c);
}
