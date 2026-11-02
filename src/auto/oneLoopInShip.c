/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern u8 *data_ov109_020ea340;
extern u8 *data_ov000_0205154c;
extern u8 *data_ov000_02051548;

void GetKeyAndTouch(void);
void UpDownColorShisetu(void);
void UpDownColorUnitList(void);
void ScenarioScriptMove(void);
void SyncPutMessageOneChar(s32);
void NoAnimeObjIncCount(void);
void SetTouchPosThereInShip(void);
void VBlankIntrWaitInGame(void);
void *func_0200a80c(s32);
void *func_0200a7ec(void);
void MIi_CpuCopy16(void *, void *, s32);
void ExtObjPaletteTrans(void);
void ExtBGPaletteTrans(void);
void ComIcomPut(void *, s32, s32, s32);
void NoAnimeObjPutSync(void);
void TensouOam(s32);
void deleteObjCharDataInVBlank(void);
void G2x_SetBGyAffine_(void *, void *, s32, s32, s32, s32);
void func_020083e0(void *);

s32 oneLoopInShip(s32 arg0) {
    u8 loc[16];
    u32 bit;

    func_020083e0(loc);
    GetKeyAndTouch();
    UpDownColorShisetu();
    UpDownColorUnitList();
    if (arg0 & 1) {
        ScenarioScriptMove();
    }
    SyncPutMessageOneChar(0);
    NoAnimeObjIncCount();
    SetTouchPosThereInShip();
    VBlankIntrWaitInGame();
    bit = ((u32) (*(data_ov109_020ea340 + 0x34E) << 0x1F)) >> 0x1F;
    if (bit != 0) {
        MIi_CpuCopy16(*(void **) (data_ov109_020ea340 + 0x350), func_0200a80c(bit), 0x800);
        *(data_ov109_020ea340 + 0x34E) = *(data_ov109_020ea340 + 0x34E) & ~1;
    }
    bit = ((u32) (*(data_ov109_020ea340 + 0x356) << 0x1F)) >> 0x1F;
    if (bit != 0) {
        MIi_CpuCopy16(*(void **) (data_ov109_020ea340 + 0x358), func_0200a7ec(), 0x800);
        *(data_ov109_020ea340 + 0x356) = *(data_ov109_020ea340 + 0x356) & ~1;
    }
    ExtObjPaletteTrans();
    ExtBGPaletteTrans();
    ComIcomPut(data_ov109_020ea340 + 0x48, -0x80, 0x180, 0x100);
    ComIcomPut(data_ov109_020ea340 + 0x3C, -0x80, 0x180, 0);
    ComIcomPut(data_ov109_020ea340 + 0x40, -0x80, 0x180, 0x100);
    NoAnimeObjPutSync();
    *(s32 *) (data_ov000_0205154c + 0x14C) += 1;
    *(s32 *) (data_ov000_02051548 + 0x464) += *(s32 *) (data_ov000_0205154c + 0xAF4);
    TensouOam(0);
    TensouOam(1);
    deleteObjCharDataInVBlank();
    G2x_SetBGyAffine_((void *) 0x04000030, loc, 0, 0, 0, *(u32 *) (data_ov109_020ea340 + 0x14) >> 2);
    *(s32 *) (data_ov109_020ea340 + 0x14) += 1;
    return 1;
}
