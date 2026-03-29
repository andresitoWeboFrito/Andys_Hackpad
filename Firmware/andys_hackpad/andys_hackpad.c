#include "quantum.h"
#ifdef OLED_ENABLE
#    include "oled_driver.h"
#endif

#ifdef OLED_ENABLE
bool oled_task_user(void) {
	oled_on();
    oled_clear();
    oled_set_cursor(0, 0);
    oled_write_ln(PSTR("HELLO"), false);
    return false;
}
#endif