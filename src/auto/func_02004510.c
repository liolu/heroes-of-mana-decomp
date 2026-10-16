/* compiler: 1.2/sp3 */
#include "m2c.h"

extern M2C_UNK sPrioList;

void *func_0200789c(void *list, void *prev);

s32 func_02004510(u32 param_1) {
    s32 count = 0;
    u8 *node;

    node = (u8 *) func_0200789c(&sPrioList, NULL);
    if (node != NULL) {
        do {
            if (*(u16 *) (node + 0x34) == 1) {
                if (*(u16 *) (node + 0x38) == param_1) {
                    count++;
                }
            }
            node = (u8 *) func_0200789c(&sPrioList, node);
        } while (node != NULL);
    }
    return count;
}
