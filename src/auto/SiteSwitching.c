/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
typedef struct {
    u8 pad[0x20];
    u32 f20;
    u8 pad2[0xB4];
    u32 fd8;
} G;
typedef struct {
    u8 pad[0x604];
    u16 f604;
} H;
extern G *data_ov000_02051548;
extern H *data_ov000_0205154c;
void SiteSwitching(u32 m) {
    data_ov000_02051548->fd8 = (data_ov000_02051548->fd8 & ~0x180000) | ((m << 30) >> 11);
    switch (m) {
        case 0:
            data_ov000_0205154c->f604 |= 4;
            *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1F00) | (data_ov000_0205154c->f604 << 8);
            data_ov000_02051548->f20 &= ~0x80;
            break;
        case 1:
            data_ov000_0205154c->f604 |= 4;
            *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1F00) | (data_ov000_0205154c->f604 << 8);
            data_ov000_02051548->f20 |= 0x80;
            break;
        case 2:
            data_ov000_0205154c->f604 &= ~4;
            *(volatile u32 *) 0x4001000 = (*(volatile u32 *) 0x4001000 & ~0x1F00) | (data_ov000_0205154c->f604 << 8);
            data_ov000_02051548->f20 |= 0x80;
            break;
    }
}
