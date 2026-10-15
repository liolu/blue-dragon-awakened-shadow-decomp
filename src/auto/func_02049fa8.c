#include "m2c.h"

M2C_UNK OS_SNPrintf(M2C_UNK *, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 strlen(s32);                             /* extern */
s32 strstr(s32, M2C_UNK *);                  /* extern */
s32 func_0204a7b4(void *, M2C_UNK *, M2C_UNK *);    /* extern */
extern M2C_UNK data_020f94f0;
extern M2C_UNK data_020f94fc;
extern M2C_UNK data_020f9504;
extern M2C_UNK data_020f950c;
extern M2C_UNK data_020f9510;

s32 func_02049fa8(void *arg0) {
    u8 sp0[8];
    s32 temp_r0;

    if (func_0204a7b4(arg0, &data_020f94f0, &data_020f94fc) != 0) {
        return 1;
    }
    temp_r0 = strlen(strstr(M2C_FIELD(arg0, s32 *, 0x19F8), &data_020f9504) + 4);
    if (temp_r0 != 0) {
        OS_SNPrintf(sp0, 7, &data_020f950c, temp_r0);
        if (func_0204a7b4(arg0, &data_020f9510, sp0) != 0) {
            return 1;
        }
    }
    return 0;
}
