#include "m2c.h"

M2C_UNK OSi_ReferSymbol(s32);                         /* extern */
s32 SOCLi_StartupSOCL();                                /* extern */
M2C_UNK SOCLi_StartupCPS();                            /* extern */
extern s32 SOCLiConfigPtr;

s32 SOCL_Startup(s32 arg0) {
    OSi_ReferSymbol(0x02000BF4);
    if (SOCLiConfigPtr != 0) {
        return 0;
    }
    SOCLiConfigPtr = arg0;
    SOCLi_StartupCPS();
    return SOCLi_StartupSOCL();
}
