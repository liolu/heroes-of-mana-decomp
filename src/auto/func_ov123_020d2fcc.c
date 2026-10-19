#include "m2c.h"

void **func_ov123_020d2688();                       /* extern */

void func_ov123_020d2fcc(void) {
    void **hunt_p;
    hunt_p = func_ov123_020d2688();
    M2C_FIELD(*hunt_p, M2C_UNK(**)(void **), 0x2C)(hunt_p);
}
