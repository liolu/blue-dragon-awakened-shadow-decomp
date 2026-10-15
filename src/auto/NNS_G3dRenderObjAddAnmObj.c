#include "m2c.h"

M2C_UNK addLink_(s32, void *);                 /* extern */
M2C_UNK updateHintVec_(s32);                         /* extern */

void NNS_G3dRenderObjAddAnmObj(s32 arg0, void *arg1) {
    u8 *temp_r0;
    u8 temp_r0_2;

    if ((arg1 != NULL) && (temp_r0 = M2C_FIELD(arg1, u8 **, 8), (temp_r0 != NULL))) {
        temp_r0_2 = *temp_r0;
        switch (temp_r0_2) {                        /* irregular */
            case 0x4D:
                updateHintVec_(arg0 + 0x3C);
                addLink_(arg0 + 8, arg1);
                return;
            case 0x4A:
                updateHintVec_(arg0 + 0x44);
                addLink_(arg0 + 0x10, arg1);
                return;
            case 0x56:
                updateHintVec_(arg0 + 0x4C);
                addLink_(arg0 + 0x18, arg1);
                return;
        }
    }
}
