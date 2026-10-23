/* compiler: 1.2/sp2p3 -profile */
extern char *data_ov003_020ae0a0[];
extern char data_ov003_020ae10c[];
char *WH_GetWMStateCodeName(unsigned int code) {
    if (code < 0x1b) {
        return data_ov003_020ae0a0[code];
    }
    return data_ov003_020ae10c;
}
