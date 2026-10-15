#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

void CPS_SocUse(void) {
    void *temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), void **, 0xA4);
    if (temp_r1 == NULL) {
        return;
    }
    M2C_FIELD(temp_r1, void **, 0)  = (void *) M2C_FIELD(&OSi_ThreadInfo, void **, 4);
    M2C_FIELD(temp_r1, s8 *, 8)     = 0;
    M2C_FIELD(temp_r1, s32 *, 0x44) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x60) = 0;
    M2C_FIELD(temp_r1, s32 *, 0x38) = 0;
}
