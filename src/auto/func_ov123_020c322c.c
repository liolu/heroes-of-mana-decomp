/* compiler: 1.2/sp3 */
int OS_SPrintf(int, unsigned char *, int, int, int, int);
extern unsigned char data_ov123_020de2ec;
extern unsigned char *data_ov123_020e46d0;
void func_ov123_020c322c(int arg0) {
    unsigned char *p = data_ov123_020e46d0;
    unsigned char *q = p + 0x4C4;
    OS_SPrintf(arg0, &data_ov123_020de2ec, *q, q[1], q[2], q[3]);
}
