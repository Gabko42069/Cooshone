#include "autons.hpp"
#include "lemlib/asset.hpp"
#include "main.h"
#include "pros/motors.h"


//botton right
void auton1()
{
  chassis.setPose(0, 0, 45);
  moveIn(35, 2500, false, false);
  turnDegree(0,true);
  moveIn(20, 2500, false, true);
  turnDegree(45,true);
  moveIn(20, 2500, false, true);
  turnDegree(45,true);
  moveIn(40, 2500, false, true);


}

//bottom left 

void auton2() {
    chassis.setPose(0, 0, 45);
    moveIn(35, 2500, false, false);
    turnDegree(180,true);
    moveIn(50, 2500, false, true);
    


}



//top left 
void auton3() {
    chassis.setPose(0, 0, 45);

}

//top right 
void auton4() {
      chassis.setPose(0, 0, 45);

}


void autonDownRight() {
    chassis.setPose(60, -40, 180);
    chassis.moveTo(4, -22, 225, 2000);
    chassis.moveTo(4, 0, 360, 2000);
    chassis.moveTo(48, 0, 90, 2000);
}