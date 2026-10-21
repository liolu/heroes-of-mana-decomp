/* Reconstructed from USA ARM9 at 0x020dbb68 (112 bytes).
 * Names and types are inferred from the binary.
 */
#include "m2c.h"
extern M2C_UNK WM_DMA_NO;
void MBi_ChildPortCallback(void *arg0) {
    u16 temp_r0;
    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {
        case 7:
        case 9:
        case 25:
        case 26:
            return;
        case 21:
            M2C_FIELD(M2C_FIELD(&WM_DMA_NO, void **, 8), M2C_UNK(**)(M2C_UNK, M2C_UNK), 0x51C)(9, arg0);
            return;
    }
}
