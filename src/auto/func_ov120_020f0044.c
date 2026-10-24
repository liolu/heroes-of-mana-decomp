#include "m2c.h"

extern void func_ov120_020eeb8c(void);
extern void func_ov120_020eeba4(void);
typedef struct {
    u8 pad[0xa10];
    u32 w;
} S;
extern S data_ov120_020f46dc;

void func_ov120_020f0044(void) {
    switch ((u32) (u16) data_ov120_020f46dc.w) {
        case 1:
        case 2:
        case 4:
            func_ov120_020eeba4();
            break;
        case 8:
        case 0x10:
        case 0x20:
        case 0x40:
        case 0x80:
        case 0x100:
            func_ov120_020eeb8c();
            break;
    }
}
