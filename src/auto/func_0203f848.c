#include "m2c.h"

M2C_UNK OSi_ReferSymbol(s32);                         /* extern */
extern M2C_UNK OSi_ThreadInfo;

void func_0203f848(s8 arg0) {
    void *temp_r0;

    OSi_ReferSymbol(0x02000C1C);
    temp_r0 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 9) = arg0;
    }
}
