/* compiler: 1.2/sp2p3 */
extern unsigned char data_ov123_020df1b0;
extern unsigned char data_ov123_020df1b4[];
void func_ov123_02069444(int a) {
    unsigned char v;
    unsigned char c;
    if (a & 2) {
        v = a >> 2;
    } else {
        v = (a >> 2) + 0x19;
    }
    c                           = data_ov123_020df1b0;
    data_ov123_020df1b4[c % 16] = v;
    if (c < 16) {
        data_ov123_020df1b0 = c + 1;
    } else {
        data_ov123_020df1b0 = (c + 1) % 16 + 16;
    }
}
