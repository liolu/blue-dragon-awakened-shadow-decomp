#include "m2c.h"

extern s32 data_020e5b58;

s32 OS_GetConsoleType(void) {
    return data_020e5b58 = 0x82000001;
}
