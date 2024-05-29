#pragma once

#include <windows.h>
#include <initguid.h>

#ifdef VIRTUALCAM_AVAILABLE
DEFINE_GUID(CLSID_OBS_VirtualVideo,
            0xA3FCE0F5,
            0x3493,
            0x419F,
            0x95,
            0x8A,
            0xAB,
            0xA1,
            0x25,
            0x0E,
            0xC2,
            0x0B);
#endif
