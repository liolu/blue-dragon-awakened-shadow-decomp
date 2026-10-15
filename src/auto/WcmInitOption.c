#include "m2c.h"

extern void *wcmw;

void WcmInitOption(void) {
    M2C_FIELD(wcmw, s32 *, 0x2264) = 0xAAA082;
}
