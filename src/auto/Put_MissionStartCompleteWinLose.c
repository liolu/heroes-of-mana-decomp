/* compiler: 2.0/sp1p5 -profile */
typedef struct Tbl {
    int a;
    int pal;
    unsigned char idx;
} Tbl;
typedef struct Icon {
    unsigned char pad[0xC];
    unsigned int f;
} Icon;
extern Tbl *LoadNclNceNcg2Table(int *, int, int);
extern void SetColorRoll(int, int, int, int, int, int, int);
extern unsigned char *SetStatusIcon(int, int, int, int, int, int, int, int, int, int);
extern unsigned char *data_ov000_0205154c;
extern unsigned char *data_ov000_02051548;

void Put_MissionStartCompleteWinLose(int arg) {
    int info[4];
    Tbl *t;
    unsigned char *r;
    info[3] = arg;
    info[0] = 5;
    info[1] = 11;
    info[2] = 1;
    t       = LoadNclNceNcg2Table(info, 0, 4);
    if (t != 0) {
        SetColorRoll(*(int *) (data_ov000_0205154c + 0x160) + (t->idx << 5), t->pal, 5, 11, 1, 1, 6);
        r = SetStatusIcon(0xFFA5, 0, 0x180, 0x60, t->idx, 0, 0x12, (int) data_ov000_02051548 + 0x78C, t->a, 0);
        r[0x3E] |= 0x80;
        *(int *) (r + 0xC) &= ~0x200000;
        *(short *) (r + 0x72) = 0x80;
    }
}
