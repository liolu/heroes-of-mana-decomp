/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern void CloseNowInputScMode(void);
extern void DeleteUnitStatusParam(void);
extern void EndMessageScreenForDS(s32);
extern void InitMessageScreenForDS(s32);
extern void MessageFramePut(s32, s32);
extern void OS_FreeToHeap(s32, s32, void *);
extern void PutStringByObj(s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern void PutYesNoIcon(s32, s32, s32, s32, s32);
extern void deleteUPDOWNIcon(void);
extern s32 getNameString(s32, s32, s32 *);
extern u8 *data_ov000_02051548;
extern u8 *data_ov000_02051550;

void PutWin_HookTakeOff(s32 a) {
    s32 off;
    s32 p;
    CloseNowInputScMode();
    DeleteUnitStatusParam();
    EndMessageScreenForDS(a);
    *(u8 *) (data_ov000_02051550 + 0x454) = 0;
    deleteUPDOWNIcon();
    InitMessageScreenForDS(a);
    *(volatile s32 *) 0x04000014 = 0;
    MessageFramePut(5, a);
    p = getNameString(7, 0xB, &off);
    PutStringByObj(p, p + off, 0, 0x80, 0x50, a, 1, 0, 0, 1, 0);
    if (p != 0) {
        OS_FreeToHeap(0, -1, (void *) p);
    }
    PutYesNoIcon(a, 0x4A, 0x6C, 0xB6, 0x6C);
    *(u32 *) (data_ov000_02051548 + 0x14) &= ~0xF8000;
    *(u32 *) (data_ov000_02051548 + 0x18) &= 0xFFFE01FF;
}
