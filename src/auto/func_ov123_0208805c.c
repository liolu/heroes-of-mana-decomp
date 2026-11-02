/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_ov123_0207a140(s32, void **);
M2C_UNK func_ov123_0207a58c(s32, void **);

void func_ov123_0208805c(void *sp8, s32 a1, s32 a2, s32 a3) {
    if (M2C_FIELD(sp8, s32 *, 0xC) == 7) {
        return;
    }
    M2C_FIELD(sp8, s32 *, 0xC) = 7;
    func_ov123_0207a58c(M2C_FIELD(M2C_FIELD(sp8, void **, 8), s32 *, 0xC), &sp8);
    func_ov123_0207a140(M2C_FIELD(M2C_FIELD(sp8, void **, 8), s32 *, 0x10), &sp8);
}
