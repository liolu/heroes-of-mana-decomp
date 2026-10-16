#include "m2c.h"

s32 MBi_IsCommSizeValid(s32, s32, s32);
s32 func_0200fa98(void);
void func_0200faac(s32 arg0);
extern M2C_UNK WM_DMA_NO;

s32 MB_SetParentCommParam(s16 param_1, s16 param_2) {
    s32 saved;

    saved = func_0200fa98();
    if (*(u8 *) (*(u8 **) ((u8 *) &WM_DMA_NO + 8) + 0x50D) != 0) {
        func_0200faac(saved);
        return 0;
    }
    if (MBi_IsCommSizeValid(param_1, 8, param_2) == 0) {
        func_0200faac(saved);
        return 0;
    }
    *(s16 *) (*(u8 **) ((u8 *) &WM_DMA_NO + 8) + 0x10)  = param_2;
    *(s16 *) (*(u8 **) ((u8 *) &WM_DMA_NO + 8) + 0x500) = param_1;
    *(s16 *) (*(u8 **) ((u8 *) &WM_DMA_NO + 8) + 0x502) = 8;
    func_0200faac(saved);
    return 1;
}
