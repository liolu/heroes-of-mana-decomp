#include "m2c.h"

void func_ov123_020ca0d8(s32 a, u32 b, u32 c, s32 d) {
    switch (b) {
        case 0:
            if (a == 1) {
                {
                    u32 t = (*(volatile u16 *) 0x4001048 & ~0x3f) | c;
                    if (d) {
                        t |= 0x20;
                    }
                    *(volatile u16 *) 0x4001048 = t;
                }
            } else {
                {
                    u32 t = (*(volatile u16 *) 0x4000048 & ~0x3f) | c;
                    if (d) {
                        t |= 0x20;
                    }
                    *(volatile u16 *) 0x4000048 = t;
                }
            }
            break;
        case 1:
            if (a == 1) {
                {
                    u32 t = (*(volatile u16 *) 0x4001048 & ~0x3f00) | (c << 8);
                    if (d) {
                        t |= 0x2000;
                    }
                    *(volatile u16 *) 0x4001048 = t;
                }
            } else {
                {
                    u32 t = (*(volatile u16 *) 0x4000048 & ~0x3f00) | (c << 8);
                    if (d) {
                        t |= 0x2000;
                    }
                    *(volatile u16 *) 0x4000048 = t;
                }
            }
            break;
        case 2:
            if (a == 1) {
                {
                    u32 t = (*(volatile u16 *) 0x400104a & ~0x3f00) | (c << 8);
                    if (d) {
                        t |= 0x2000;
                    }
                    *(volatile u16 *) 0x400104a = t;
                }
            } else {
                {
                    u32 t = (*(volatile u16 *) 0x400004a & ~0x3f00) | (c << 8);
                    if (d) {
                        t |= 0x2000;
                    }
                    *(volatile u16 *) 0x400004a = t;
                }
            }
            break;
        case 3:
            if (a == 1) {
                {
                    u32 t = (*(volatile u16 *) 0x400104a & ~0x3f) | c;
                    if (d) {
                        t |= 0x20;
                    }
                    *(volatile u16 *) 0x400104a = t;
                }
            } else {
                {
                    u32 t = (*(volatile u16 *) 0x400004a & ~0x3f) | c;
                    if (d) {
                        t |= 0x20;
                    }
                    *(volatile u16 *) 0x400004a = t;
                }
            }
            break;
    }
}
