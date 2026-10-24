/* compiler: 2.0/sp1p5 -profile */
/* near start: 8 diffs with profile "2.0/sp1p5 -profile" */
#include "m2c.h"
typedef struct {
    u32 pad : 2;
    u32 id : 9;
    u32 rest : 21;
} Hd;
typedef struct {
    u32 act : 1;
    u32 r : 31;
    u8 pad[0xe4];
    Hd *hd;
    u8 pad2[0x24];
} Aoo;
extern Aoo data_ov003_020b0cf0[];
Aoo *GetAooFromUnitBaseNo(u32 no) {
    s32 i;
    Aoo *p = data_ov003_020b0cf0;
    for (i = 0; i < 0x42; i++, p++) {
        if (p->act != 0 && p->hd != 0) {
            if (p->hd->id == no) {
                return p;
            }
        }
    }
    return 0;
}
