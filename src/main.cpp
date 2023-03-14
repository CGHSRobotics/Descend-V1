#include "ace.h"


/* ========================================================================== */
/*                                 Initialize                                 */
/* ========================================================================== */
void initialize() {

	//ace::lvgl::load_screen();

	while (ace::imuSensor.is_calibrating()) {
		pros::delay(10);
	}

	//ace::lvgl::img_screen();

}

/* -------------------------------- Disabled -------------------------------- */
void disabled() {}

/* ----------------------------       ---------------------------- */
void competition_initialize() {}

/* ========================================================================== */
/*                                 Autonomous                                 */
/* ========================================================================== */
void autonomous() {}

/* ========================================================================== */
/*                                User Control                                */
/* ========================================================================== */
void opcontrol() {


	while (true) {

		if (ace::btn_intake_toggle.get_press_new())
		{
			/* code */
		}


		pros::delay(20);
	}

}



















