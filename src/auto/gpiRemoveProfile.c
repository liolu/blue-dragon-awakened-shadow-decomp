#include "m2c.h"

M2C_UNK TableRemove(s32);                         /* extern */

void gpiRemoveProfile(void **arg0) {
    TableRemove(M2C_FIELD(*arg0, s32 *, 0x5C8));
}
