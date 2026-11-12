#include "m2c.h"

typedef struct S {
    u8 cnt;
    u8 cur;
    s16 x;
    s32 pad4;
    s32 flags;
    u8 padc[6];
    s16 n;
} S;

void func_ov122_02055808(void);
void func_ov122_02057574(s32, s32);
void func_ov122_020571fc(s32, s32, s32);
void func_ov122_020573f4(s32, s32, s32);
void func_ov122_02056f94(s32, s32, s32);

s32 func_ov122_02057d84(s32 arg0, S *s) {
    s32 i;
    switch (arg0) {
        default:
            break;
        case 23:
            if (s->cur == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cur--;
            func_ov122_02057574(0, 0);
            s->x = -24;
            i    = 0;
            do {
                func_ov122_02055808();
                i += 4;
                s->x += 4;
            } while (i < 24);
            s->flags &= ~0x100;
            s->x = 0;
            if (s->cur == 0) {
                return 0;
            }
            break;
        case 24:
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov122_02057574(0xb, 0);
            i = 0;
            do {
                func_ov122_02055808();
                i += 4;
                s->x -= 4;
            } while (i < 24);
            s->cur++;
            s->x = 0;
            s->flags &= ~0x100;
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            break;
        case 31:
            if (s->cur == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cur--;
            func_ov122_020571fc(0, 0, 0);
            s->x = -72;
            i    = 0;
            do {
                func_ov122_02055808();
                i += 8;
                s->x += 8;
            } while (i < 72);
            s->flags &= ~0x100;
            s->x = 0;
            if (s->cur == 0) {
                return 0;
            }
            break;
        case 32:
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov122_020571fc(5, 0, 0);
            i = 0;
            do {
                func_ov122_02055808();
                i += 8;
                s->x -= 8;
            } while (i < 72);
            s->cur++;
            s->x = 0;
            s->flags &= ~0x100;
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            break;
        case 38:
            if (s->cur == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cur--;
            func_ov122_020573f4(0, 0, 0);
            s->x = -48;
            i    = 0;
            do {
                func_ov122_02055808();
                i += 8;
                s->x += 8;
            } while (i < 48);
            s->flags &= ~0x100;
            s->x = 0;
            if (s->cur == 0) {
                return 0;
            }
            break;
        case 39:
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov122_020573f4(5, 0, 0);
            i = 0;
            do {
                func_ov122_02055808();
                i += 8;
                s->x -= 8;
            } while (i < 48);
            s->cur++;
            s->x = 0;
            s->flags &= ~0x100;
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            break;
        case 44:
            if (s->cur == 0) {
                return 0;
            }
            s->flags |= 0x100;
            s->cur--;
            func_ov122_02056f94(0, 0, 0);
            s->x = -168;
            i    = 0;
            do {
                func_ov122_02055808();
                i += 8;
                s->x += 8;
            } while (i < 168);
            s->flags &= ~0x100;
            s->x = 0;
            if (s->cur == 0) {
                return 0;
            }
            break;
        case 45:
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            s->flags |= 0x100;
            func_ov122_02056f94(2, 0, 0);
            i = 0;
            do {
                func_ov122_02055808();
                i += 8;
                s->x -= 8;
            } while (i < 168);
            s->cur++;
            s->x = 0;
            s->flags &= ~0x100;
            if (s->cur + s->n >= s->cnt) {
                return 0;
            }
            break;
    }
    return 1;
}
