#include <pebble.h>
#include "api/settings.h"
#include "ui/ui_treatment.h"

AppState state;

static Window *s_window;


static void prv_window_load(Window *window) {
    treatment_display_init(window);
}

static void prv_window_unload(Window *window) {
    treatment_display_deinit();
}

static void prv_init(void) {
    s_window = window_create();
    window_set_window_handlers(s_window, (WindowHandlers) {
        .load = prv_window_load,
        .unload = prv_window_unload,
    });
    const bool animated = true;
    window_stack_push(s_window, animated);

    comm_init();
}

static void prv_deinit(void) {
    window_destroy(s_window);
}

int main(void) {
    prv_init();

    APP_LOG(APP_LOG_LEVEL_DEBUG, "Done initializing, pushed window: %p", s_window);

    app_event_loop();
    prv_deinit();
}
