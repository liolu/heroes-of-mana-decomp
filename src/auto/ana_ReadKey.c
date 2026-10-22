/* compiler: 2.0/sp1p5 -profile */

extern unsigned char data_ov000_02051544[];
void ana_ReadKey(void) {
    unsigned short temp_r0;
    temp_r0 = ((*(volatile unsigned short *) 0x04000130 | *(volatile unsigned short *) 0x027FFFA8) ^ 0x2FFF) & 0x2FFF;
    *(short *) (*(unsigned char **) (data_ov000_02051544 + 8) + 0x146) =
        (short) ((*(unsigned short *) (*(unsigned char **) (data_ov000_02051544 + 8) + 0x148) ^ temp_r0) & temp_r0);
    *(unsigned short *) (*(unsigned char **) (data_ov000_02051544 + 8) + 0x148) = temp_r0;
}
