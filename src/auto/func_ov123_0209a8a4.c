/* compiler: 1.2/sp3 */
void *func_ov123_02088550();
extern unsigned int data_ov123_020e1750[];
int func_ov123_0209a8a4(int arg0) {
    int i;
    for (i = 0; i < 0x20; i++) {
        if (data_ov123_020e1750[i] != 0 && arg0 == ((unsigned char *) func_ov123_02088550())[1]) {
            return 1;
        }
    }
    return 0;
}
