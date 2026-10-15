#include "m2c.h"

extern s32 data_02103a60;

void CARD_Enable(s32 arg0) {
    data_02103a60 = arg0;
}
