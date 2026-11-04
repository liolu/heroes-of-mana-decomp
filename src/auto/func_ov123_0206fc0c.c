/* compiler: 1.2/sp2p3 */
/* near start: 5 diffs with profile "1.2/sp2p3" */
/* near start: 15 diffs with profile "1.2/sp2p3" */
#include "m2c.h"

typedef struct Ent {
    s32 key;
    u32 a;
    u16 b;
    u16 c;
} Ent;

extern u8 data_ov123_020d9844;
extern s32 data_ov123_020df220;
extern u8 data_ov123_020df230;
extern Ent data_ov123_020df294[];
extern u16 data_ov123_020df29e[];
u64 func_0200f510(void);
s32 func_0200fa98(void);
void func_0200faac(s32);
s32 func_ov123_02070228(s32);
s32 func_ov123_0207023c(s32);

u8 *func_ov123_0206fc0c(s32 arg0) {
    u32 i;
    u8 *r;
    s32 saved;
    s32 *p;
    u64 t;
    u16 *q;
    saved = func_0200fa98();
    r     = 0;
    if (arg0 == 0x7F000001 || arg0 == data_ov123_020df220) {
        r = &data_ov123_020df230;
    } else if (func_ov123_0207023c(arg0) != 0 || func_ov123_02070228(arg0) != 0) {
        r = &data_ov123_020d9844;
    } else {
        p = &data_ov123_020df294[0].key;
        i = 0;
        do {
            if (arg0 == *p) {
                t                        = func_0200f510() >> 16;
                data_ov123_020df294[i].c = t;
                r                        = (u8 *) &data_ov123_020df294[i].a;
                break;
            }
            i++;
            p += 3;
        } while (i < 8);
    }
    func_0200faac(saved);
    return r;
}
