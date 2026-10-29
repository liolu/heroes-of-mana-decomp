/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_ov123_02094b28 from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct DWCstAccLoginId {
    u32 id_data;
    u32 userid_lo32;
    u32 playerid;
} DWCAccLoginId;
extern u64 func_ov123_02094b28(const DWCAccLoginId *data);
static inline u32 DWCi_Acc_GetMaskBits(u32 data, u32 shift, u32 mask) {
    return ((data >> shift) & mask);
}
u64 func_ov123_02094b28(const DWCAccLoginId *userdata) {
    u32 hi32;

    hi32 = DWCi_Acc_GetMaskBits(userdata->id_data, 0, (((1u << 11) - 1)));
    return (u64) hi32 << 32 | userdata->userid_lo32;
}
