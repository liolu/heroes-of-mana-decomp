/* compiler: 1.2/sp3 */
/* near start: 11 diffs with profile "1.2/sp3" */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 *c;
    s32 *d;
    s32 *e;
} FI;

void func_ov123_0206b01c(u8 *arg0) {
    u8 *var_r2;
    s32 var_r1;
    FI *temp_r6;
    FI *temp_r6_2;
    FI *temp_r6_3;

    var_r1 = 0;
    var_r2 = arg0 + *(u16 *) (arg0 + 0xC);
    if ((s32) * (u16 *) (arg0 + 0xE) <= 0) {
        return;
    }
    do {
        switch (*(u32 *) var_r2) {
            case 0x46494E46:
                temp_r6    = (FI *) (var_r2 + 8);
                temp_r6->c = (s32 *) ((u8 *) temp_r6->c + (s32) arg0);
                if (temp_r6->d != NULL) {
                    temp_r6->d = (s32 *) ((u8 *) temp_r6->d + (s32) arg0);
                }
                if (temp_r6->e != NULL) {
                    temp_r6->e = (s32 *) ((u8 *) temp_r6->e + (s32) arg0);
                }
                break;
            case 0x43574448:
                temp_r6_2 = (FI *) (var_r2 + 8);
                if (temp_r6_2->b != 0) {
                    temp_r6_2->b = temp_r6_2->b + (s32) arg0;
                }
                break;
            case 0x434D4150:
                temp_r6_3 = (FI *) (var_r2 + 8);
                if (temp_r6_3->c != NULL) {
                    temp_r6_3->c = (s32 *) ((u8 *) temp_r6_3->c + (s32) arg0);
                }
                break;
            case 0x43474C50:
                break;
        }
        var_r1 += 1;
        var_r2 += *(s32 *) (var_r2 + 4);
    } while (var_r1 < (s32) * (u16 *) (arg0 + 0xE));
}
