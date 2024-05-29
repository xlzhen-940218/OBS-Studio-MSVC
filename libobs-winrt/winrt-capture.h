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

EXPORT BOOL winrt_capture_supported();
EXPORT BOOL winrt_capture_cursor_toggle_supported();
EXPORT struct winrt_capture *winrt_capture_init_window(BOOL cursor, HWND window,
						       BOOL client_area,
						       BOOL force_sdr);
EXPORT struct winrt_capture *
winrt_capture_init_monitor(BOOL cursor, HMONITOR monitor, BOOL force_sdr);
EXPORT void winrt_capture_free(struct winrt_capture *capture);

EXPORT BOOL winrt_capture_active(const struct winrt_capture *capture);
EXPORT BOOL winrt_capture_show_cursor(struct winrt_capture *capture,
				      BOOL visible);
EXPORT enum gs_color_space
winrt_capture_get_color_space(const struct winrt_capture *capture);
EXPORT void winrt_capture_render(struct winrt_capture *capture);
EXPORT uint32_t winrt_capture_width(const struct winrt_capture *capture);
EXPORT uint32_t winrt_capture_height(const struct winrt_capture *capture);

EXPORT void winrt_capture_thread_start();
EXPORT void winrt_capture_thread_stop();

#ifdef __cplusplus
}
#endif
