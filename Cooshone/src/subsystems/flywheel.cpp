#include "main.h"
#include "pros/misc.h"

void setFlywheel(int power)
{
    flywheel = power;
}

void controlFlywheel()
{
    if(controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R1))
    {
        setFlywheel(127);
    }
    else if (controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_R2))
    {
        setFlywheel(-127);
    }
    else if(controller.get_digital_new_press(pros::E_CONTROLLER_DIGITAL_B)){
        setFlywheel(0);
    }
    
    
}