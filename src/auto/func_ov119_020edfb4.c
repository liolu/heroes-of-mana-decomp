#include "m2c.h"
typedef struct {
    u32 a : 8;
    u32 b : 24;
    u8 p[0x22];
    u16 h;
} E;
typedef struct {
    u8 p[0x4fa];
    u16 b : 1;
} Q;
extern u8 *data_ov119_020f2f68;
void func_ov119_020edfb4(void) {
    E *e;
    e                              = (E *) (data_ov119_020f2f68 + 0x20 + *(s32 *) (data_ov119_020f2f68 + 0xf0) * 0x18);
    e->a                           = 0xf;
    e                              = (E *) (data_ov119_020f2f68 + *(s32 *) (data_ov119_020f2f68 + 0xf0) * 0x18);
    e->h                           = 0xffff;
    ((Q *) data_ov119_020f2f68)->b = 1;
}
