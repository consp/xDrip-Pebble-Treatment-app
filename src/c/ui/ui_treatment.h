#pragma once
#include <pebble.h>

#define ST_TREATMENT_BOLUS 126
#define ST_TREATMENT_BASAL 127
#define ST_TREATMENT_CARBS 128
#define ST_TREATMENT_BOLUS_EN 133
#define ST_TREATMENT_BASAL_EN 134
#define ST_TREATMENT_CARBS_EN 135

void treatment_display_init(Window *window);
void treatment_display_deinit(void);
