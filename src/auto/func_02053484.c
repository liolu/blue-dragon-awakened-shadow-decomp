#include "m2c.h"

M2C_UNK OS_SNPrintf(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
M2C_UNK DWC_SetCommonKeyValueString(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK DWC_AddCommonKeyValueString(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK); /* extern */
s32 func_020503c0(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
void *func_02059234();                              /* extern */
extern M2C_UNK data_020fa790;
extern M2C_UNK data_020fa79c;
extern M2C_UNK data_020fa7d0;
extern M2C_UNK data_020fa7d4;

s32 func_02053484(void) {
    u8 sp20[12];
    u8 sp0[32];

    if (M2C_FIELD(func_02059234(), u8 *, 0x15) != 2) {
        return 0;
    }
    OS_SNPrintf(sp20, 0xC, &data_020fa790, M2C_FIELD(func_02059234(), u8 *, 0x16) + 1);
    DWC_SetCommonKeyValueString(&data_020fa7d0, sp20, sp0, 0x2F);
    OS_SNPrintf(sp20, 0xC, &data_020fa790, M2C_FIELD(func_02059234(), u8 *, 0xD) + 1);
    DWC_AddCommonKeyValueString(&data_020fa7d4, sp20, sp0, 0x2F);
    OS_SNPrintf(sp20, 0xC, &data_020fa790, 3);
    DWC_AddCommonKeyValueString(&data_020fa79c, sp20, sp0, 0x2F);
    return func_020503c0(6, sp0, 0);
}
