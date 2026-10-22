/* compiler: 2.0/sp1p5 -profile */
#include "m2c.h"

s32 is_thereEnemy(void *, u32);
s32 GetFriendOfHalfHP();
s32 GetFriendOfAbnormal();
extern void *data_0203673c;

s32 GetEnemyInOneUnitSite(void *arg0) {
    s32 sel;
    s32 *p;
    void *q;
    u32 kind;
    s32 ret;

    p = M2C_FIELD(arg0, s32 **, 0xE8);
    if (p == NULL) {
        return -1;
    }
    q   = M2C_FIELD(arg0, void **, 0xE4);
    sel = 2;
    if (q != NULL) {
        kind = (u32) (M2C_FIELD(q, s32 *, 4) << 0x1A) >> 0x1A;
        if (kind == 0x15) {
            sel = 0;
        } else if (kind == 0x16) {
            sel = 1;
        }
    }
    switch (sel) {
        case 0:
            ret = GetFriendOfHalfHP();
            break;
        case 1:
            ret = GetFriendOfAbnormal();
            break;
        default:
            if ((((u32) (M2C_FIELD((M2C_FIELD(data_0203673c, s32 *, 0x10) + (((u32) (*p << 0xD) >> 0x18) * 4)), s32 *, 8)
                         << 9) >>
                  0x1B) == 4)) {
                ret = is_thereEnemy(arg0, (((u32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x1F)) >> 0x1F) ^ 1);
            } else {
                ret = is_thereEnemy(arg0, ((u32) (M2C_FIELD(arg0, u16 *, 0x2C) << 0x1F)) >> 0x1F);
            }
            break;
    }
    return ret;
}