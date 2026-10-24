/* Reconstructed from USA ARM9 at 0x020d55ac (312 bytes).
 *
 * CARD_IdentifyBackup(): drives the backup identification of the cartridge
 * through CARDi_IdentifyBackupCore() and the two func_02017f90() commands,
 * waking the card thread again afterwards and finally invoking the callback
 * that the card module installed in cardi_common.
 */
#include "m2c.h"

typedef struct UnkCardCommon {
    void *unk_000;
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c;
    u32 unk_010[2];
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
    u32 unk_02c[3];
    void (*unk_038)(void *);
    void *unk_03c;
    u32 unk_040;
    u32 unk_044[0x30];
    void *unk_104;
    u32 unk_108;
    u32 unk_10c[2];
    volatile u32 unk_114;
    u32 unk_118[2];
    u8 unk_120[0x100];
} UnkCardCommon;

typedef struct UnkThreadQueue {
    void *head;
    void *tail;
} UnkThreadQueue;

extern UnkCardCommon cardi_common;
extern UnkThreadQueue OSi_ThreadInfo;

extern void OSi_ReferSymbol(void *);
extern void func_0200fddc(void);
extern s32 CARD_CheckEnabled(void);
extern s32 func_0200fa98(void);
extern void func_0200faac(s32);
extern void OS_SleepThread(void *);
extern void OS_WakeupThread(void *);
extern void OS_WakeupThreadDirect(void *);
extern s32 CARDi_IdentifyBackupCore(s32);
extern s32 func_02017f90(void *, s32, s32);

s32 CARD_IdentifyBackup(s32 arg0) {
    UnkCardCommon *const p = &cardi_common;
    s32 irq1;
    s32 irq2;
    void *cbarg;
    void (*cb)(void *);

    /* "[SD][INTENTDONE:BACKUP]" */
    OSi_ReferSymbol((void *) 0x2000B80);
    if (arg0 == 0) {
        func_0200fddc();
    }
    CARD_CheckEnabled();
    irq1 = func_0200fa98();
    while (p->unk_114 & 4) {
        OS_SleepThread(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = 0;
    p->unk_03c = 0;
    func_0200faac(irq1);
    CARDi_IdentifyBackupCore(arg0);
    cardi_common.unk_104 = OSi_ThreadInfo.tail;
    func_02017f90(p, 2, 1);
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0xC)  = 0;
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0x10) = &p->unk_120;
    M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0x14) = 1;
    func_02017f90(p, 6, 1);
    cb    = p->unk_038;
    cbarg = p->unk_03c;
    irq2  = func_0200fa98();
    p->unk_114 &= ~0x4C;
    OS_WakeupThread(&p->unk_10c);
    if (p->unk_114 & 0x10) {
        OS_WakeupThreadDirect(&p->unk_044);
    }
    func_0200faac(irq2);
    if (cb != 0) {
        cb(cbarg);
    }
    return M2C_FIELD(M2C_FIELD(p, void **, 0), u32 *, 0) == 0;
}
