#include "m2c.h"

typedef struct {
    s32 w0;
    u8 pad[0x530 - 4];
    void *src;
} D;

extern D data_ov114_020e6148;
void func_ov114_020e261c(s32, s32);
void G2x_SetBlendBrightness_(volatile u16 *, s32, s32);
void GXx_SetMasterBrightness_(volatile u16 *, s32);
void *G2_GetBG2ScrPtr(void);
void MIi_CpuCopy16(void *, void *, s32);
void func_ov114_020e3110(s32, s32, s32, s32, s32, s32);
void func_ov114_020e1ba4(s32, s32, s32, s32, s32);
void func_ov114_020e2688(void);

void func_ov114_020e4e38(void) {
    func_ov114_020e261c(-6, 1);
    *(volatile u16 *) 0x4000050 = 0;
    G2x_SetBlendBrightness_((volatile u16 *) 0x4000050, 0x1b, -6);
    GXx_SetMasterBrightness_((volatile u16 *) 0x400006c, 0);
    MIi_CpuCopy16(data_ov114_020e6148.src, G2_GetBG2ScrPtr(), 0x800);
    data_ov114_020e6148.w0 = 0x100;
    func_ov114_020e3110(2, 9, 0x3c, 1, 2, 0);
    func_ov114_020e1ba4(0, 1, 2, 0, 3);
    while (1) {
        func_ov114_020e2688();
    }
}
