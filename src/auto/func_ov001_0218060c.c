#include "m2c.h"

typedef struct Blk {
    s32 a[17];
} Blk;

void MIi_CpuClear16(s32, void *, s32);
s16 WM_GetDispersionScanPeriod(void);
s32 WM_Initialize(void *, void *, s32);
s32 WM_ReadStatus(void *);
s32 func_ov001_021806d8(void);
extern Blk data_ov001_02192e40;
extern u8 *data_ov001_02196c44;
extern void func_ov001_02180804(void);

s32 func_ov001_0218060c(void) {
    u8 *b;
    MIi_CpuClear16(0, data_ov001_02196c44 + 0x1300, 0x348);
    if (WM_Initialize(data_ov001_02196c44, func_ov001_02180804, 3) != 2) {
        return 0;
    }
    do {
        WM_ReadStatus(data_ov001_02196c44 + 0x168c);
        b = data_ov001_02196c44;
    } while (*(u16 *) (b + 0x168c) != 2);
    *(Blk *) (b + 0x1648)                   = data_ov001_02192e40;
    *(void **) (b + 0x1648)                 = b + 0xf00;
    *(s16 *) (data_ov001_02196c44 + 0x1650) = WM_GetDispersionScanPeriod();
    if (func_ov001_021806d8() != 0) {
        return 1;
    }
    return 0;
}
