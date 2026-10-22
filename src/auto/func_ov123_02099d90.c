/* compiler: 1.2/sp3 */
typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned char u8;
typedef struct {
    u64 s;
    u64 m;
    u64 a;
} Rng;
extern void OS_GetMacAddress(u64 *);
extern u64 func_0200f510(void);
extern Rng data_ov123_020e1730;

u32 func_ov123_02099d90(u32 arg0) {
    u64 mac;
    u64 t;
    if (data_ov123_020e1730.s == 0 && data_ov123_020e1730.m == 0 && data_ov123_020e1730.a == 0) {
        OS_GetMacAddress(&mac);
        t                     = func_0200f510();
        mac                   = ((mac >> 24) & 0xFFFFFF) | (t << 24);
        data_ov123_020e1730.s = mac;
        data_ov123_020e1730.m = 0x5D588B656C078965ULL;
        data_ov123_020e1730.a = 0x269EC3;
    }
    data_ov123_020e1730.s = data_ov123_020e1730.m * data_ov123_020e1730.s + data_ov123_020e1730.a;
    if (arg0 == 0) {
        return (u32) (data_ov123_020e1730.s >> 32);
    }
    return (u32) (((data_ov123_020e1730.s >> 32) * arg0) >> 32);
}
