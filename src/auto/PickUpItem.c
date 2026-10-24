/* compiler: 1.2/sp3 -profile */
typedef struct {
    char p[0x30];
    unsigned char *q;
} G;
extern G *data_0203673c;
void PickUpItem(unsigned char item) {
    unsigned char *q = data_0203673c->q;
    unsigned char *p = q + 1;
    int i;
    for (i = 1; i < 4; i++, p++) {
        if (p[8] == 0) {
            (q + i)[8] = item;
            break;
        }
    }
}
