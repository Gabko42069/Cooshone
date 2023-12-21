#include "main.h"
#include "pros/adi.hpp"
#include "lemlib/api.hpp"

//Motors 

extern pros :: Motor leftFront; 
extern pros :: Motor leftMiddle; 
extern pros :: Motor leftBack;
extern pros :: Motor rightFront;
extern pros :: Motor rightMiddle;
extern pros :: Motor rightBack;

extern pros :: Motor flywheel;
extern pros :: Motor stick;

//other stuff

extern pros :: Controller controller;
extern pros :: Imu inertial;

//lemlib shi 

extern pros::MotorGroup left_side_motors;
extern pros::MotorGroup right_side_motors;

extern lemlib::Drivetrain_t drivetrain;
extern lemlib::OdomSensors_t sensors;
extern lemlib::ChassisController_t lateralController;
extern lemlib::ChassisController_t angularController;
extern lemlib::DriveCurveFunction_t driveCurve;

extern lemlib::Chassis chassis;

//ports 

#define leftFrontPort 1
#define leftMiddlePort 2
#define leftBackPort 3
#define rightFrontPort 4
#define rightMiddlePort 5 
#define rightBackPort 6

#define flywheelPort 7 
#define stickPort 8

#define inertialPort 9
