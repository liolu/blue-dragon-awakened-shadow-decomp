#include "m2c.h"

s32 memcmp(void *, M2C_UNK *, M2C_UNK);      /* extern */
M2C_UNK DWCi_BACKUPlConvMaskAddr(u8, M2C_UNK *);               /* extern */
s32 DWC_BACKUPlCheckSsid(void *);                          /* extern */
s32 DWC_BACKUPlCheckIp(void *, M2C_UNK *);               /* extern */
s32 DWC_BACKUPlCheckAddress(void *);                          /* extern */
extern M2C_UNK DWCi_SETTING_NONE;

s32 checkAp(void *arg0) {
    M2C_UNK sp0;
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 0xE7);
    if (temp_r0 == 0xFF) {
        return 1;
    }
    if ((u32) temp_r0 > 2U) {
        return 0;
    }
    if (DWC_BACKUPlCheckSsid(arg0 + 0x40) == 0) {
        return 0;
    }
    if (memcmp(arg0 + 0xC0, &DWCi_SETTING_NONE, 4) != 0) {
        if (DWC_BACKUPlCheckAddress(arg0 + 0xC4) == 0) {
            return 0;
        }
        temp_r0_2 = M2C_FIELD(arg0, u8 *, 0xD0);
        if ((u32) temp_r0_2 > 0x20U) {
            return 0;
        }
        DWCi_BACKUPlConvMaskAddr(temp_r0_2, &sp0);
        if (DWC_BACKUPlCheckIp(arg0 + 0xC0, &sp0) == 0) {
            return 0;
        }
        goto block_13;
    }
block_13:
    if ((memcmp(arg0 + 0xC8, &DWCi_SETTING_NONE, 4) != 0) && (DWC_BACKUPlCheckAddress(arg0 + 0xC8) == 0) &&
        (DWC_BACKUPlCheckAddress(arg0 + 0xCC) == 0)) {
        return 0;
    }
    return 1;
}
