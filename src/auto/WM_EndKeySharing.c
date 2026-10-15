#include "m2c.h"

M2C_UNK WM_EndDataSharing();                            /* extern */

void WM_EndKeySharing(void) {
    WM_EndDataSharing();
}
