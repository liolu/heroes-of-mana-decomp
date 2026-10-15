#include "m2c.h"

s32 FS_SuspendArchive(void *);

M2C_UNK FS_ResumeArchive(void *);
M2C_UNK OS_SleepThread(void *);

s32 func_0200fa98();

M2C_UNK func_0200faac(s32);

s32 FS_UnloadArchiveTables(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 2) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        temp_r0 = FS_SuspendArchive(arg0);
        if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 4) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
        if (var_r1 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x1C) & ~4);
            var_r4                                = M2C_FIELD(arg0, volatile s32 *, 0x44);
            M2C_FIELD(arg0, volatile s32 *, 0x44) = 0;
            M2C_FIELD(arg0, volatile s32 *, 0x2C) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x3C);
            M2C_FIELD(arg0, volatile s32 *, 0x34) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x40);
            M2C_FIELD(arg0, volatile s32 *, 0x50) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x48);
        }
        if (temp_r0 != 0) {
            FS_ResumeArchive(arg0);
        }
    }
    return var_r4;
}

s32 FS_SuspendArchive(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r5;

    temp_r4 = func_0200fa98();
    if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    if (var_r5 != 0) {
        if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x10) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        temp_r0 = M2C_FIELD(arg0, volatile s32 *, 0x1C);
        if (var_r0_2 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (temp_r0 | 0x40);
            do {
                OS_SleepThread(arg0 + 0x14);
                if (M2C_FIELD(arg0, volatile s32 *, 0x1C) & 0x40) {
                    var_r0_3 = 1;
                } else {
                    var_r0_3 = 0;
                }
            } while (var_r0_3 != 0);
        } else {
            M2C_FIELD(arg0, volatile s32 *, 0x1C) = (s32) (temp_r0 | 8);
        }
    }
    func_0200faac(temp_r4);
    return var_r5;
}
