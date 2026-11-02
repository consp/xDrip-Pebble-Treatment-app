#pragma once
#include <pebble.h>

/** 
 * Margins and sizes
 */
#if defined(PBL_PLATFORM_GABBRO)
#define ICON_MARGIN 5
#elif defined(PBL_PLATFORM_BASALT)
#define ICON_MARGIN 2
#else
#define ICON_MARGIN 5
#endif
#if defined(PBL_PLATFORM_BASALT)
#define BUTTON_WIDTH 4 
#else
#define BUTTON_WIDTH 34
#endif
#if defined(PBL_PLATFORM_BASALT)
#define TEXT_HEIGHT 36
#else
#define TEXT_HEIGHT 48
#endif

#if defined(PBL_PLATFORM_GABBRO)
#define LEFT_MARGIN 50
#elif defined(PBL_PLATFORM_BASALT)
#define LEFT_MARGIN 4
#else
#define LEFT_MARGIN 10
#endif

#if defined(PBL_PLATFORM_GABBRO)
#define TOP_MARGIN 32
#elif defined(PBL_PLATFORM_BASALT)
#define TOP_MARGIN 4
#else
#define TOP_MARGIN 5 
#endif

#if defined(PBL_PLATFORM_GABBRO)
#define TOP_SPACING 5
#elif defined(PBL_PLATFORM_BASALT)
#define TOP_SPACING 4
#else
#define TOP_SPACING 6
#endif

#if defined(PBL_PLATFORM_GABBRO)
#define BOTTOM_MARGIN 32
#elif defined(PBL_PLATFORM_BASALT)
#define BOTTOM_MARGIN 12
#else
#define BOTTOM_MARGIN 8 
#endif

#if defined(PBL_PLATFORM_BASALT)
#define FONT RESOURCE_ID_GOTHAM_BOLD_30
#else
#define FONT RESOURCE_ID_GOTHAM_BOLD_40
#endif

/**
 * button delays
 */
#if defined(PBL_PLATFORM_BASALT)
#define REPEAT_DELAY    250
#else
#define REPEAT_DELAY    150
#endif

#define ST_TREATMENT_BOLUS 126
#define ST_TREATMENT_BASAL 127
#define ST_TREATMENT_CARBS 128
#define ST_TREATMENT_BOLUS_EN 133
#define ST_TREATMENT_BASAL_EN 134
#define ST_TREATMENT_CARBS_EN 135

void treatment_display_init(Window *window);
void treatment_display_deinit(void);
