/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u8 pad0[0x20];
    u32 w0 : 3;
    u32 pal : 4;
    u32 w7 : 25;
    u8 pad24[0x138 - 0x24];
    void *p138;
} NikoA;

typedef struct {
    u32 flag : 1;
    u32 rest : 31;
} Flag158;

typedef struct {
    u8 pad0[0x158];
    Flag158 f158;
    u8 *p15c;
    u8 *p160;
    u8 pad164[0x368 - 0x164];
} NikoB;

extern NikoA *data_ov000_02051548;
extern u8 *data_ov000_0205154c;

void ResetObjPalMapX(s32, s32, s32);
s32 SearchCanUseObjPalNo(s32, s32);
void *getIconObjPalData(s32 *, s32);
void MIi_CpuCopy16(void *, void *, s32);
void OS_FreeToHeap(u32, s32, void *);
void G2x_SetBlendBrightnessExt_(void *, s32, s32, s32, s32, s32);
void *getIconObjAnimeData(s32);

void SetUpNikoChanIcon(void) {
    s32 sz;
    u8 *data;
    s32 zero;

    if (data_ov000_02051548->pal != 0) {
        ResetObjPalMapX(data_ov000_02051548->pal, 1, 0);
        data_ov000_02051548->pal = 0;
    }
    data_ov000_02051548->pal = SearchCanUseObjPalNo(1, 0);
    *(u16 *) (data_ov000_0205154c + 0x602) |= 1 << data_ov000_02051548->pal;
    data = getIconObjPalData(&sz, 2);
    if (((NikoB *) data_ov000_0205154c)->f158.flag == 1) {
        MIi_CpuCopy16(data, ((NikoB *) data_ov000_0205154c)->p160 + (data_ov000_02051548->pal << 5), 0x20);
        MIi_CpuCopy16(data, data_ov000_0205154c + 0x368 + (data_ov000_02051548->pal << 5), 0x20);
    } else {
        MIi_CpuCopy16(data, data_ov000_0205154c + 0x368 + (data_ov000_02051548->pal << 5), 0x20);
    }
    if (data != 0) {
        OS_FreeToHeap(0, -1, data);
    }
    zero = 0;
    G2x_SetBlendBrightnessExt_((void *) 0x4000050, 0x10, 0xF, 0x10, zero, zero);
    if (data_ov000_02051548->p138 != 0) {
        OS_FreeToHeap(0, -1, data_ov000_02051548->p138);
        data_ov000_02051548->p138 = (void *) zero;
    }
    data_ov000_02051548->p138 = getIconObjAnimeData(2);
}
