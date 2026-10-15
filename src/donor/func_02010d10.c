/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_PushCommand from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/SND_PushCommand.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_0200fa98(void);
extern void func_0200faac(int state);
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr sFreeList;
void func_02010d10(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = func_0200fa98();
    tail  = sFreeList.reservedTail;

    if (tail == 0) {
        sFreeList.reservedHead = command;
        sFreeList.reservedTail = command;
    } else {
        tail->next             = command;
        sFreeList.reservedTail = command;
    }
    command->next = 0;
    func_0200faac(state);
}
