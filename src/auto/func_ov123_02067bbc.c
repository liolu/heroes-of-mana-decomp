/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef struct Root {
    u8 pad[0x2264];
    u32 reg;
} Root;
extern Root *data_ov123_020df180;
s32 func_0200fa98(void);
void func_0200faac(s32);
u32 func_ov123_02067bbc(u32 arg) {
    s32 e     = func_0200fa98();
    Root *r   = data_ov123_020df180;
    u32 flags = 0;
    u32 old   = r->reg;
    if (r == 0) {
        func_0200faac(e);
        return 0;
    }
    if (arg & 0x8000) {
        flags |= 0x3ffe;
        if (!(arg & 0x3ffe)) {
            arg |= 0xa082;
        }
    }
    if (arg & 0x20000) {
        flags |= 0x10000;
    }
    if (arg & 0x80000) {
        flags |= 0x40000;
    }
    if (arg & 0x200000) {
        flags |= 0x100000;
    }
    if (arg & 0x800000) {
        flags |= 0x400000;
    }
    data_ov123_020df180->reg = arg | (old & ~flags);
    func_0200faac(e);
    return old;
}
