#include "m2c.h"
extern u8 __mbtowc_noconv[];
extern u8 func_02030d60[];
extern u8 func_02030bb0[];
extern u8 func_020308a4[];
extern u8 data_02035e78[];
extern u8 func_02030b5c[];
extern u8 func_02030ad8[];
extern u8 func_020309f8[];
extern u8 func_02030c7c[];
extern u8 func_02030d20[];
extern u8 func_020211e8[];
u32 calcTexMtx_[8] = {(u32) &func_020308a4, (u32) &func_020309f8, (u32) &func_02030ad8, (u32) &func_02030b5c,
                      (u32) &func_02030bb0, (u32) &func_02030c7c, (u32) &func_02030d20, (u32) &func_02030d60};
