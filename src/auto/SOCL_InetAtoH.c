#include "m2c.h"

s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */
s32 CPS_Resolve(M2C_UNK);                         /* extern */
extern M2C_UNK CPSDnsIp;

s32 SOCL_InetAtoH(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;

    temp_r5                        = OS_DisableInterrupts();
    temp_r6                        = M2C_FIELD(&CPSDnsIp, s32 *, 0);
    temp_r7                        = M2C_FIELD(&CPSDnsIp, s32 *, 4);
    M2C_FIELD(&CPSDnsIp, s32 *, 0) = 0;
    M2C_FIELD(&CPSDnsIp, s32 *, 4) = 0;
    temp_r4                        = CPS_Resolve(arg0);
    M2C_FIELD(&CPSDnsIp, s32 *, 0) = temp_r6;
    M2C_FIELD(&CPSDnsIp, s32 *, 4) = temp_r7;
    OS_RestoreInterrupts(temp_r5);
    return temp_r4;
}
