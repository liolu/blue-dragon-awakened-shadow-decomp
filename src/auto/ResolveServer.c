#include "m2c.h"

M2C_UNK OS_SNPrintf(M2C_UNK *, M2C_UNK, M2C_UNK *, M2C_UNK *, s32); /* extern */
M2C_UNK NameToIp(M2C_UNK *);                   /* extern */
extern M2C_UNK data_020fbc80;
extern M2C_UNK __GSIACGamename;

void ResolveServer(M2C_UNK *arg0, s32 arg1) {
    u8 sp4[64];
    M2C_UNK *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        OS_SNPrintf(sp4, 0x40, &data_020fbc80, &__GSIACGamename, arg1);
        var_r0 = sp4;
    }
    NameToIp(var_r0);
}
