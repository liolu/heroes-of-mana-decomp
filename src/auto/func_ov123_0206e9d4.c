/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct Conn {
    s32 f0;
    u8 pad4[4];
    u8 state;
    u8 pad9;
    u16 port;
    u8 pad_c[0xC];
    u16 srcPort;
    u8 pad_1a[2];
    u32 addr;
} Conn;

typedef struct Thr {
    u8 pad[0x68];
    struct Thr *next;
    u8 pad2[0x38];
    Conn *conn;
} Thr;

typedef struct ThrInfo {
    u8 pad[8];
    Thr *head;
} ThrInfo;

typedef struct Hdr {
    u16 a;
    u16 b;
} Hdr;

typedef struct Addr {
    u8 pad[0xC];
    u16 hi;
    u16 lo;
} Addr;

extern ThrInfo OSi_ThreadInfo;

Conn *func_ov123_0206e9d4(Addr *arg0, Hdr *arg1) {
    Conn *c;
    Thr *t;
    s32 a;
    u16 p;
    u16 s;
    u16 q;
    u16 h;
    u16 l;
    for (t = OSi_ThreadInfo.head; t != NULL; t = t->next) {
        c = t->conn;
        if (c != NULL && c->f0 != 0 && c->state == 1) {
            p = arg1->b;
            if (c->port == (u16) ((p >> 8) | (p << 8)) &&
                ((s = c->srcPort, s == 0) || (q = arg1->a, s == (u16) ((q >> 8) | (q << 8)))) &&
                ((a = c->addr, a == 0) ||
                 (h = arg0->hi, l = arg0->lo, a == (((u16) ((h >> 8) | (h << 8)) << 16) | (u16) ((l >> 8) | (l << 8)))))) {
                return c;
            }
        }
    }
    return NULL;
}
