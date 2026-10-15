#include "m2c.h"

extern M2C_UNK SOCLiYieldWait;

void SOCLi_DhcpTimeout(void) {
    M2C_FIELD(&SOCLiYieldWait, s32 *, 8) = (s32) (M2C_FIELD(&SOCLiYieldWait, s32 *, 8) | 2);
}
