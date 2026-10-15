#include "m2c.h"

M2C_UNK MI_CpuCopy8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK Wifi;

void DWCi_BACKUPlSetWiFi(M2C_UNK arg0) {
    MI_CpuCopy8(arg0, &Wifi, 0xE);
}
