#include "m2c.h"

extern M2C_UNK data_ov115_020e9a40;

void func_ov115_020e74c0(void) {
    if (M2C_FIELD(&data_ov115_020e9a40, M2C_UNK(**)(), 4) == NULL) {
        return;
    }
    M2C_FIELD(&data_ov115_020e9a40, M2C_UNK(**)(), 4)();
}
