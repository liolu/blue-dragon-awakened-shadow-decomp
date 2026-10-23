#include "m2c.h"
extern u8 NNSi_G3dSendJointSRTSi3d[];
extern u8 NNSi_G3dSendJointSRTMaya[];
extern u8 NNSi_G3dSendJointSRTBasic[];
u32 NNS_G3dSendJointSRT_FuncArray[3] = {(u32) &NNSi_G3dSendJointSRTBasic, (u32) &NNSi_G3dSendJointSRTMaya,
                                        (u32) &NNSi_G3dSendJointSRTSi3d};
