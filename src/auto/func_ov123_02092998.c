/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;
typedef unsigned int u32;
u8 func_ov123_02092998(void *arg0) {
    u8 i;
    u8 r;
    u8 n;
    n = *(u8 *) ((u8 *) arg0 + 0xD12);
    r = 0;
    for (i = 0; i < n; i++) {
        if (((u32) (*(u8 *) ((u8 *) arg0 + i * 4 + 0x447) << 0x18) >> 0x1F) == 0) {
            r = i;
            break;
        }
    }
    return r;
}
