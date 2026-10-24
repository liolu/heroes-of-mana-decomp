/* compiler: 2.0/sp1p5 -profile */
/* near start: 5 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
extern u8 *data_0203673c;
s32 func_02002414(s32);
void PutOffItem(u8 *, s32);
void PutOnItem(u8 *, s32);
void EquipItem(s32 a, s32 item) {
    s32 idx;
    if (item != 0) {
        idx = func_02002414(a);
        if (idx != -1) {
            u8 *base = *(u8 **) (data_0203673c + 0x24) + idx * 0x34;
            if (item < 0) {
                if (item < 0) {
                    item = -item;
                }
                PutOffItem(base, item - 1);
            } else {
                PutOnItem(base, item);
            }
        }
    }
}
