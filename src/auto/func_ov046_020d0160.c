#include "m2c.h"

M2C_UNK OS_SleepThread(M2C_UNK);                    /* extern */
M2C_UNK func_ov000_02048914();                      /* extern */
M2C_UNK func_ov003_020995a0();                      /* extern */
M2C_UNK func_ov003_0209968c();                      /* extern */
M2C_UNK func_ov003_020996b4();                      /* extern */
M2C_UNK func_ov003_020997e4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_02099a08(M2C_UNK);               /* extern */
M2C_UNK func_ov003_02099b2c(M2C_UNK);               /* extern */
M2C_UNK func_ov003_02099cc0(M2C_UNK);               /* extern */
M2C_UNK func_ov003_02099e18();                      /* extern */
M2C_UNK func_ov003_02099e9c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_ov003_0209a964(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209aa18();                      /* extern */
M2C_UNK func_ov003_0209ae64(M2C_UNK);               /* extern */
s32 func_ov003_0209b940();                          /* extern */
M2C_UNK func_ov003_0209b9d4(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209c70c();                      /* extern */
M2C_UNK func_ov003_0209ce24(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209d244(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d3a8(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d400(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209d498(s32, s32);              /* extern */
M2C_UNK func_ov003_0209dbe8();                      /* extern */
M2C_UNK func_ov003_0209dcac(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209dd38(M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_ov003_0209ded8(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209df24();                      /* extern */
M2C_UNK func_ov003_0209e9c0();                      /* extern */
M2C_UNK func_ov003_0209ea48(M2C_UNK);               /* extern */
M2C_UNK func_ov003_0209f2b0();                      /* extern */
M2C_UNK func_ov003_020a24e0(M2C_UNK);               /* extern */
M2C_UNK func_ov003_020a297c(M2C_UNK);               /* extern */
extern void *data_0203673c;
extern void *data_ov000_02051548;

void func_ov046_020d0160(void) {
    s32 temp_r1;
    s32 temp_r3;
    s32 temp_r5;
    s32 temp_r6;
    s32 var_r5;
    u16 temp_r0;

loop_1:
    temp_r0 = (u16) M2C_FIELD(data_ov000_02051548, s32 *, 0xD4);
    switch ((u32) temp_r0) {                        /* irregular */
        case 19:
            break;
        default:
            func_ov000_02048914();
            func_ov003_020995a0();
            temp_r1 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r1, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r1, s32 *, 0x210) & ~0x3FFF) | 5);
            temp_r5 = (((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r5, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r5, s32 *, 0x210) & 0xF0003FFF) | 0x2C000);
            temp_r6 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r6, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r6, s32 *, 0x210) & ~0x3FFF) | 1);
            temp_r3 = ((((u32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x14) << 0x14) >> 0x1C) ^ 1) * 0x2D0) +
                      M2C_FIELD(data_0203673c, s32 *, 0x28);
            M2C_FIELD(temp_r3, s32 *, 0x210) = (s32) ((M2C_FIELD(temp_r3, s32 *, 0x210) & 0xF0003FFF) | 0x78000);
            func_ov003_0209b9d4(0, 6);
            func_ov003_0209b9d4(1, 5);
            func_ov003_0209b9d4(2, 5);
            func_ov003_0209b9d4(3, 5);
            func_ov003_0209b9d4(4, 1);
            func_ov003_0209b9d4(5, 3);
            func_ov003_0209b9d4(6, 1);
            func_ov003_0209b9d4(7, 4);
            func_ov003_0209b9d4(0xC, 1);
            func_ov003_0209b9d4(0xA, 1);
            func_ov003_0209b9d4(0xF, 1);
            func_ov003_0209b9d4(8, 1);
            func_ov003_0209b9d4(0xB, 1);
            func_ov003_0209b9d4(0xD, 1);
            func_ov003_0209b9d4(0xE, 1);
            func_ov003_0209b9d4(9, 1);
            func_ov003_0209d244(1, 1);
            func_ov003_0209d3a8(1, 0xA);
            func_ov003_0209d400(0, 1);
            func_ov003_0209dd38(0x3C, 0);
            func_ov003_0209dd38(2, 1);
            func_ov003_0209dd38(3, 2);
            func_ov003_0209dd38(4, 3);
            func_ov003_0209dd38(5, 4);
            func_ov003_0209dd38(6, 5);
            func_ov003_0209dd38(7, 6);
            func_ov003_0209dd38(8, 7);
            func_ov003_0209dd38(9, 8);
            func_ov003_0209dd38(0xA, 9);
            func_ov003_0209dd38(0xB, 0xA);
            func_ov003_020a297c(0x28);
            var_r5 = 1;
            do {
                func_ov003_0209d498(var_r5, 1);
                var_r5 += 1;
            } while (var_r5 < 0xE8);
            func_ov003_0209dbe8();
            M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) =
                (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD0) & ~0x1E000) | 0xA000);
            func_ov003_0209dcac(0, 2);
            func_ov003_0209ded8(2);
            func_ov003_0209df24();
            func_ov003_02099cc0(8);
            func_ov003_02099e18();
            func_ov003_02099e9c(0x1E, 0, 0x13, 0x15, -1, -1, -1);
            func_ov003_020a297c(0x19);
            func_ov003_0209ae64(0);
            func_ov003_02099b2c(0xA);
            func_ov003_020996b4();
            func_ov003_0209ce24(2);
            func_ov003_0209ea48(0);
            func_ov003_0209e9c0();
            func_ov003_0209a964(1);
        /* fallthrough */
        case 1:
            func_ov003_0209aa18();
            func_ov003_0209a964(2);
        /* fallthrough */
        case 2:
            func_ov003_020a24e0(0x19);
            if (func_ov003_0209b940() == 0) {
                M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) =
                    (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) & ~0xFFFF) | 3);
            } else {
                M2C_FIELD(data_ov000_02051548, s32 *, 0x760) = (s32) (M2C_FIELD(data_ov000_02051548, s32 *, 0x760) & ~1);
                OS_SleepThread(0);
                M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) =
                    (s32) ((M2C_FIELD(data_ov000_02051548, s32 *, 0xD4) & ~0xFFFF) | 2);
            }
            goto loop_1;
        case 3:
            func_ov003_0209968c();
            func_ov003_020997e4(1, 1);
            func_ov003_020996b4();
            func_ov003_02099a08(0x12C);
            func_ov003_0209968c();
            func_ov003_0209a964(0x13);
            break;
    }
    func_ov003_0209c70c();
    func_ov003_02099cc0(1);
    func_ov003_02099b2c(0xA);
    func_ov003_020996b4();
    func_ov003_0209f2b0();
    goto loop_1;
}
