#include "m2c.h"
typedef struct {
    u16 x;
    u16 y;
    u8 w;
    u8 h;
    u8 flag : 1;
    u8 mask : 7;
    u8 id;
} E;
extern E data_ov112_020ebd84[];
extern u8 data_ov112_020eca1c[];
s32 func_ov112_020e5174(s32 x, s32 y, s32 i, s32 end, u32 flag, u32 mask) {
    if (mask == 0x10 && data_ov112_020eca1c[0xd52] == 0) {
        mask = 0x20;
    }
    if (i < end) {
        E *e = &data_ov112_020ebd84[i];
        do {
            s32 ex = data_ov112_020ebd84[i].x;
            s32 r  = ex + data_ov112_020ebd84[i].w;
            s32 ey = data_ov112_020ebd84[i].y;
            s32 b  = ey + data_ov112_020ebd84[i].h;
            if (flag == e->flag && (mask & e->mask) != 0 && x > ex && x < r && y > ey && y < b) {
                return data_ov112_020ebd84[i].id;
            }
            i++;
            e++;
        } while (i < end);
    }
    return -1;
}
