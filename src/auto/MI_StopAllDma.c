#include "m2c.h"

M2C_UNK MI_StopDma(M2C_UNK);                     /* extern */

void MI_StopAllDma(void) {
    MI_StopDma(0);
    MI_StopDma(1);
    MI_StopDma(2);
    MI_StopDma(3);
}
