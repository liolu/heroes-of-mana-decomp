#include "m2c.h"

typedef struct Q6 {
    s32 v[6];
} Q6;

s32 GetUnitStatus(s32);
void Routine_DeleteEvPos(s32);
extern Q6 data_ov091_020d1698;
extern Q6 data_ov091_020d16b0;

void func_ov091_020d04d4(void) {
    Q6 cnt  = data_ov091_020d16b0;
    Q6 base = data_ov091_020d1698;
    s32 *pb = base.v;
    s32 *pc = cnt.v;
    s32 i;
    s32 j;
    s32 b;
    s32 id;
    s32 u;
    i = 0;
    do {
        u = i + 0x304;
        if (GetUnitStatus(u + 0xc00) == 0 || GetUnitStatus(u + 0xc00) == 1) {
            j = 0;
            if (pc[i] > 0) {
                b  = pb[i];
                id = b + 0xf0e;
                do {
                    if (GetUnitStatus(id) == 2 || GetUnitStatus(id) == 3) {
                        Routine_DeleteEvPos(j + (b + 3));
                    }
                    j++;
                    id++;
                } while (j < pc[i]);
            }
        }
        i++;
    } while (i < 6);
}
