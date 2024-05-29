#pragma once

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <d3d11.h>
#include <DispatcherQueue.h>
#include <dwmapi.h>
#include <obs-module.h>
#include <util/windows/ComPtr.hpp>
#include <Windows.Graphics.Capture.Interop.h>
#include <winrt/Windows.Foundation.Metadata.h>
#include <winrt/Windows.Graphics.Capture.h>
#include <winrt/Windows.System.h>
#include <obs-module.h>
#include <util/c99defs.h>
#ifdef __cplusplus
extern "C" {
#endif

EXPORT void winrt_initialize();
EXPORT void winrt_uninitialize();
EXPORT struct winrt_disaptcher *winrt_dispatcher_init();
EXPORT void winrt_dispatcher_free(struct winrt_disaptcher *dispatcher);

#ifdef __cplusplus
}
#endif
