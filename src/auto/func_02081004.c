#include "m2c.h"

M2C_UNK NNS_SndMain();                            /* extern */
M2C_UNK NNS_SndPlayerPauseAll();                            /* extern */
M2C_UNK func_02081114(void *);                      /* extern */
M2C_UNK func_02081514();                            /* extern */
M2C_UNK func_02081f78(void *);                      /* extern */
s32 func_ov000_021d2228();                          /* extern */
s32 func_ov000_021d223c();                          /* extern */

void func_02081004(void *arg0) {
    func_02081514();
    if (((func_ov000_021d2228() == 0) || (func_ov000_021d2228(), (func_ov000_021d223c() == 0))) &&
        (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0)) {
        if (M2C_FIELD(arg0, u8 *, 0x990) == 0) {
            M2C_FIELD(arg0, u8 *, 0x990) = 1U;
            NNS_SndPlayerPauseAll();
        }
    } else {
        if (M2C_FIELD(arg0, u8 *, 0x990) != 0) {
            M2C_FIELD(arg0, u8 *, 0x990) = 0U;
            NNS_SndPlayerPauseAll();
        }
        func_02081114(arg0);
        func_02081f78(arg0 + 0x710);
    }
    NNS_SndMain();
}
