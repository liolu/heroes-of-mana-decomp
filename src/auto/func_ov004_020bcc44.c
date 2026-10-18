#include "m2c.h"

void *func_0202f594(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0202f7e8(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_ov004_020b9c64(M2C_UNK, void *);       /* extern */
s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_ov004_020bcd4c;
extern M2C_UNK func_ov004_020bcd50;

void func_ov004_020bcc44(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r2;
    s32 var_r4;
    s32 var_r5;
    void *temp_r0_2;
    s32 var_r6;
    void *var_r3;
    void *var_ip;

    temp_r0 = func_ov004_020b9cf4(arg1);
    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1 < temp_r0) {
        var_r6 = temp_r1 + (temp_r1 >> 1);
        if (var_r6 <= temp_r0) {
            var_r6 = temp_r0;
        }
        temp_r0_2 = func_0202f594(var_r6, 0xC, 8, &func_ov004_020bcd50, &func_ov004_020bcd4c);
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 8);
        var_ip    = temp_r0_2;
        var_r3    = M2C_FIELD(arg0, void **, 0xC);
        var_r2    = 0;
        if (temp_r1_2 > 0) {
            do {
                var_r2 += 1;
                M2C_FIELD(var_ip, s32 *, 4) = (s32) M2C_FIELD(var_r3, s32 *, 4);
                M2C_FIELD(var_ip, s32 *, 8) = (s32) M2C_FIELD(var_r3, s32 *, 8);
                var_r3 += 0xC;
                var_ip += 0xC;
            } while (var_r2 < temp_r1_2);
        }
        func_0202f7e8(M2C_FIELD(arg0, void **, 0xC), 0xC, 8, &func_ov004_020bcd4c);
        M2C_FIELD(arg0, s32 *, 4)     = var_r6;
        M2C_FIELD(arg0, void **, 0xC) = temp_r0_2;
    }
    M2C_FIELD(arg0, s32 *, 8) = temp_r0;
    func_ov004_020b9d44(arg1, 2);
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) <= 0) {
        return;
    }
    var_r5 = 0;
    do {
        func_ov004_020b9c64(arg1, M2C_FIELD(arg0, void **, 0xC) + var_r5);
        var_r4 += 1;
        var_r5 += 0xC;
    } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 8));
}
