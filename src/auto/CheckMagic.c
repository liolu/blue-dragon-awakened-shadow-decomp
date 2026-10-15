#include "m2c.h"

s32 memcmp(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK NNMagicData;

s32 CheckMagic(M2C_UNK arg0) {
    if (memcmp(arg0, &NNMagicData, 6) == 0) {
        return 1;
    }
    return 0;
}
