/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

typedef struct {
    u32 b0 : 1;
    u32 rest : 31;
    u8 pad[0x10C];
} E0;

typedef struct {
    u32 pad : 8;
    u32 b23 : 1;
    u32 rest : 23;
} Info8;

typedef struct {
    u8 pad[8];
    u32 p : 23;
    u32 b23 : 1;
    u32 rest : 8;
} Info;

typedef struct {
    Info *info;
    u8 pad[0x10C];
} E1;

typedef struct {
    s8 v;
    u8 pad[0x10F];
} E2;

typedef struct {
    u8 pad[0xCC];
    u8 mode;
    s8 idx;
    s8 x;
    s8 y;
} U;

extern E0 data_ov003_020b0cf0[];
extern E1 data_ov003_020b0dd8[];
extern E2 data_ov003_020b0d50[];
extern E2 data_ov003_020b0d51[];

s32 GetDisPos(U *u, s32 *ox, s32 *oy) {
    switch (u->mode) {
        case 0:
        case 5:
            return 0;
        case 2:
            if (data_ov003_020b0cf0[u->idx].b0 == 0 ||
                (data_ov003_020b0dd8[u->idx].info != 0 && data_ov003_020b0dd8[u->idx].info->b23 != 0)) {
                return 0;
            }
            *ox = data_ov003_020b0d50[u->idx].v;
            *oy = data_ov003_020b0d51[u->idx].v;
            break;
        case 1:
            *ox = u->x;
            *oy = u->y;
            break;
        case 6:
            if (data_ov003_020b0cf0[u->idx].b0 == 0 ||
                (data_ov003_020b0dd8[u->idx].info != 0 && data_ov003_020b0dd8[u->idx].info->b23 != 0)) {
                *ox = u->x;
                *oy = u->y;
            } else {
                *ox = data_ov003_020b0d50[u->idx].v;
                *oy = data_ov003_020b0d51[u->idx].v;
            }
            break;
        case 3:
            if (data_ov003_020b0cf0[u->idx].b0 == 0 ||
                (data_ov003_020b0dd8[u->idx].info != 0 && data_ov003_020b0dd8[u->idx].info->b23 != 0)) {
                return 0;
            }
            *ox = data_ov003_020b0d50[u->idx].v;
            *oy = data_ov003_020b0d51[u->idx].v;
            break;
        default:
            return 0;
    }
    return 1;
}
