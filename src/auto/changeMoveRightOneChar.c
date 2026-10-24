/* compiler: 2.0/sp1p5 -profile */
typedef struct {
    int x;
    int pad;
    int pad2;
    unsigned int f;
    unsigned char p[0x60];
    unsigned short c;
} O;
void changeMoveRightOneChar(O *o) {
    unsigned short c = o->c;
    if (c != 0xff30 && c >= 0xff08 && c <= 0xff32) {
        o->x += 8;
        if (o->x > 0xe0) {
            o->f &= ~1;
        }
    }
}
