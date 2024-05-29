/*

    EGL loader generated by glad 0.1.36 on Sat Jan 27 07:23:01 2024.

    Language/Generator: C/C++
    Specification: egl
    APIs: egl=1.5
    Profile: -
    Extensions:
        EGL_EXT_device_base,
        EGL_EXT_device_drm_render_node,
        EGL_EXT_image_dma_buf_import,
        EGL_EXT_image_dma_buf_import_modifiers,
        EGL_EXT_platform_base,
        EGL_EXT_platform_wayland,
        EGL_EXT_platform_x11,
        EGL_EXT_platform_xcb,
        EGL_KHR_create_context,
        EGL_KHR_image_base,
        EGL_KHR_image_pixmap,
        EGL_KHR_platform_wayland,
        EGL_KHR_platform_x11,
        EGL_MESA_image_dma_buf_export
    Loader: True
    Local files: False
    Omit khrplatform: False
    Reproducible: False

    Commandline:
        --api="egl=1.5" --generator="c" --spec="egl" --extensions="EGL_EXT_device_base,EGL_EXT_device_drm_render_node,EGL_EXT_image_dma_buf_import,EGL_EXT_image_dma_buf_import_modifiers,EGL_EXT_platform_base,EGL_EXT_platform_wayland,EGL_EXT_platform_x11,EGL_EXT_platform_xcb,EGL_KHR_create_context,EGL_KHR_image_base,EGL_KHR_image_pixmap,EGL_KHR_platform_wayland,EGL_KHR_platform_x11,EGL_MESA_image_dma_buf_export"
    Online:
        https://glad.dav1d.de/#language=c&specification=egl&loader=on&api=egl%3D1.5&extensions=EGL_EXT_device_base&extensions=EGL_EXT_device_drm_render_node&extensions=EGL_EXT_image_dma_buf_import&extensions=EGL_EXT_image_dma_buf_import_modifiers&extensions=EGL_EXT_platform_base&extensions=EGL_EXT_platform_wayland&extensions=EGL_EXT_platform_x11&extensions=EGL_EXT_platform_xcb&extensions=EGL_KHR_create_context&extensions=EGL_KHR_image_base&extensions=EGL_KHR_image_pixmap&extensions=EGL_KHR_platform_wayland&extensions=EGL_KHR_platform_x11&extensions=EGL_MESA_image_dma_buf_export
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "glad_egl.h"

int gladLoadEGL(void) {
    return gladLoadEGLLoader((GLADloadproc)eglGetProcAddress);
}

PFNEGLQUERYDEVICEATTRIBEXTPROC glad_eglQueryDeviceAttribEXT = NULL;
PFNEGLQUERYDEVICESTRINGEXTPROC glad_eglQueryDeviceStringEXT = NULL;
PFNEGLQUERYDEVICESEXTPROC glad_eglQueryDevicesEXT = NULL;
PFNEGLQUERYDISPLAYATTRIBEXTPROC glad_eglQueryDisplayAttribEXT = NULL;
PFNEGLQUERYDMABUFFORMATSEXTPROC glad_eglQueryDmaBufFormatsEXT = NULL;
PFNEGLQUERYDMABUFMODIFIERSEXTPROC glad_eglQueryDmaBufModifiersEXT = NULL;
PFNEGLGETPLATFORMDISPLAYEXTPROC glad_eglGetPlatformDisplayEXT = NULL;
PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC glad_eglCreatePlatformWindowSurfaceEXT = NULL;
PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC glad_eglCreatePlatformPixmapSurfaceEXT = NULL;
PFNEGLCREATEIMAGEKHRPROC glad_eglCreateImageKHR = NULL;
PFNEGLDESTROYIMAGEKHRPROC glad_eglDestroyImageKHR = NULL;
PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC glad_eglExportDMABUFImageQueryMESA = NULL;
PFNEGLEXPORTDMABUFIMAGEMESAPROC glad_eglExportDMABUFImageMESA = NULL;
static void load_EGL_EXT_device_base(GLADloadproc load) {
	glad_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC)load("eglQueryDeviceAttribEXT");
	glad_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC)load("eglQueryDeviceStringEXT");
	glad_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC)load("eglQueryDevicesEXT");
	glad_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC)load("eglQueryDisplayAttribEXT");
}
static void load_EGL_EXT_image_dma_buf_import_modifiers(GLADloadproc load) {
	glad_eglQueryDmaBufFormatsEXT = (PFNEGLQUERYDMABUFFORMATSEXTPROC)load("eglQueryDmaBufFormatsEXT");
	glad_eglQueryDmaBufModifiersEXT = (PFNEGLQUERYDMABUFMODIFIERSEXTPROC)load("eglQueryDmaBufModifiersEXT");
}
static void load_EGL_EXT_platform_base(GLADloadproc load) {
	glad_eglGetPlatformDisplayEXT = (PFNEGLGETPLATFORMDISPLAYEXTPROC)load("eglGetPlatformDisplayEXT");
	glad_eglCreatePlatformWindowSurfaceEXT = (PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC)load("eglCreatePlatformWindowSurfaceEXT");
	glad_eglCreatePlatformPixmapSurfaceEXT = (PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC)load("eglCreatePlatformPixmapSurfaceEXT");
}
static void load_EGL_KHR_image_base(GLADloadproc load) {
	glad_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC)load("eglCreateImageKHR");
	glad_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC)load("eglDestroyImageKHR");
}
static void load_EGL_MESA_image_dma_buf_export(GLADloadproc load) {
	glad_eglExportDMABUFImageQueryMESA = (PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC)load("eglExportDMABUFImageQueryMESA");
	glad_eglExportDMABUFImageMESA = (PFNEGLEXPORTDMABUFIMAGEMESAPROC)load("eglExportDMABUFImageMESA");
}
static int find_extensionsEGL(void) {
	return 1;
}

static void find_coreEGL(void) {
}

int gladLoadEGLLoader(GLADloadproc load) {
	(void) load;
	find_coreEGL();

	if (!find_extensionsEGL()) return 0;
	load_EGL_EXT_device_base(load);
	load_EGL_EXT_image_dma_buf_import_modifiers(load);
	load_EGL_EXT_platform_base(load);
	load_EGL_KHR_image_base(load);
	load_EGL_MESA_image_dma_buf_export(load);
	return 1;
}

