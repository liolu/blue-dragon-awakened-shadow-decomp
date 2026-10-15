#include "m2c.h"

M2C_UNK CPSi_SocWrite2(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
extern M2C_UNK OSi_ThreadInfo;

void CPS_SocFlush(void) {
    s32 temp_r1;
    void *temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r4 != NULL) {
        temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x60);
        if (temp_r1 != 0) {
            CPSi_SocWrite2(M2C_FIELD(temp_r4, s32 *, 0x5C), temp_r1, 0, 0);
            M2C_FIELD(temp_r4, s32 *, 0x60) = 0;
        }
    }
}
