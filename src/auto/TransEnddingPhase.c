/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct Ent {
    u32 f0_0 : 1;
    u32 f0_1 : 1;
    u32 pad : 30;
    u32 f4;
    u32 f8;
    void (*fn)(struct Ent *);
} Ent;

typedef struct Gl {
    u8 pad0[0x174];
    u32 pad174_0 : 5;
    u32 flag5 : 1;
    u32 pad174_1 : 26;
    u8 pad178[4];
    u32 cnt;
    void *heap;
    u8 pad184[0xc];
    u32 busy;
    Ent *ents;
    u32 nents;
} Gl;

extern Gl data_ov003_020b5380;
void trsCommandNeed(void);
void OS_FreeToHeap(u32, s32, void *);

void TransEnddingPhase(void) {
    u32 i;
    {
        for (i = 0; i < data_ov003_020b5380.nents; i++) {
            Ent *e = &data_ov003_020b5380.ents[i];
            if (e->f0_0 == 0 && e->f0_1 != 0) {
                if (data_ov003_020b5380.ents[i].fn != 0) {
                    if (data_ov003_020b5380.ents[i].f4 != 0) {
                        data_ov003_020b5380.ents[i].fn(e);
                    } else {
                        e->f0_1                          = 0;
                        data_ov003_020b5380.ents[i].f0_0 = 1;
                        if (i == 0) {
                            trsCommandNeed();
                        }
                    }
                } else {
                    e->f0_1                          = 0;
                    data_ov003_020b5380.ents[i].f0_0 = 1;
                }
            }
        }
    }
    if (data_ov003_020b5380.busy == 0 && data_ov003_020b5380.flag5 != 0) {
        data_ov003_020b5380.cnt++;
        if (data_ov003_020b5380.cnt > 0x78) {
            data_ov003_020b5380.flag5 = 0;
            if (data_ov003_020b5380.heap != 0) {
                OS_FreeToHeap(0, -1, data_ov003_020b5380.heap);
                data_ov003_020b5380.heap = 0;
            }
            data_ov003_020b5380.cnt = 0;
        }
    } else {
        data_ov003_020b5380.cnt = 0;
    }
}
