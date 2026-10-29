/* compiler: 1.2/sp2p3 */
/* func_ov123_02094b0c from https://github.com/ntrtwl/NitroDWC libraries/account/src/dwc_account.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long int u64;
typedef struct DWCstAccFriendKey {
    u32 id_data;
    u32 friendkey_lo32;
    u32 friendkey_hi32;
} DWCAccFriendKey;
extern u64 func_ov123_02094b0c(const DWCAccFriendKey *data);
u64 func_ov123_02094b0c(const DWCAccFriendKey *data) {
    return (u64) data->friendkey_hi32 << 32 | data->friendkey_lo32;
}
