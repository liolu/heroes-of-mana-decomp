#include "m2c.h"

void *func_0202f594(s32, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0202f7e8(void *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_ov004_020b9c64(M2C_UNK, void *);       /* extern */
s32 func_ov004_020b9cf4(M2C_UNK);                   /* extern */
M2C_UNK func_ov004_020b9d44(M2C_UNK, M2C_UNK);      /* extern */
extern M2C_UNK func_ov004_020bdaa8;
extern M2C_UNK func_ov004_020bdaac;

void func_ov004_020bd988(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r1_2;
    s32 var_r0;
    u32 var_r4;
    s32 var_r4_2;
    s32 var_r7;
    u8 temp_ip;
    u8 temp_lr;
    void *temp_r0_2;
    void *var_r2;
    void *var_r3;

    temp_r0 = func_ov004_020b9cf4(arg1);
    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r1 < temp_r0) {
        var_r4 = temp_r1 + (temp_r1 >> 1);
        if ((s32) var_r4 <= temp_r0) {
            var_r4 = temp_r0;
        }
        temp_r0_2 = func_0202f594(var_r4, 0xC, 8, &func_ov004_020bdaac, &func_ov004_020bdaa8);
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 8);
        var_r3    = temp_r0_2;
        var_r2    = M2C_FIELD(arg0, void **, 0xC);
        var_r0    = 0;
        if (temp_r1_2 > 0) {
            do {
                var_r0 += 1;
                M2C_FIELD(var_r3, s32 *, 4) = (s32) M2C_FIELD(var_r2, s32 *, 4);
                temp_lr                     = M2C_FIELD(var_r2, u8 *, 8);
                temp_ip                     = M2C_FIELD(var_r2, u8 *, 9);
                M2C_FIELD(var_r3, u8 *, 8)  = temp_lr;
                M2C_FIELD(var_r3, u8 *, 9)  = temp_ip;
                temp_lr                     = M2C_FIELD(var_r2, u8 *, 0xA);
                temp_ip                     = M2C_FIELD(var_r2, u8 *, 0xB);
                var_r2 += 0xC;
                M2C_FIELD(var_r3, u8 *, 0xA) = temp_lr;
                M2C_FIELD(var_r3, u8 *, 0xB) = temp_ip;
                var_r3 += 0xC;
            } while (var_r0 < temp_r1_2);
        }
        func_0202f7e8(M2C_FIELD(arg0, void **, 0xC), 0xC, 8, &func_ov004_020bdaa8);
        M2C_FIELD(arg0, s32 *, 4)     = var_r4;
        M2C_FIELD(arg0, void **, 0xC) = temp_r0_2;
    }
    M2C_FIELD(arg0, s32 *, 8) = temp_r0;
    func_ov004_020b9d44(arg1, 2);
    var_r4_2 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) <= 0) {
        return;
    }
    var_r7 = 0;
    do {
        func_ov004_020b9c64(arg1, M2C_FIELD(arg0, void **, 0xC) + var_r7);
        var_r4_2 += 1;
        var_r7 += 0xC;
    } while (var_r4_2 < (s32) M2C_FIELD(arg0, s32 *, 8));
}
