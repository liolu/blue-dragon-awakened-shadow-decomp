#include "m2c.h"

M2C_UNK MIi_CpuCopyFast(void *, void *, M2C_UNK);     /* extern */
void *WCMi_GetSystemWork();                              /* extern */
void *WcmAllocApList();                              /* extern */
void *WcmGetOldestApList();                              /* extern */
void *WcmSearchApList(void *);                        /* extern */
M2C_UNK WcmAppendApList(void *);                      /* extern */

void WCMi_EntryApList(void *arg0, s16 arg1) {
    void *temp_r0;
    void *var_r7;

    temp_r0 = WCMi_GetSystemWork();
    if (temp_r0 == NULL) {
        return;
    }
    if ((M2C_FIELD(temp_r0, u8 *, 0x226A) == 0) && (M2C_FIELD(arg0, u16 *, 0x3C) == 0)) {
        var_r7 = WcmSearchApList(arg0 + 4);
        if (var_r7 == NULL) {
            var_r7 = WcmAllocApList();
        }
        if ((var_r7 == NULL) && (M2C_FIELD(temp_r0, s32 *, 0x2278) == 1)) {
            var_r7 = WcmGetOldestApList();
        }
        if (var_r7 == NULL) {
            return;
        }
        M2C_FIELD(var_r7, s16 *, 2) = arg1;
        MIi_CpuCopyFast(arg0, var_r7 + 0x10, 0xC0);
        WcmAppendApList(var_r7);
    }
}
