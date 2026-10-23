/* compiler: 1.2/sp3 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct Rec {
    u16 a;
    u16 b;
    u16 c;
    u16 d;
} Rec;
typedef struct Tbl {
    u8 b[14];
} Tbl;
extern Tbl data_ov123_020d8038;
extern Rec data_ov123_020d80cc[];
extern u8 data_ov123_020e4664;
extern u8 data_ov123_020e466c;
extern void func_ov123_020ae754(int, u16, u16, u16);
void func_ov123_020bb330(void) {
    Tbl tbl = data_ov123_020d8038;
    int t   = tbl.b[data_ov123_020e4664];
    Rec r;
    if (t >= 3) {
        func_ov123_020ae754(3, data_ov123_020d80cc[t].a, data_ov123_020d80cc[t].c, data_ov123_020d80cc[t].b);
        return;
    }
    r = data_ov123_020d80cc[t];
    r.b += data_ov123_020e466c * 0x1d;
    func_ov123_020ae754(1, r.a, r.c, r.b);
}
