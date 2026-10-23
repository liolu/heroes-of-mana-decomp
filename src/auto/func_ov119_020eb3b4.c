#include "m2c.h"
typedef struct {
    u32 f : 1;
} B1;
void MIi_CpuCopy32(void *, s32, s32);
void func_ov119_020eb238(void);
void func_ov119_020eb2f0(void);
extern u8 *data_ov119_020f1e40;

void func_ov119_020eb3b4(void) {
    func_ov119_020eb238();
    func_ov119_020eb2f0();
    if (((B1 *) (data_ov119_020f1e40 + 0x1444))->f != 0) {
        MIi_CpuCopy32(data_ov119_020f1e40 + 0x1240, 0x05000200, 0x200);
        ((B1 *) (data_ov119_020f1e40 + 0x1444))->f = 0;
    }
    if (((B1 *) (data_ov119_020f1e40 + 0x1854))->f != 0) {
        MIi_CpuCopy32(data_ov119_020f1e40 + 0x1650, 0x05000600, 0x200);
        ((B1 *) (data_ov119_020f1e40 + 0x1854))->f = 0;
    }
    if (((B1 *) (data_ov119_020f1e40 + 0x1c64))->f != 0) {
        MIi_CpuCopy32(data_ov119_020f1e40 + 0x1a60, 0x05000000, 0x200);
        ((B1 *) (data_ov119_020f1e40 + 0x1c64))->f = 0;
    }
    if (((B1 *) (data_ov119_020f1e40 + 0x2074))->f != 0) {
        MIi_CpuCopy32(data_ov119_020f1e40 + 0x1e70, 0x05000400, 0x200);
        ((B1 *) (data_ov119_020f1e40 + 0x2074))->f = 0;
    }
}
