/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct T {
    u32 f0 : 1;
    u32 f1 : 1;
    u32 f2 : 1;
    u32 rest : 29;
    void *p;
    u32 c;
    u32 d;
} T;
typedef struct G {
    u8 pad[0x2c];
    T *tab;
} G;
void OS_FreeToHeap(u32, s32, void *);
extern G data_ov003_020b54e8;
void ResetRequestTRS(s32 n) {
    if (data_ov003_020b54e8.tab[n].f2) {
        data_ov003_020b54e8.tab[n].f2 = 0;
        data_ov003_020b54e8.tab[n].f1 = 0;
        if (data_ov003_020b54e8.tab[n].p != 0) {
            if (data_ov003_020b54e8.tab[n].p != 0) {
                OS_FreeToHeap(0, -1, data_ov003_020b54e8.tab[n].p);
                data_ov003_020b54e8.tab[n].p = 0;
            }
            data_ov003_020b54e8.tab[n].p = 0;
        }
    }
}
