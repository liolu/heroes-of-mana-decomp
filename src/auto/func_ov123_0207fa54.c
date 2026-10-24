/* compiler: 1.2/sp3 */
#include "m2c.h"

typedef struct {
    u8 a;
    u8 b;
    u16 c;
    s32 d;
} SA;

M2C_UNK func_02020d04(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
void *func_ov123_02073aec(M2C_UNK *);               /* extern */
s32 func_ov123_0207acc0(s32);                       /* extern */
s32 func_ov123_0207acf4(s32, void *, s32 *);     /* extern */
s32 func_ov123_0207ae60(s32, M2C_UNK);              /* extern */
s32 func_ov123_0207ae7c(s32, void *, M2C_UNK);   /* extern */
s32 func_ov123_0207aec0(s32, void *, M2C_UNK);   /* extern */
s32 func_ov123_0207af50(M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_ov123_0207b314(s32, M2C_UNK);              /* extern */
M2C_UNK func_ov123_0207e68c(void **, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov123_0208608c(void **, M2C_UNK, M2C_UNK *); /* extern */
extern M2C_UNK data_ov123_020da324;
extern M2C_UNK data_ov123_020da3c4;
extern M2C_UNK data_ov123_020da5f8;
extern M2C_UNK data_ov123_020da620;
extern M2C_UNK data_ov123_020da654;
extern M2C_UNK data_ov123_020da67c;
extern M2C_UNK data_ov123_020da6a8;
extern M2C_UNK data_ov123_020da6d8;
extern M2C_UNK data_ov123_020da70c;
extern M2C_UNK data_ov123_020da72c;

s32 func_ov123_0207fa54(void **arg0, void *arg1) {
    SA sa;
    s32 *pz;
    s32 sp8;
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_4;
    s32 temp_r0_5;
    void *temp_r0_3;
    void *temp_r4;

    temp_r4 = *arg0;
    if (M2C_FIELD(temp_r4, s32 *, 0x10C) == 0) {
        M2C_FIELD(temp_r4, s32 *, 0x204) = func_ov123_0207af50(2, 1, 0);
        temp_r0                          = M2C_FIELD(temp_r4, s32 *, 0x204);
        if (temp_r0 == -1) {
            func_ov123_0208608c(arg0, 5, &data_ov123_020da5f8);
            func_ov123_0207e68c(arg0, 3, 1);
            return 3;
        }
        if (func_ov123_0207b314(temp_r0, 0) == 0) {
            func_ov123_0208608c(arg0, 5, &data_ov123_020da620);
            func_ov123_0207e68c(arg0, 3, 1);
            return 3;
        }
        pz    = (s32 *) &sa;
        pz[0] = 0;
        pz[1] = 0;
        sa.b  = 2;
        if (func_ov123_0207aec0(M2C_FIELD(temp_r4, s32 *, 0x204), &sa, 8) == -1) {
            func_ov123_0208608c(arg0, 5, &data_ov123_020da654);
            func_ov123_0207e68c(arg0, 3, 1);
            return 3;
        }
        if (func_ov123_0207ae60(M2C_FIELD(temp_r4, s32 *, 0x204), 5) == -1) {
            func_ov123_0208608c(arg0, 5, &data_ov123_020da67c);
            func_ov123_0207e68c(arg0, 3, 1);
            return 3;
        }
        sp8 = 8;
        if (func_ov123_0207acf4(M2C_FIELD(temp_r4, s32 *, 0x204), &sa, &sp8) == -1) {
            func_ov123_0208608c(arg0, 5, &data_ov123_020da6a8);
            func_ov123_0207e68c(arg0, 3, 1);
            return 3;
        }
        M2C_FIELD(temp_r4, s32 *, 0x208) = (s32) sa.c;
        goto block_13;
    }
    M2C_FIELD(temp_r4, s32 *, 0x204) = -1;
    M2C_FIELD(temp_r4, s32 *, 0x208) = 0;
block_13:
    M2C_FIELD(temp_r4, s32 *, 0x1D4) = func_ov123_0207af50(2, 1, 0);
    temp_r0_2                        = M2C_FIELD(temp_r4, s32 *, 0x1D4);
    if (temp_r0_2 == -1) {
        func_ov123_0208608c(arg0, 5, &data_ov123_020da5f8);
        func_ov123_0207e68c(arg0, 3, 1);
        return 3;
    }
    if (func_ov123_0207b314(temp_r0_2, 0) == 0) {
        func_ov123_0208608c(arg0, 5, &data_ov123_020da620);
        func_ov123_0207e68c(arg0, 3, 1);
        return 3;
    }
    temp_r0_3 = func_ov123_02073aec(&data_ov123_020da324);
    if (temp_r0_3 == NULL) {
        func_ov123_0208608c(arg0, 5, &data_ov123_020da6d8);
        func_ov123_0207e68c(arg0, 3, 1);
        return 3;
    }
    pz        = (s32 *) &sa;
    pz[0]     = 0;
    pz[1]     = 0;
    sa.b      = 2;
    temp_r0_4 = **M2C_FIELD(temp_r0_3, s32 ***, 0xC);
    sa.d      = temp_r0_4;
    if (temp_r0_4 == 0) {
        func_02020d04(&data_ov123_020da70c, &data_ov123_020da3c4, 0, 0x90);
    }
    sa.c = 0xCC74;
    if (func_ov123_0207ae7c(M2C_FIELD(temp_r4, s32 *, 0x1D4), &sa, 8) == -1) {
        temp_r0_5 = func_ov123_0207acc0(M2C_FIELD(temp_r4, s32 *, 0x1D4));
        if ((temp_r0_5 != -6) && (temp_r0_5 != -0x1A) && (temp_r0_5 != -0x4C)) {
            func_ov123_0208608c(arg0, 5, &data_ov123_020da72c);
            func_ov123_0207e68c(arg0, 3, 1);
            return 3;
        }
    }
    M2C_FIELD(arg1, s32 *, 0x14)     = 1;
    M2C_FIELD(temp_r4, s32 *, 0x1D8) = 1;
    return 0;
}
