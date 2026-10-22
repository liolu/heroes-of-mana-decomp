/* compiler: 2.0/sp1p5 -profile */
extern void OS_FreeToHeap(int, int);
extern int deleteComObjByComnoRect(void *, int, int);
extern unsigned short *ReadShipsCompFile(int, int, unsigned int *);
extern void *data_ov109_020ea340;

int DeleteIconListWinInShip(void) {
    unsigned int sp0;
    short *p;
    int i;
    unsigned short *src;
    unsigned short *base;
    int flags;
    flags = *(int *) data_ov109_020ea340;
    if ((unsigned int) (flags << 29) >> 31 != 0) {
        *(int *) data_ov109_020ea340                     = flags & ~4;
        src                                              = ReadShipsCompFile(2, 3, &sp0);
        base                                             = src;
        i                                                = 0;
        *((unsigned char *) data_ov109_020ea340 + 0x34E) = (*((unsigned char *) data_ov109_020ea340 + 0x34E) & ~1) | 1;
        p                                                = *(short **) ((unsigned char *) data_ov109_020ea340 + 0x350);
        if ((int) (sp0 + (sp0 >> 31)) >> 1 > 0) {
            do {
                if (*src & 0x3FF) {
                    *p = 0;
                }
                i += 1;
                src += 1;
                p += 1;
            } while (i < (int) sp0 / 2);
        }
        if (base != 0) {
            OS_FreeToHeap(0, -1);
        }
        return deleteComObjByComnoRect((unsigned char *) data_ov109_020ea340 + 0x3C, 0xFF05, 0xFF31);
    }
    return flags;
}
