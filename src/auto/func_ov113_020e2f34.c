#include "m2c.h"
typedef struct {
    u32 f0;
    s32 idx;
    s32 cnt;
} St2;
extern St2 data_ov113_020e539c;
extern u32 data_ov113_020e48d4[];
void func_ov113_020e2f34(void) {
    s32 i;
    s32 t;
    u32 v;
    if (data_ov113_020e539c.cnt == 0) {
        t = data_ov113_020e539c.idx << 1;
        MIi_CpuCopy16((void *) ((data_ov113_020e48d4[t] << 5) + 0x5000600), (void *) 0x5000740, 0x20);
        i                       = data_ov113_020e539c.idx;
        t                       = (i << 1) + 1;
        v                       = data_ov113_020e48d4[t];
        data_ov113_020e539c.cnt = v;
        data_ov113_020e539c.idx = i + 1;
    }
    data_ov113_020e539c.cnt -= 1;
}
