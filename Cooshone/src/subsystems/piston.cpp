#include "main.h"
#include "pros/misc.h"

void controlPistons()
{
    if(controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_LEFT))
    {
        leftWing.set_value(!leftWing.get_value());
    }
    if(controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_RIGHT))
    {
        rightWing.set_value(!rightWing.get_value());
    }
}