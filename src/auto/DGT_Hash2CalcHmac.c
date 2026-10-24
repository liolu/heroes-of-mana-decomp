/* compiler: 1.2/sp2p3 */
typedef unsigned char u8;

void DGT_Hash2Reset(void *);
void DGT_Hash2SetSource(void *, void *, int);
void DGT_Hash2GetDigest(void *, void *);

void DGT_Hash2CalcHmac(void *out, void *msg, int msglen, u8 *key, int keylen) {
    u8 ipad[0x40];
    u8 opad[0x40];
    u8 digest[0x14];
    u8 ctx[0x68];
    u8 *dg;
    u8 *p;
    u8 *q;
    u8 *r;
    int i;

    dg = digest;
    if (out == 0) {
        return;
    }
    if (msg == 0) {
        return;
    }
    if (msglen == 0) {
        return;
    }
    if (key == 0) {
        return;
    }
    if (keylen == 0) {
        return;
    }
    if (keylen > 0x40) {
        DGT_Hash2Reset(ctx);
        DGT_Hash2SetSource(ctx, key, keylen);
        DGT_Hash2GetDigest(ctx, dg);
        keylen = 0x14;
        key    = dg;
    }
    i = 0;
    if (keylen > 0) {
        p = ipad;
        q = opad;
        do {
            i++;
            *p   = *key ^ 0x36;
            *q++ = *key++ ^ 0x5c;
            p++;
        } while (i < keylen);
    }
    if (i < 0x40) {
        r = ipad + i;
        q = opad + i;
        do {
            *r = 0x36;
            i++;
            *q = 0x5c;
            r++;
            q++;
        } while (i < 0x40);
    }
    DGT_Hash2Reset(ctx);
    DGT_Hash2SetSource(ctx, ipad, 0x40);
    DGT_Hash2SetSource(ctx, msg, msglen);
    DGT_Hash2GetDigest(ctx, dg);
    DGT_Hash2Reset(ctx);
    DGT_Hash2SetSource(ctx, opad, 0x40);
    DGT_Hash2SetSource(ctx, dg, 0x14);
    DGT_Hash2GetDigest(ctx, out);
}
