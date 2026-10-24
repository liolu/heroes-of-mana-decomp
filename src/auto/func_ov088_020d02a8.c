#include "m2c.h"
typedef struct D16 {
    s8 b[16];
} D16;
extern D16 data_ov088_020d1828;
s32 CalRnd();

void func_ov088_020d02a8(s32 *a, s32 *b, s32 *c) {
    D16 deck = data_ov088_020d1828;
    s32 i;
    s32 j;
    s8 t;
    s8 *base;
    s32 r;
    s8 *p;
    p    = deck.b;
    base = p;
    for (j = 0; j < 16; j++) {
        r       = CalRnd() % 16;
        t       = *p;
        *p      = base[r];
        base[r] = t;
        p++;
    }
    for (i = 0; i < 8; base++, i++) {
        switch (*base) {
            case 0:
                a[i] = 7;
                b[i] = 1;
                c[i] = 750;
                break;
            case 1:
                a[i] = 16;
                b[i] = 5;
                c[i] = 1050;
                break;
            case 2:
                a[i] = 22;
                b[i] = 6;
                c[i] = 750;
                break;
            case 3:
                a[i] = 27;
                b[i] = 5;
                c[i] = 1050;
                break;
            case 4:
                a[i] = 33;
                b[i] = 0;
                c[i] = 1050;
                break;
            case 5:
                a[i] = 10;
                b[i] = 12;
                c[i] = 450;
                break;
            case 6:
                a[i] = 9;
                b[i] = 23;
                c[i] = 150;
                break;
            case 7:
                a[i] = 8;
                b[i] = 27;
                c[i] = 750;
                break;
            case 8:
                a[i] = 33;
                b[i] = 19;
                c[i] = 1050;
                break;
            case 9:
                a[i] = 26;
                b[i] = 28;
                c[i] = 450;
                break;
            case 10:
                a[i] = 8;
                b[i] = 33;
                c[i] = 150;
                break;
            case 11:
                a[i] = 15;
                b[i] = 34;
                c[i] = 450;
                break;
            case 12:
                a[i] = 16;
                b[i] = 38;
                c[i] = 1050;
                break;
            case 13:
                a[i] = 32;
                b[i] = 29;
                c[i] = 1050;
                break;
            case 14:
                a[i] = 18;
                b[i] = 16;
                c[i] = 150;
                break;
            case 15:
                a[i] = 22;
                b[i] = 16;
                c[i] = 450;
                break;
            default:
                a[i] = 7;
                b[i] = 1;
                c[i] = 750;
                break;
        }
    }
}
