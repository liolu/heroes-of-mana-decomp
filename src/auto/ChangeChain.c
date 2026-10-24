/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"
void ChangeChain(u32 *p, u32 size, s32 scale) {
    u32 *end;
    u32 v;
    u32 c;
    end = (u32 *) ((u8 *) p + (size & ~3));
    if (p < end) {
        do {
            v = *p;
            p++;
            if (v != 0) {
                do {
                    c = v & 0xFF;
                    switch (c) {
                        case 0x14:
                            p++;
                            break;
                        case 0x22:
                            ((u16 *) p)[1] = (u16) ((s32) (((u16 *) p)[1] * scale) >> 12);
                            p++;
                            break;
                        case 0x20:
                            p++;
                            break;
                        case 0x29:
                            p++;
                            break;
                        case 0x23:
                            ((u16 *) p)[1] = (u16) ((s32) (((s16 *) p)[1] * scale) >> 12);
                            p += 2;
                            break;
                        case 0x40:
                            p++;
                            break;
                        case 0x41:
                            break;
                    }
                    v = v >> 8;
                } while (v != 0);
            }
        } while (p < end);
    }
}
