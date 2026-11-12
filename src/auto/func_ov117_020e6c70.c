#include "m2c.h"

typedef struct {
    u8 w0;
    u8 cnt;
    s16 off;
    u32 pad4;
    u32 flags;
    u8 padc[6];
    s16 w12;
} S;

extern void func_ov117_020e39c8(void);
extern void func_ov117_020e6590(s32, s32, s32);
extern void func_ov117_020e66f8(s32, s32, s32);
extern void func_ov117_020e685c(s32, s32, s32);
extern void func_ov117_020e69c8(s32, s32, s32);

s32 func_ov117_020e6c70(s32 cmd, S *s) {
    s32 i;
    s32 t;
    switch (cmd) {
        case 8:
        case 0x26:
            if (s->cnt == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cnt -= 1;
            func_ov117_020e6590(0, 0, 0);
            s->off = -0x18;
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off += 4;
            }
            s->flags &= ~0x100;
            s->off = 0;
            if (s->cnt == 0) {
                return 0;
            }
            break;
        case 9:
        case 0x27:
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov117_020e6590(0xb, 0, 0);
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off -= 4;
            }
            s->cnt += 1;
            s->off = 0;
            s->flags &= ~0x100;
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            break;
        case 0x29:
            if (s->cnt == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cnt -= 1;
            func_ov117_020e66f8(0, 0, 0);
            s->off = -0x18;
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off += 4;
            }
            s->flags &= ~0x100;
            s->off = 0;
            if (s->cnt == 0) {
                return 0;
            }
            break;
        case 0x2a:
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov117_020e66f8(0xb, 0, 0);
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off -= 4;
            }
            s->cnt += 1;
            s->off = 0;
            s->flags &= ~0x100;
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            break;
        case 0x38:
            if (s->cnt == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cnt -= 1;
            func_ov117_020e69c8(0, 0, 0);
            s->off = -0x18;
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off += 4;
            }
            s->flags &= ~0x100;
            s->off = 0;
            if (s->cnt == 0) {
                return 0;
            }
            break;
        case 0x39:
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov117_020e69c8(0xb, 0, 0);
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off -= 4;
            }
            s->cnt += 1;
            s->off = 0;
            s->flags &= ~0x100;
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            break;
        case 0x47:
            if (s->cnt == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cnt -= 1;
            func_ov117_020e685c(0, 0, 0);
            s->off = -0x18;
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off += 4;
            }
            s->flags &= ~0x100;
            s->off = 0;
            if (s->cnt == 0) {
                return 0;
            }
            break;
        case 0x48:
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov117_020e685c(0xb, 0, 0);
            for (i = 0; i < 0x18; i += 4) {
                func_ov117_020e39c8();
                s->off -= 4;
            }
            s->cnt += 1;
            s->off = 0;
            s->flags &= ~0x100;
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            break;
        case 0x13:
        case 0x2c:
        case 0x3b:
            if (s->cnt == 0) {
                return 0;
            }
            s->flags |= 0x100;
            for (i = 0; i < 0x10; i += 4) {
                func_ov117_020e39c8();
                s->off -= 4;
            }
            s->flags &= ~0x100;
            t      = s->cnt - 1;
            s->cnt = t;
            if (!(t & 0xFF)) {
                return 0;
            }
            break;
        case 0x14:
        case 0x2d:
        case 0x3c:
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            s->flags |= 0x100;
            for (i = 0; i < 0x10; i += 4) {
                func_ov117_020e39c8();
                s->off += 4;
            }
            s->cnt += 1;
            s->flags &= ~0x100;
            if (s->cnt + s->w12 >= s->w0) {
                return 0;
            }
            break;
        default:
            break;
    }
    return 1;
}
