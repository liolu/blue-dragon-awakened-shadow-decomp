#include "m2c.h"

M2C_UNK NNS_FndInsertListObject();   /* extern */
void *NNS_FndGetNextListObject();            /* extern */
extern M2C_UNK sPrioList;

void InsertPrioList(void *arg0) {
    void *var_r1;

    var_r1 = NNS_FndGetNextListObject(&sPrioList, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = NNS_FndGetNextListObject(&sPrioList);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    NNS_FndInsertListObject(&sPrioList, var_r1, arg0);
}
