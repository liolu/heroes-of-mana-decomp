/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
extern u8 *data_ov000_02051548;
void func_0200b31c(s32, s32, s32, s32, s32, s32, s32, u8 *);

void Set3DAREAmapVIEW(void) {
    func_0200b31c(0x165, 0xff0, 0x1555, 0, 0x190000, 0x1000, 1, data_ov000_02051548 + 0x36c);
}
