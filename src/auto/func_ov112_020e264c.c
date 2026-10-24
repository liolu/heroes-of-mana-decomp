typedef struct {
    unsigned char pad[0x200];
    unsigned short id;
    unsigned short f : 2;
    unsigned short g : 14;
} E;
extern unsigned char data_ov112_020ec580[];
extern E data_ov112_020ed784[];
int func_ov112_020e264c(void) {
    int i;
    if (data_ov112_020ec580[6] != 0) {
        return 1;
    }
    for (i = 0; i < 11; i++) {
        E *e = &data_ov112_020ed784[i];
        if (e->id != 0xFFFF) {
            switch (e->f) {
                case 1:
                case 2:
                    return 1;
            }
        }
    }
    return 0;
}
