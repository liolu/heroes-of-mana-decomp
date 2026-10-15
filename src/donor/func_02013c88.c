/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* FSi_CompareDigest from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/fs/overlay.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkDigestKey {
    const void *key;
    u32 size;
} UnkDigestKey;
extern UnkDigestKey fsi_digest_key_ptr;
extern void DGT_Hash2CalcHmac(void *digest, const void *src, u32 size, const void *key, u32 keySize);
extern void MI_CpuFill8(void *dest, u8 value, u32 count);
extern void MI_CpuCopy8(const void *src, void *dest, u32 count);
extern UnkDigestKey fsi_digest_key_ptr;
BOOL func_02013c88(const u8 *digest, void *src, u32 size) {
    s32 i;
    u8 hash[20];
    u8 key[64];

    MI_CpuFill8(hash, 0, sizeof(hash));
    MI_CpuCopy8(fsi_digest_key_ptr.key, key, fsi_digest_key_ptr.size);
    DGT_Hash2CalcHmac(hash, src, size, key, fsi_digest_key_ptr.size);

    for (i = 0; i < sizeof(hash); i += sizeof(u32)) {
        if (*(u32 *) (hash + i) != *(u32 *) (digest + i)) {
            break;
        }
    }
    return i == sizeof(hash);
}
