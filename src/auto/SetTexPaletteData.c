/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, void *, M2C_UNK);   /* extern */
void *func_0200ed38(M2C_UNK, M2C_UNK, M2C_UNK);     /* extern */
extern M2C_UNK data_ov003_020a8880;

typedef struct {
    u32 big:31;
    u32 flag:1;
} F8;

typedef struct {
    s32 f0;
    s32 f4;
    F8 f8;
    s32 f12;
} Obj;

typedef struct {
    u8 pad0[0x20];
    u32 lo:12;
    u32 flag:1;
    u32 rest:19;
    u8 pad1[0x4B0 - 0x24];
    Obj *slot;
} Global;

extern void *data_ov000_02051548;

void SetTexPaletteData(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r8;
    s32 temp_r7;
    s32 temp_r6;
    s32 temp_r5;
    Obj *obj;

    temp_r8 = arg0;
    temp_r7 = arg1;
    temp_r6 = arg2;
    temp_r5 = arg3;
    if (((Global *)data_ov000_02051548)->flag == 0) {
        obj = func_0200ed38(0, -1, 0x10);
        MIi_CpuClear16(0, obj, 0x10);
        obj->f8.flag = temp_r5;
        obj->f0 = temp_r8;
        obj->f4 = temp_r7;
        obj->f8.big = temp_r6;
        obj->f12 = (s32) ((Global *)data_ov000_02051548)->slot;
        ((Global *)data_ov000_02051548)->slot = obj;
    }
}
