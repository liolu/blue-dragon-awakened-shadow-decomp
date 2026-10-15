#include "m2c.h"

void SBServerSetFlags(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x15) = arg1;
}
