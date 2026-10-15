#include "m2c.h"

M2C_UNK SOCL_CreateSocket(M2C_UNK *);                   /* extern */
extern M2C_UNK SOCLSocketParamUDP;
extern M2C_UNK SOCLSocketParamTCP;

void SOC_Socket(s32 arg0, s32 arg1) {
    if (arg1 == 1) {
        SOCL_CreateSocket(&SOCLSocketParamTCP);
        return;
    }
    SOCL_CreateSocket(&SOCLSocketParamUDP);
}
