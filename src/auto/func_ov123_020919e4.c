/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct E {
    u16 a;
    u8 b;
    u8 c;
} E;
typedef struct F {
    u8 d[0xC0];
} F;
void MIi_CpuClear32(s32, void *, s32);
void MIi_CpuCopy32(void *, void *, s32);

void func_ov123_020919e4(s32 arg0, u8 *arg1) {
    F sp8;
    E sp4;
    F *sp0;
    E *r11;
    F *t11;
    s32 r10;
    s32 r9;
    E *tab;
    E *r7;
    F *r6;

    r10 = arg0;
    tab = (E *) (arg1 + 0x444);
    sp0 = (F *) (arg1 + 0x470);
    r9  = r10 - 1;
    if (r9 >= 0) {
        r6 = &sp0[r9];
        r7 = &tab[r9];
        do {
            if (tab[r10].b < tab[r9].b) {
                break;
            }
            MIi_CpuCopy32(r7, &sp4, 4);
            r11 = &tab[r10];
            MIi_CpuCopy32(r11, r7, 4);
            MIi_CpuCopy32(&sp4, r11, 4);
            MIi_CpuCopy32(r6, &sp8, 0xC0);
            t11 = &sp0[r10];
            MIi_CpuCopy32(t11, r6, 0xC0);
            MIi_CpuCopy32(&sp8, t11, 0xC0);
            r10 = r9;
            r7--;
            r6--;
            r9--;
        } while (r9 >= 0);
    }
    MIi_CpuClear32(0, &tab[0xA], 4);
    MIi_CpuClear32(0, (u8 *) sp0 + 0x780, 0xC0);
}
