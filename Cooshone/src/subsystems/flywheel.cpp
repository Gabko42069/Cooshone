#include "main.h"

void setFlywheel(int power)
{
    flywheel = power;
}

void controlFlywheel()
{
    if(controller.get_digital_new_press(DIGITAL_X))
    {
        setFlywheel(127);
    }
}