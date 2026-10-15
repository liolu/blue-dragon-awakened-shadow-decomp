#include "m2c.h"

M2C_UNK gti2SendPong();                            /* extern */

void gti2HandlePing(void) {
    gti2SendPong();
}
