#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

void CPS_SocUnRegister(void) {
    M2C_FIELD(M2C_FIELD(&OSi_ThreadInfo, void **, 4), s32 *, 0xA4) = 0;
}
