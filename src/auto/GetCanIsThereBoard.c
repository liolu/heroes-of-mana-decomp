/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct Tb {
    u8 pad[0x2e0];
    u8 *map;
} Tb;
extern Tb *data_ov000_02051548;
void *func_0200ed38(u32, s32, s32);
void MIi_CpuClear16(s16, void *, s32);

u8 *GetCanIsThereBoard(s32 kind) {
    u8 *out = func_0200ed38(0, -1, 0x640);
    u16 *idx;
    u8 *o;
    s32 x, y;
    u32 f;
    MIi_CpuClear16(0, out, 0x640);
    o   = out;
    idx = (u16 *) data_ov000_02051548->map;
    switch (kind) {
        case 1:
        case 2:
            for (y = 0; y < 40; y++) {
                for (x = 0; x < 40; x++) {
                    f = *(u32 *) (data_ov000_02051548->map + *idx);
                    if (f == 0 || (f & 0x4000000)) {
                        *o = 1;
                    }
                    idx++;
                    o++;
                }
            }
            break;
        case 0:
        case 3:
        case 4:
            for (y = 0; y < 40; y++) {
                for (x = 0; x < 40; x++) {
                    f = *(u32 *) (data_ov000_02051548->map + *idx);
                    if (f == 0 || (f & 0x4000000) || (f & 1)) {
                        *o = 1;
                    } else if (f & 0x1000000) {
                        s32 k;
                        s32 cnt = 0;
                        u32 g   = f & 0xffffff;
                        g >>= 1;
                        for (k = 0;;) {
                            if (g & 1) {
                                cnt++;
                            }
                            if (g == 0) {
                                break;
                            }
                            k++;
                            g >>= 1;
                            if (k >= 23) {
                                break;
                            }
                        }
                        if (cnt <= 2) {
                            *o = 1;
                        }
                    }
                    idx++;
                    o++;
                }
            }
            break;
        case 5:
            for (y = 0; y < 40; y++) {
                for (x = 0; x < 40; x++) {
                    f = *(u32 *) (data_ov000_02051548->map + *idx);
                    if (f == 0 || (f & 0x4000000) || (f & 1) || !(f & 0x1000000)) {
                        *o = 1;
                    }
                    idx++;
                    o++;
                }
            }
            break;
    }
    return out;
}
