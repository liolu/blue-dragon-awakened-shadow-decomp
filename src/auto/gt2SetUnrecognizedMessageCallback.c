#include "m2c.h"

void gt2SetUnrecognizedMessageCallback(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
}
