#include "m2c.h"

extern s32 data_020f9260;

void DWC_Auth_SetCustomNas(s32 arg0) {
    data_020f9260 = arg0;
}
