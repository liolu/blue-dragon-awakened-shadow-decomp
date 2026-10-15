#include "m2c.h"

M2C_UNK gsifree(s32);                         /* extern */

void gpiFreeMessage(s32 *arg0) {
    gsifree(*arg0);
    *arg0 = 0;
}
