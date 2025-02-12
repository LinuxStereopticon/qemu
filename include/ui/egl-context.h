#ifndef EGL_CONTEXT_H
#define EGL_CONTEXT_H

#include "ui/console.h"
#include "ui/egl-helpers.h"

QEMUGLContext qemu_egl_create_context(void *dg, QEMUGLParams *params);
void qemu_egl_destroy_context(void *dg, QEMUGLContext ctx);
int qemu_egl_make_context_current(void *dg, QEMUGLContext ctx);

#endif /* EGL_CONTEXT_H */
