/* compiler: 1.2/sp3 */
#include "m2c.h"

void func_ov123_02081e70(void **, void *);

void func_ov123_02081e10(void **arg0, void *arg1) {
    u8 *obj;
    u8 *cur;
    u8 *prev;

    obj  = *arg0;
    prev = NULL;
    cur  = *(u8 **) (obj + 0x424);
    if (cur == NULL) {
        return;
    }
    do {
        if (cur == arg1) {
            if (prev == NULL) {
                *(u8 **) (obj + 0x424) = *(u8 **) (cur + 0x20);
            } else {
                *(u8 **) (prev + 0x20) = *(u8 **) (arg1 + 0x20);
            }
            func_ov123_02081e70(arg0, arg1);
            return;
        }
        prev = cur;
        cur  = *(u8 **) (cur + 0x20);
    } while (cur != NULL);
}
