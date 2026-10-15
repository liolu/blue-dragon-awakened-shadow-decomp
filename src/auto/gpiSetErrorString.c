#include "m2c.h"

M2C_UNK strzcpy(s32, M2C_UNK, M2C_UNK);       /* extern */

void gpiSetErrorString(s32 *arg0, M2C_UNK arg1) {
    strzcpy(*arg0, arg1, 0x100);
}
