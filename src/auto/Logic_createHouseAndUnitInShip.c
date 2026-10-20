/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

extern void *data_ov000_02051548;
extern s32 data_ov107_020e0de0;
extern void (*data_ov107_020e0de8[])();
extern s32 data_ov108_020da3e0;
extern void (*data_ov108_020da3e8[])();

void Logic_createHouseAndUnitInShip(void *arg0) {
    void *g;
    s32 t;
    s32 idx;
    void (*f)();

    t = (u32) M2C_FIELD(arg0, u32 *, 0) >> 0x1A;
    if (t == 0) {
        return;
    }
    g = data_ov000_02051548;
    if ((((u32) (M2C_FIELD(g, s32 *, 0xC8) << 0x1E) >> 0x1F)) != 0) {
        if (t < data_ov108_020da3e0) {
            idx = (u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1E) >> 0x1E;
            if ((M2C_FIELD((g + (idx * 4)), s32 *, 0x100) != 0) && ((f = data_ov108_020da3e8[t]) != NULL)) {
                f(arg0);
            }
        }
    } else if (t < data_ov107_020e0de0) {
        idx = (u32) (M2C_FIELD(arg0, s32 *, 4) << 0x1E) >> 0x1E;
        if ((M2C_FIELD((g + (idx * 4)), s32 *, 0x100) != 0) && ((f = data_ov107_020e0de8[t]) != NULL)) {
            f(arg0);
        }
    }
}