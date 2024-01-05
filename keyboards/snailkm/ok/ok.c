#include "ok.h"

#ifdef OLED_ENABLE

static void render_logo(void) {
  static const char PROGMEM my_logo[] = {
a
  };

  oled_write_raw_P(my_logo, sizeof(my_logo));
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
		render_logo();
    }
    return false;
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; };
#endif