#include "m2c.h"

M2C_UNK FIFOClear(s32);                         /* extern */

void SBEngineHaltUpdates(s32 arg0) {
    FIFOClear(arg0 + 0x14);
    FIFOClear(arg0 + 8);
}
