#include "m2c.h"

s32 FS_LoadOverlayInfo(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
s32 FS_UnloadOverlayImage(M2C_UNK *);                       /* extern */

s32 FS_UnloadOverlay(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[44];

    if ((FS_LoadOverlayInfo(sp0, arg0, arg1) == 0) || (FS_UnloadOverlayImage(sp0) == 0)) {
        return 0;
    }
    return 1;
}
