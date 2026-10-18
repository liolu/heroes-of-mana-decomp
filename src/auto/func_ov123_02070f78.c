/* compiler: 1.2/sp2p3 */
typedef int s32;
typedef unsigned char u8;
extern void OS_InitMessageQueue(void *, s32, s32);
extern void func_ov123_02070e64(s32);
extern u8 *data_ov123_020e0a00;
extern s32 data_ov123_020e0a44;
extern u8 data_ov123_020e0a48;
s32 func_ov123_02070f78(s32 arg0) {
    s32 temp_r0, t2;
    s32 temp_r5;
    s32 var_r4;
    s32 var_r5;
    var_r4  = arg0;
    temp_r5 = ((var_r4 * 4) + 3) & ~3;
    t2      = ((var_r4 * 0x2C) + 3) & ~3;
    temp_r0 = (*(s32(**)(s32))(data_ov123_020e0a00 + 0x18))(t2 + temp_r5);
    if (temp_r0 == 0) {
        return -1;
    }
    OS_InitMessageQueue(&data_ov123_020e0a48, temp_r0, var_r4);
    var_r5 = temp_r0 + temp_r5;
    if (var_r4 > 0) {
        do {
            func_ov123_02070e64(var_r5);
            var_r4 -= 1;
            var_r5 += 0x2C;
        } while (var_r4 > 0);
    }
    data_ov123_020e0a44 = temp_r0;
    return 0;
}
