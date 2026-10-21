/* Reconstructed from USA ARM9 at 0x020dce78 (56 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"

extern M2C_UNK WM_DMA_NO;

void MBi_CheckWmErrcode(s16 arg0, s16 arg1) {
    volatile s16 sp2;
    s16 sp0;

    if ((arg1 != 2) && (arg1 != 0)) {
        sp0 = arg0;
        sp2 = arg1;
        M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), M2C_UNK(**)(M2C_UNK, s16 *), 0x51C)(0xFF, &sp0);
    }
}
