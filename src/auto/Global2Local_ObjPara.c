/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u32 bit0 : 1;
    u32 pad : 31;
} F0;
extern void MIi_CpuClear16(s32, void *, s32);
extern void SetFirstUNITOnOff(void *);
extern void setOneAooByUD_ST(s8, s32);
extern void UnitConsiderContinue(s32);
extern u8 *data_0203673c;
extern u8 *data_ov000_02051548;
extern u8 data_ov003_020b0cf0[];
void Global2Local_ObjPara(void) {
    u8 *var_r4_3;
    s32 temp_r5;
    s32 var_r4_2;
    s32 var_r6_2;
    s8 temp_r0;
    u8 *var_r6;
    s32 var_r4;
    MIi_CpuClear16(0, data_ov003_020b0cf0, 0x4620);
    var_r4 = 0;
    var_r6 = *(u8 **) (data_0203673c + 0x24);
    do {
        if (((F0 *) var_r6)->bit0 != 0 && (temp_r0 = *(s8 *) (var_r6 + 0x29), (temp_r0 != -1))) {
            setOneAooByUD_ST(temp_r0, var_r4);
        }
        var_r4 += 1;
        var_r6 += 0x34;
    } while (var_r4 < 0x58);
    var_r4_2 = 0;
    do {
        UnitConsiderContinue(var_r4_2);
        var_r4_2 += 1;
    } while (var_r4_2 < 0x42);
    var_r4_3                              = data_ov003_020b0cf0;
    var_r6_2                              = 0;
    temp_r5                               = *(s32 *) (data_ov000_02051548 + 0x30);
    *(s32 *) (data_ov000_02051548 + 0x30) = temp_r5 | 2;
    do {
        if (((F0 *) var_r4_3)->bit0 != 0) {
            SetFirstUNITOnOff(var_r4_3);
        }
        var_r6_2 += 1;
        var_r4_3 += 0x110;
    } while (var_r6_2 < 0x42);
    *(s32 *) (data_ov000_02051548 + 0x30) = temp_r5;
}
