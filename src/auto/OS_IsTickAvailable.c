#include "m2c.h"

extern u16 OSi_UseTick;

u16 OS_IsTickAvailable(void) {
    return OSi_UseTick;
}
