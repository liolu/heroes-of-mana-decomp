/* compiler: 1.2/sp3 */
#include "m2c.h"

u8 *NNS_SndArcGetFileAddress();
void NNS_SndArcSetFileAddress(s32, u8 *);
u8 *NNS_SndHeapAlloc(s32, s32, M2C_UNK *, s32, s32);
void DC_StoreRange(u8 *, s32);
void MI_CpuCopy8(u8 *, u8 *, s32);
void MI_CpuFill8(u8 *, s32, s32);
s32 func_02004ea0(s32, void *, s32, s32);
s32 func_02005224();
extern M2C_UNK WaveArcTableDisposeCallback;
extern M2C_UNK data_020376c8;

u8 *func_02005b1c(s32 arg0, s32 arg1, s32 arg2) {
    u8 *var_r6;
    s32 temp_r5;
    s32 temp_r4;
    s32 var_r3;
    s32 rd;
    u8 *temp_r0;
    var_r6 = NNS_SndArcGetFileAddress();
    if (var_r6 == NULL) {
        if (func_02004ea0(arg0, &data_020376c8, 0x3C, 0) != 0x3C) {
            return NULL;
        }
        temp_r4 = M2C_FIELD(&data_020376c8, s32 *, 0x38) * 4;
        temp_r5 = (temp_r4 * 2) + 0x3C;
        if (arg1 == 0) {
            return NULL;
        }
        if (arg2 == 0) {
            var_r3 = 0;
        } else {
            var_r3 = func_02005224();
        }
        var_r6 = NNS_SndHeapAlloc(arg1, temp_r5 + 0x20, &WaveArcTableDisposeCallback, var_r3, arg0);
        if (var_r6 == NULL) {
            return NULL;
        }
        rd = func_02004ea0(arg0, var_r6, temp_r4 + 0x3C, 0);
        if (rd != temp_r4 + 0x3C) {
            return NULL;
        }
        temp_r0 = var_r6 + 0x3C;
        MI_CpuCopy8(temp_r0, temp_r0 + (M2C_FIELD(var_r6, s32 *, 0x38) * 4), temp_r4);
        MI_CpuFill8(var_r6 + 0x3C, 0, temp_r4);
        DC_StoreRange(var_r6, temp_r5);
        if (arg2 != 0) {
            NNS_SndArcSetFileAddress(arg0, var_r6);
        }
    }
    return var_r6;
}
