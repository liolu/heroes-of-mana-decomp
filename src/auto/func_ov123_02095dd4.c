/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct Own {
    u8 color;
    u8 pad1;
    u8 mon;
    u8 day;
    u8 nick[0x14];
    u8 rest[0x3c];
} Own;

typedef struct Info {
    unsigned long long a;
    unsigned long long b;
    u16 e;
} Info;

extern u8 data_ov123_020dc0ec[];
extern u8 data_ov123_020dc0f4[];
extern u8 data_ov123_020dc0fc[];
extern u8 data_ov123_020dc104[];
extern u8 data_ov123_020dc110[];
extern u8 data_ov123_020dc12c[];

void MI_CpuFill8(void *, s32, s32);
void func_0200cdbc(u8 *, s32, u8 *, ...);
void func_0200fddc(void);
void MI_CpuCopy8(void *, void *, s32);
void OS_GetMacAddress(u8 *);
void OS_SPrintf(u8 *, u8 *, ...);
void OS_GetOwnerInfo(Own *);
s32 func_02016554(s32 *);
s32 RTC_GetTime(s32 *);
s32 func_0200fa98(void);
u8 *func_ov123_020692c4(void);
void DC_InvalidateRange(void *, s32);
void func_0200faac(s32);
s32 func_ov123_02091668(void);
u8 *func_ov123_02069254(u16 *);
void func_ov123_020941b8(u8 *, u8 *);

s32 func_ov123_02095dd4(u8 *out, Info *info) {
    u16 x14;
    u8 mac[6];
    s32 date[4];
    s32 time[3];
    Own own;
    s32 i;
    s32 ie;
    u8 *p;
    u8 *q;
    MI_CpuFill8(out, 0, 0x94);
    if (info->a != 0) {
        func_0200cdbc(out, 0xe, data_ov123_020dc0ec, info->a);
    } else {
        func_0200cdbc(out, 0xe, data_ov123_020dc0ec, info->b);
    }
    func_0200cdbc(out + 0xe, 7, data_ov123_020dc0f4, info->e);
    if (*(u8 *) 0x27ffe0c == 0) {
        func_0200fddc();
    }
    MI_CpuCopy8((void *) 0x27ffe0c, out + 0x15, 4);
    if (*(u8 *) 0x27ffe10 == 0) {
        func_0200fddc();
    }
    MI_CpuCopy8((void *) 0x27ffe10, out + 0x1a, 2);
    out[0x1d] = 0x30;
    OS_GetMacAddress(mac);
    for (i = 0; i < 6; i++) {
        OS_SPrintf(out + 0x1f + i * 2, data_ov123_020dc0fc, mac[i]);
    }
    OS_GetOwnerInfo(&own);
    if (own.color > 6) {
        own.color = 1;
    }
    func_0200cdbc(out + 0x2c, 3, data_ov123_020dc0fc, own.color);
    MI_CpuCopy8(own.nick, out + 0x7e, 0x14);
    func_0200cdbc(out + 0x2f, 5, data_ov123_020dc104, own.mon, own.day);
    if (func_02016554(date) != 0 || RTC_GetTime(time) != 0) {
        return 0;
    }
    func_0200cdbc(out + 0x34, 0xd, data_ov123_020dc110, date[0], date[1], date[2], time[0], time[1], time[2]);
    ie = func_0200fa98();
    p  = func_ov123_020692c4();
    DC_InvalidateRange(p, 6);
    if (p == 0) {
        func_0200faac(ie);
        return 0;
    }
    for (i = 0; i < 6; i++) {
        OS_SPrintf(out + 0x41 + i * 2, data_ov123_020dc0fc, p[i]);
    }
    func_0200cdbc(out + 0x6f, 0xe, data_ov123_020dc12c, func_ov123_02091668());
    q = func_ov123_02069254(&x14);
    DC_InvalidateRange(q, 0x20);
    if (q == 0) {
        func_0200faac(ie);
        return 0;
    }
    func_ov123_020941b8(q, out + 0x72);
    MI_CpuCopy8(q, out + 0x4e, 0x20);
    func_0200faac(ie);
    return 1;
}
