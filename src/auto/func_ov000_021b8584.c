/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern char *data_ov000_021eaeac[];
extern char data_ov000_021eaf74[];
char *func_ov000_021b8584(s32 code) {
    if (code >= 0 && (u32) code < 0x17) {
        return data_ov000_021eaeac[code];
    }
    return data_ov000_021eaf74;
}
