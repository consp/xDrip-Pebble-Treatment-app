#ifndef __UX_TREATMENT_H__
#define __UX_TREATMENT_H__
#include <pebble.h>
#ifndef PBL_TOUCH
#define treatment_display_init(...)
#define treatment_display_deinit(...)
#else
void treatment_display_init(Window *window);
void treatment_display_deinit(void);
#endif
#endif
