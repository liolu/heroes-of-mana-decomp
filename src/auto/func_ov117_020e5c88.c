typedef unsigned int u32;
typedef int s32;
extern u32 data_ov117_020f0f30[];
s32 func_ov117_020e5c88(s32 arg0, u32 *arg1) {
    s32 var_r0;
    var_r0 = 0;
    if (arg0 == 0x34) {
        if (((data_ov117_020f0f30[0x24] << 0x16) >> 0x18) == 0x54) {
            var_r0 = 0x64;
        }
        switch ((*arg1 << 0x12) >> 0x1C) {
            case 0:
                return var_r0 + 0x69;
            case 1:
                return var_r0 + 0x69;
            case 2:
                return var_r0 + 0x6E;
            case 3:
                return var_r0 + 0x6A;
            case 4:
                return var_r0 + 0x6B;
            case 5:
                return var_r0 + 0x6D;
            case 6:
                return var_r0 + 0x6C;
            case 7:
                return var_r0 + 0x68;
            default:
                return var_r0 + 0x69;
        }
    } else {
        if (((data_ov117_020f0f30[0x24] << 0x16) >> 0x18) == 0x55) {
            var_r0 = 0x64;
        }
        switch ((*arg1 << 8) >> 0x1D) {
            case 0:
                return var_r0 + 0x6F;
            case 1:
                return var_r0 + 0x70;
            case 2:
                return var_r0 + 0x72;
            case 3:
                return var_r0 + 0x71;
            case 4:
                return var_r0 + 0x6F;
            case 5:
                return var_r0 + 0x72;
            default:
                return var_r0 + 0x6F;
        }
    }
}
