#include "m2c.h"

M2C_UNK OS_CreateThread(void *, M2C_UNK *, M2C_UNK, void *, s32, s32); /* extern */
M2C_UNK OS_KillThread(void *, M2C_UNK);             /* extern */
s32 func_0200dd3c(void *);                          /* extern */
M2C_UNK func_0200dfd8(void *, M2C_UNK);             /* extern */
M2C_UNK func_ov123_020cc97c(M2C_UNK, M2C_UNK);      /* extern */
s32 func_ov123_020ccc9c();                          /* extern */
M2C_UNK func_ov123_020cd050();                      /* extern */
M2C_UNK func_ov123_020cd0e8(void *);                /* extern */
extern void *data_ov123_020e47a0;
extern M2C_UNK func_ov123_020cd13c;

void func_ov123_020cccd0(s32 arg0, s16 arg1, s32 arg2) {
    if (data_ov123_020e47a0 == NULL) {
        func_ov123_020cc97c(6, -0x32);
        return;
    }
    if (arg0 == 0) {
        func_ov123_020cc97c(6, -0x32);
        return;
    }
    if (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) & ~0xFFFF) {
        func_ov123_020cc97c(6, -0x32);
        return;
    }
    if (func_ov123_020ccc9c() == 0) {
        func_ov123_020cc97c(6, -0x32);
        return;
    }
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x1C)   = arg0;
    M2C_FIELD(data_ov123_020e47a0, s16 *, 0x20)   = arg1;
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0x19E4) = arg2;
    if (func_0200dd3c(data_ov123_020e47a0 + 0x920) == 0) {
        OS_KillThread(data_ov123_020e47a0 + 0x920, 0);
    }
    if (func_0200dd3c(data_ov123_020e47a0 + 0x860) == 0) {
        OS_KillThread(data_ov123_020e47a0 + 0x860, 0);
    }
    if ((s32) M2C_FIELD(data_ov123_020e47a0, s32 *, 0x2C) >= 0) {
        func_ov123_020cd050();
    }
    OS_CreateThread(data_ov123_020e47a0 + 0x860, &func_ov123_020cd13c, 0, data_ov123_020e47a0 + 0x11E4, 0x800,
                    (s32) M2C_FIELD(data_ov123_020e47a0, u8 *, 0x9E0));
    func_0200dfd8(data_ov123_020e47a0 + 0x860, 0x80);
    func_ov123_020cd0e8(data_ov123_020e47a0 + 0x860);
    M2C_FIELD(data_ov123_020e47a0, s32 *, 0) = (s32) (M2C_FIELD(data_ov123_020e47a0, s32 *, 0) | 2);
}
