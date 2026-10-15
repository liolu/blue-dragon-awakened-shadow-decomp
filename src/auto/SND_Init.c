#include "m2c.h"

M2C_UNK OS_InitMutex(M2C_UNK *);                   /* extern */
M2C_UNK SND_CommandInit();                            /* extern */
M2C_UNK SND_AlarmInit();                            /* extern */
extern s32 data_02101d44;
extern M2C_UNK sSndMutex;

void SND_Init(void) {
    if (data_02101d44 != 0) {
        return;
    }
    data_02101d44 = 1;
    OS_InitMutex(&sSndMutex);
    SND_CommandInit();
    SND_AlarmInit();
}
