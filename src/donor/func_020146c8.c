/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205f2e0 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/math/math_sha1.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned char u8;
typedef int s32;
typedef struct UnkSha1Context {
    u32 unk_00[5];
    u32 unk_14;
    u32 unk_18;
    s32 unk_1c;
    u8 unk_20[64];
    u32 unk_60[2];
} UnkSha1Context;
typedef void (*UnkSha1BlockFunc)(UnkSha1Context *context, const void *data, u32 len);
extern UnkSha1BlockFunc data_02035c9c;
extern void func_020102b0(u32 value, void *dest, u32 size);
extern void func_020146c8(UnkSha1Context *context, u8 *digest);
extern UnkSha1BlockFunc data_02035c9c;
void func_020146c8(UnkSha1Context *context, u8 *digest) {
    u32 *const words = (u32 *) context->unk_20;
    s32 used         = context->unk_1c;
    s32 i            = used >> 2;

    if ((used & 3) == 0) {
        words[i] = 0;
    }
    {
        u8 *const bytes = context->unk_20;
        bytes[used++]   = 0x80;
        while (used & 3) {
            bytes[used++] = 0;
        }
        i++;

        if (context->unk_1c >= 56) {
            for (; i < 16; i++) {
                words[i] = 0;
            }
            data_02035c9c(context, words, 64);
            i = 0;
        }
        for (; i < 14; i++) {
            words[i] = 0;
        }

        {
            const u32 low = context->unk_14;
            bytes[63]     = (u8) (low >> 0);
            bytes[62]     = (u8) (low >> 8);
            bytes[61]     = (u8) (low >> 16);
            bytes[60]     = (u8) (low >> 24);
        }
        {
            const u32 high = context->unk_18;
            bytes[59]      = (u8) (high >> 0);
            bytes[58]      = (u8) (high >> 8);
            bytes[57]      = (u8) (high >> 16);
            bytes[56]      = (u8) (high >> 24);
        }
        data_02035c9c(context, words, 64);
    }

    {
        const u32 h = context->unk_00[0];
        digest[0]   = (u8) (h >> 24);
        digest[1]   = (u8) (h >> 16);
        digest[2]   = (u8) (h >> 8);
        digest[3]   = (u8) (h >> 0);
    }
    {
        const u32 h = context->unk_00[1];
        digest[4]   = (u8) (h >> 24);
        digest[5]   = (u8) (h >> 16);
        digest[6]   = (u8) (h >> 8);
        digest[7]   = (u8) (h >> 0);
    }
    {
        const u32 h = context->unk_00[2];
        digest[8]   = (u8) (h >> 24);
        digest[9]   = (u8) (h >> 16);
        digest[10]  = (u8) (h >> 8);
        digest[11]  = (u8) (h >> 0);
    }
    {
        const u32 h = context->unk_00[3];
        digest[12]  = (u8) (h >> 24);
        digest[13]  = (u8) (h >> 16);
        digest[14]  = (u8) (h >> 8);
        digest[15]  = (u8) (h >> 0);
    }
    {
        const u32 h = context->unk_00[4];
        digest[16]  = (u8) (h >> 24);
        digest[17]  = (u8) (h >> 16);
        digest[18]  = (u8) (h >> 8);
        digest[19]  = (u8) (h >> 0);
    }

    context->unk_1c = 0;
    func_020102b0(0, &context, sizeof(context));
}
