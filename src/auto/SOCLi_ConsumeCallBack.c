#include "m2c.h"

M2C_UNK SOCLi_ConsumeCPSBuffer(s32);                         /* extern */

void SOCLi_ConsumeCallBack(void *arg0) {
    SOCLi_ConsumeCPSBuffer(M2C_FIELD(arg0, s32 *, 4));
}
