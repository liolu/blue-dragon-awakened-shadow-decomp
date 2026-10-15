#include "m2c.h"

extern s32 stDwcLastError;

s32 DWCi_IsError(void) {
    if (stDwcLastError != 0) {
        return 1;
    }
    return 0;
}
