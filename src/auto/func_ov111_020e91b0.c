typedef struct Ent {
    unsigned int lo : 8;
    unsigned int hi : 24;
    unsigned short h;
    unsigned short pad;
    int rest[4];
} Ent;
typedef struct Rec {
    unsigned char p0[0x34];
    Ent e[8];
    unsigned char p1[0x10];
    int idx;
    unsigned char p2[0x500 - 0x108];
    unsigned char pad500[0xC];
    unsigned short h50c;
    unsigned char p3[0x510 - 0x50E];
} Rec;
typedef struct Gl {
    unsigned short cnt;
    unsigned short pad;
    Rec *base;
} Gl;
extern Gl data_ov111_020f13c0;
extern Rec *data_ov111_020f1bd8;
extern short func_ov111_020e5cb4(int, int);
extern void func_ov111_020e9070(int);

void func_ov111_020e91b0(void) {
    int i;
    int j;
    int off;
    unsigned int best;
    unsigned int v;
    i = 0;
    if ((int) data_ov111_020f13c0.cnt <= 0) {
        return;
    }
    off = 0;
    do {
        data_ov111_020f1bd8 = (Rec *) ((unsigned char *) data_ov111_020f13c0.base + off);
        best                = 0xF;
        for (j = 0; j < 8; j++) {
            v = data_ov111_020f1bd8->e[j].lo;
            if (best >= v) {
                data_ov111_020f1bd8->idx = j;
                best                     = v;
            }
        }
        if (best == 0xF) {
            data_ov111_020f1bd8->e[0].h  = func_ov111_020e5cb4(i, 1);
            data_ov111_020f1bd8->e[0].lo = 7;
            data_ov111_020f1bd8->idx     = 0;
        }
        data_ov111_020f1bd8->h50c = data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].h;
        func_ov111_020e9070(0xFF);
        i++;
        off += 0x510;
        data_ov111_020f1bd8->e[data_ov111_020f1bd8->idx].h = data_ov111_020f1bd8->h50c;
    } while (i < data_ov111_020f13c0.cnt);
}
