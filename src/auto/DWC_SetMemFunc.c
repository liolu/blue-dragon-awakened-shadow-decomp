#include "m2c.h"

extern M2C_UNK s_free;

void DWC_SetMemFunc(s32 arg0, s32 arg1) {
    M2C_FIELD(&s_free, s32 *, 4) = arg0;
    M2C_FIELD(&s_free, s32 *, 0) = arg1;
}
