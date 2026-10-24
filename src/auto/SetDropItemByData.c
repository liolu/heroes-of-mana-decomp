/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct E {
    u32 id : 8;
    u32 mid : 23;
    u32 flag : 1;
} E;
typedef struct G {
    u8 pad[0xe4];
    E e[3];
} G;
extern G *data_ov000_02051548;
void MIi_CpuCopy16(void *, void *, s32);
void SetDropItemByData(void *src) {
    s32 i;
    MIi_CpuCopy16(src, data_ov000_02051548->e, 0xc);
    for (i = 0; i < 3; i++) {
        E *e = data_ov000_02051548->e;
        if (e[i].id == 0) {
            e[i].flag = 0;
        } else {
            e[i].flag = 1;
        }
    }
}
