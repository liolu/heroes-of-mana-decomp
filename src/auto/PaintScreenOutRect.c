/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Pt {
    u8 x;
    u8 y;
    u16 v;
} Pt;
typedef struct Gs {
    u8 pad0[4];
    u32 f4a : 16;
    u32 f16 : 1;
    u32 f4b : 15;
    u32 pad8[2];
    u32 w10a : 29;
    u32 b29 : 1;
    u32 w10b : 2;
} Gs;
extern Gs *data_ov000_02051548;
void *func_0200ed38(u32, s32, s32);
void MIi_CpuCopy16(void *, void *, s32);
void MIi_CpuClear16(s16, void *, s32);
void checkPoint(void *, Pt *, s32 *);
void func_0200fddc(void);
void ComIcomPut(void *, s32, s32, s32);
void TensouOam(s32);
void MoveUnitAndAnime(s32, s32);
void VBlankIntrWaitInGame(void);
void deleteGetRECTIcon(void);
void func_0200acd8(void *, s32, s32, s32, s32);
void ScenarioScriptMove(void);
void G2x_SetBlendBrightnessExt_(void *, s32, s32, s32, s32, s32);
void putMode2NormalP_Obj(void);
void putMode2SelectRect_Obj(void *);
void OS_FreeToHeap(u32, s32, void *);

void PaintScreenOutRect(void) {
    u8 *buf;
    Pt *pts;
    s32 cnt;
    s32 i;
    buf = func_0200ed38(0, -1, 0x6000);
    MIi_CpuCopy16(*(void **) ((u8 *) data_ov000_02051548 + 0x46C), buf, 0x6000);
    pts      = func_0200ed38(0, -1, 0x6000);
    cnt      = 4;
    pts[0].x = 0;
    pts[0].y = 0;
    pts[0].v = 2;
    pts[1].x = 0xFF;
    pts[1].y = 0;
    pts[1].v = 6;
    pts[2].x = 0xFF;
    pts[2].y = 0xBF;
    pts[2].v = 6;
    pts[3].x = 0;
    pts[3].y = 0xBF;
    pts[3].v = 2;
    while (cnt != 0) {
        checkPoint(buf, pts, &cnt);
        if (cnt > 0x17F7) {
            func_0200fddc();
        }
    }
    ComIcomPut((u8 *) data_ov000_02051548 + 0x78C, -128, 0x180, 0);
    TensouOam(0);
    TensouOam(1);
    if (data_ov000_02051548->b29) {
        MoveUnitAndAnime(1, 0);
    }
    VBlankIntrWaitInGame();
    MIi_CpuCopy16(buf, *(void **) ((u8 *) data_ov000_02051548 + 0x46C), 0x6000);
    deleteGetRECTIcon();
    func_0200acd8((void *) 0x4000050, 2, 1, 0, 7);
    for (i = 0; i < 0x1E; i++) {
        ComIcomPut((u8 *) data_ov000_02051548 + 0x78C, -128, 0x180, 0);
        TensouOam(0);
        TensouOam(1);
        if (data_ov000_02051548->b29) {
            MoveUnitAndAnime(1, 0);
            ScenarioScriptMove();
        }
        if (!data_ov000_02051548->f16) {
            break;
        }
        VBlankIntrWaitInGame();
    }
    G2x_SetBlendBrightnessExt_((void *) 0x4000050, 0x10, 0xF, 0x10, 0, 0);
    putMode2NormalP_Obj();
    putMode2SelectRect_Obj(buf);
    MIi_CpuClear16(0, *(void **) ((u8 *) data_ov000_02051548 + 0x46C), 0x6000);
    if (buf != NULL) {
        OS_FreeToHeap(0, -1, buf);
    }
    if (pts != NULL) {
        OS_FreeToHeap(0, -1, pts);
    }
}
