#include "main.h"

void setStick(int power)
{
    stick = power;
}

void controlStick()
{
    if(controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_UP))
    {
        setStick(127);
    }
    if(controller.get_digital_new_press(DIGITAL_DOWN))
    {
        setStick(-127);
    }

}