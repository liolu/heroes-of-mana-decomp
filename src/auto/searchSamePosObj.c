/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 flag:1;
    u32 :31;
    u32 pad0;
    u32 :23;
    u32 f23:1;
    u32 :8;
    u8 pad1[0x56];
    s8 f62;
    s8 f63;
    u8 pad2[8];
    u32 mask;
    u8 pad3[0x78];
    void *obj;
    u8 pad4[0x24];
} Entry;

typedef struct {
    u8 pad0[8];
    u32 :23;
    u32 f23:1;
    u32 :8;
} Unit;

extern Entry data_ov003_020b0cf0[];

s32 searchSamePosObj(void *arg0, s32 arg1, s32 arg2) {
    Entry *entry;
    u32 key;
    s32 i;
    u32 mask;
    Unit *unit;

    entry = data_ov003_020b0cf0;
    key = M2C_FIELD(arg0, u32 *, 0x6C);
    i = 0;
    mask = key | (key << 1) | (key >> 1);
    for (; i < 0x42; i++, entry++) {
        if (entry->flag) {
            unit = entry->obj;
            if ((unit != NULL) && (unit->f23 == 0) && (arg0 != (void *) entry) && (entry->f62 == arg1)
                && (entry->f63 == arg2)) {
                if (((mask & entry->mask & ~0xFF000000) != 0) || ((((u32) M2C_FIELD(entry, s32 *, 8) << 5) >> 0x1C) >= 5)) {
                    return i;
                }
            }
        }
    }
    return -1;
}