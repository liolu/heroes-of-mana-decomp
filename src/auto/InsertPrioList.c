/* compiler: 1.2/sp3  */
#include "m2c.h"

void *func_0200789c();            /* extern */
M2C_UNK func_0200791c();   /* extern */
extern M2C_UNK sPrioList;

void InsertPrioList(void *arg0) {
    void *var_r1;

    var_r1 = func_0200789c(&sPrioList, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_0200789c(&sPrioList);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_0200791c(&sPrioList, var_r1, arg0);
}
