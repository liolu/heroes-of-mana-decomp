/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207d268 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/wm/wm_ap.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
extern void func_0200e7e8(void *ptr, u32 size);
typedef void (*UnkWmCallbackFunc)(void *arg);
extern void func_020184e0(u32 id, UnkWmCallbackFunc callback);
extern u32 func_02018550(u16 id, u16 paramNum, ...);
extern u32 func_020186e0(s32 paramNum, ...);
extern BOOL func_020195f4(void *param);
typedef struct UnkWmParentParam {
    u16 *userGameInfo;
    u16 userGameInfoLength;
    u8 unk_06[0xe];
    u16 KS_Flag;
    u8 unk_16[2];
    u16 beaconPeriod;
    u8 unk_1a[0x18];
    u16 channel;
    u16 parentMaxSize;
    u16 childMaxSize;
    u8 unk_38[8];
} UnkWmParentParam;
u32 func_02019518(UnkWmCallbackFunc callback, UnkWmParentParam *param) {
    u32 result = func_020186e0(1, 2);

    if (result != 0) {
        return result;
    }
    if (param == 0) {
        return 6;
    }
    if (param->userGameInfoLength != 0 && param->userGameInfo == 0) {
        return 6;
    }
    if (param->parentMaxSize + (param->KS_Flag ? 42 : 0) > 512 || param->childMaxSize + (param->KS_Flag ? 6 : 0) > 512) {
        return 6;
    }

    func_020195f4(param);
    func_020184e0(7, callback);
    func_0200e7e8(param, sizeof(UnkWmParentParam));
    if (param->userGameInfoLength != 0) {
        func_0200e7e8(param->userGameInfo, param->userGameInfoLength);
    }
    result = func_02018550(7, 1, param);
    if (result != 0) {
        return result;
    }
    return 2;
}
BOOL func_020195f4(void *param_);
