#include "m2c.h"

typedef struct Rec {
    u8 b[0xF0];
} Rec;

extern s32 memcmp(void *, void *, s32);
extern void DWCi_BACKUPlConvMaskAddr(u8, void *);
extern u8 data_ov001_02192e84[];
extern u8 *data_ov001_02196c48;

void func_ov001_02180eb8(s8 arg0) {
    u8 *base;
    u8 *rec;
    base                    = data_ov001_02196c48;
    rec                     = base + (arg0 << 8);
    *(Rec *) (base + 0x400) = *(Rec *) rec;
    base[0x4F4]             = arg0;
    if (memcmp(rec + 0xC0, data_ov001_02192e84, 4) != 0) {
        data_ov001_02196c48[0x4F5] = 0;
    } else {
        data_ov001_02196c48[0x4F5] = 1;
    }
    if ((memcmp(rec + 0xC8, data_ov001_02192e84, 4) != 0) || (memcmp(rec + 0xCC, data_ov001_02192e84, 4) != 0)) {
        data_ov001_02196c48[0x4F6] = 0;
    } else {
        data_ov001_02196c48[0x4F6] = 1;
    }
    DWCi_BACKUPlConvMaskAddr(rec[0xD0], data_ov001_02196c48 + 0x4F0);
}
