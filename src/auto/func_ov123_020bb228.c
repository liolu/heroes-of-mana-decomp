/* compiler: 1.2/sp3 */
extern char data_ov123_020e4664, data_ov123_020e466c;
extern unsigned char data_ov123_020d802c[];
extern char func_ov123_020bb664(unsigned char);
extern void func_ov123_020bb330(void);
void func_ov123_020bb228(char a) {
    data_ov123_020e4664 = a;
    data_ov123_020e466c = func_ov123_020bb664(data_ov123_020d802c[a]);
    func_ov123_020bb330();
}
