#include "m2c.h"

M2C_UNK OS_SpinWait(s32);                         /* extern */
M2C_UNK OS_Terminate();                            /* extern */
M2C_UNK MI_StopDma(M2C_UNK);                     /* extern */
s32 PMi_ForceToPowerOff();                                /* extern */
M2C_UNK CARDi_SendtoPxi(M2C_UNK, M2C_UNK);            /* extern */

void CARD_TerminateForPulledOut(void) {
    s32 var_r0;
    s32 var_r5;

    var_r5 = 1;
    MI_StopDma(0);
    MI_StopDma(1);
    MI_StopDma(2);
    MI_StopDma(3);
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        var_r0 = PMi_ForceToPowerOff();
        if (var_r0 == 4) {
            do {
                OS_SpinWait(0xA3A47);
                var_r0 = PMi_ForceToPowerOff();
            } while (var_r0 == 4);
        }
        if (var_r0 == 0) {
            var_r5 = 0;
        }
    }
    if (var_r5 != 0) {
        CARDi_SendtoPxi(1, 1);
    }
    OS_Terminate();
}
