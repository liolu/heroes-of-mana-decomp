/* compiler: 1.2/sp3 -profile */
typedef struct {
    unsigned f : 4;
    unsigned g : 28;
    unsigned h;
} E;
int GetNowBuildHouseKazu(unsigned char *p) {
    E *q;
    int n;
    int i;
    n = 0;
    i = 0;
    q = (E *) (p + 0x21C);
    do {
        i++;
        if (q->f) {
            n++;
        }
        q++;
    } while (i < 9);
    return n;
}
