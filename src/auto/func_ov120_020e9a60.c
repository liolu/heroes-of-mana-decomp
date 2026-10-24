#include "m2c.h"

extern void GX_SetBankForBG(s32);
extern void MIi_CpuCopy16(void *, void *, s32);
extern void func_ov120_020e9d5c();
extern void func_ov120_020e9e28();
extern void func_ov120_020ea634();
extern s32 func_ov120_020ea838();
extern void func_ov120_020ea954();
extern void func_ov120_020eaa64();
extern void func_ov120_020eb0fc(s32, s32);
extern void func_ov120_020eb1a0(s32, s32);
extern s32 func_ov120_020eb63c();
extern void func_ov120_020f0044();
extern void func_ov120_020f00d8();

typedef struct R {
    u32 f0;
    u32 f4;
    u32 f8;
    u32 fc;
    u32 v10 : 22;
    u32 val : 8;
    u32 b30 : 1;
    u32 b31 : 1;
} R;
extern R *data_ov120_020f4208;
typedef struct S {
    u8 p[0xa14];
    u32 fa14;
} S;
extern S data_ov120_020f46dc;

s32 func_ov120_020e9a60(void *arg0, s32 arg1) {
    s32 temp_r4;
    u32 temp_r0;

    func_ov120_020e9d5c();
    func_ov120_020e9e28();
    if (func_ov120_020ea838() != 1) {
        return -1;
    }
    if (arg0 != NULL) {
        MIi_CpuCopy16(arg0, data_ov120_020f4208, 0x14);
        data_ov120_020f4208->f0  = (data_ov120_020f4208->f0 & ~1) | 1;
        data_ov120_020f4208->f0  = data_ov120_020f4208->f0 | 2;
        data_ov120_020f4208->b30 = 0;
        data_ov120_020f4208->fc  = data_ov120_020f4208->fc | 0x10000000;
        temp_r0                  = data_ov120_020f4208->val;
        if (temp_r0 < 0x32U || temp_r0 > 0x5CU) {
            data_ov120_020f4208->val = 0x32;
        }
    }
    func_ov120_020eaa64();
    data_ov120_020f46dc.fa14 = ((data_ov120_020f46dc.fa14 | 0x400000) & ~0x01000000) | ((u32) (arg1 << 0x1F) >> 7);
    func_ov120_020ea634();
    func_ov120_020f0044();
    func_ov120_020f00d8();
    func_ov120_020eb0fc(-0x10, 3);
    temp_r4 = func_ov120_020eb63c();
    func_ov120_020eb1a0(-0x10, 3);
    func_ov120_020ea954();
    func_ov120_020e9d5c();
    GX_SetBankForBG(1);
    return temp_r4;
}
