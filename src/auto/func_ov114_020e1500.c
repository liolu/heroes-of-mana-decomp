/* near start: 1 diffs with profile "2.0/sp1p5" */
#include "m2c.h"
typedef struct {
    s32 f0;
    u8 pad[0x510];
    u32 f514;
    u8 pad2[0x14];
    s32 f52c;
    s32 f530;
} G;
extern G data_ov114_020e6148[];
extern void func_ov114_020e1c50(void);
extern void func_ov114_020e1d1c(void);
extern s32 func_ov114_020e2fe0(void);
extern void func_ov114_020e2f58(void);
extern void func_ov114_020e1768(void);
extern void *func_0200a80c(void);
extern void MIi_CpuCopy16(s32, void *, s32);
extern void func_ov114_020e3110(s32, s32, s32, s32, s32, s32);
extern void func_ov114_020e4aa8(void);
extern void func_ov114_020e4af4(void);
extern void func_ov114_020e2578(s32, s32);
extern void func_ov114_020e2688(void);

void func_ov114_020e1500(s32 a) {
    s32 v;
    func_ov114_020e1c50();
    func_ov114_020e1d1c();
    if (func_ov114_020e2fe0() != 1) {
        return;
    }
    func_ov114_020e2f58();
    func_ov114_020e1768();
    MIi_CpuCopy16(data_ov114_020e6148->f530, func_0200a80c(), 0x800);
    if (a != 0) {
        if (a == 1) {
            v = 0x3d;
        }
    } else {
        v = 0x3c;
    }
    data_ov114_020e6148->f0 = 1;
    func_ov114_020e3110(2, 9, v, 0, 0, 0);
    data_ov114_020e6148->f514 = (data_ov114_020e6148->f514 & 0xffe01fff) | 0x8000;
    func_ov114_020e4aa8();
    func_ov114_020e4af4();
    func_ov114_020e2578(-16, 3);
    while (1) {
        func_ov114_020e2688();
    }
}
