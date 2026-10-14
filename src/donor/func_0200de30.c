/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_SelectThread from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_SelectThread.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
struct Thread02001ff0 {
    char _0[0x64];
    int field_64;
    struct Thread02001ff0 *next;
};
struct Globals02001ff0 {
    char _0[0x2c];
    struct Thread02001ff0 *list;
};
extern struct Globals02001ff0 data_0203863c;
void *func_0200de30(void) {
    struct Thread02001ff0 *t = data_0203863c.list;
    while (t != 0 && t->field_64 != 1) {
        t = t->next;
    }
    return t;
}
