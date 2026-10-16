/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_EnableScheduler();                       /* extern */
M2C_UNK OS_JoinThread(s32);                         /* extern */
M2C_UNK OSi_RescheduleThread();                     /* extern */
M2C_UNK func_0200e1a4();                            /* extern */
M2C_UNK func_0200e358(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_0200e3ec(s32, void **, M2C_UNK);           /* extern */
s32 func_0200fa98();                                /* extern */
M2C_UNK func_0200faac(s32);                         /* extern */
M2C_UNK func_ov123_02070e64(void *);                /* extern */

void func_ov123_02072b08(s32 arg0) {
    void *sp0;
    s32 temp_r0;
    s32 temp_r7;

    if (arg0 == 0) {
        return;
    }
    OS_JoinThread(arg0 + 0x20);
    temp_r7 = func_0200fa98();
    func_0200e1a4();
    if (func_0200e3ec(arg0, &sp0, 0) != 0) {
        do {
            if (sp0 != NULL) {
                temp_r0 = M2C_FIELD(sp0, s32 *, 8);
                if (temp_r0 != 0) {
                    func_0200e358(temp_r0, -0xB, 0);
                }
                func_ov123_02070e64(sp0);
            }
        } while (func_0200e3ec(arg0, &sp0, 0) != 0);
    }
    OS_EnableScheduler();
    OSi_RescheduleThread();
    func_0200faac(temp_r7);
}
