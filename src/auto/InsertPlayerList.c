#include "m2c.h"

M2C_UNK NNS_FndInsertListObject();         /* extern */
void *NNS_FndGetNextListObject();                  /* extern */

void InsertPlayerList(s32 arg0, void *arg1) {
    void *var_r1;

    var_r1 = NNS_FndGetNextListObject(arg0, 0);
    if (var_r1 != NULL) {
    loop_1:
        if ((u32) M2C_FIELD(arg1, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = NNS_FndGetNextListObject(arg0);
            if (var_r1 != NULL) {
                goto loop_1;
            }
        }
    }
    NNS_FndInsertListObject(arg0, var_r1, arg1);
    M2C_FIELD(arg1, s32 *, 4) = arg0;
}
