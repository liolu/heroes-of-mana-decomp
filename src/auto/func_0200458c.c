/* compiler: 1.2/sp3 */
#include "m2c.h"

extern M2C_UNK data_020367d8;

void func_0200408c(void *arg0, s32 arg1);

void func_0200458c(s32 param_1, s32 param_2, s32 param_3) {
    s32 i;
    u8 *entry;

    entry = (u8 *) &data_020367d8;
    for (i = 0; i < 0x10; i++) {
        if (entry[0x2C] != 0) {
            if (*(u16 *) (entry + 0x34) == 2) {
                if (*(u16 *) (entry + 0x38) == param_1) {
                    if (*(u16 *) (entry + 0x3A) == param_2) {
                        func_0200408c(entry, param_3);
                    }
                }
            }
        }
        entry += 0x44;
    }
}
