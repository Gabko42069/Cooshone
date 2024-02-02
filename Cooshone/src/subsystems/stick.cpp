#include "main.h"

void setStick(int power)
{
    stick = power;
}

void controlStick()
{   
    if(controller.get_digital(DIGITAL_L2))
    {
        setStick(127);
    }
    else if(controller.get_digital(DIGITAL_L1))
    {
        setStick(-127);
    }
    else
    {
        setStick(0);
    }

}