#include "m2c.h"

void *NNSi_G3dGetTexPatAnmTexNameByIdx(void *arg0, u32 arg1) {
    if ((arg0 != NULL) && (arg1 < (u32) M2C_FIELD(arg0, u8 *, 6))) {
        return arg0 + M2C_FIELD(arg0, u16 *, 8) + (arg1 * 0x10);
    }
    return NULL;
}
