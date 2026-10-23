/* compiler: 2.0/sp1p5 -profile */
void ChgRaceIconOffOne(unsigned char *a) {
    a[0x3e] |= 0x80;
    *(unsigned short *) (a + 0x36) = 0x8000;
}
