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
extern pros :: ADIPort leftWing;
extern pros :: ADIPort rightWing;
extern pros :: Controller controller;
//extern pros :: Imu inertial;

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

#define leftFrontPort 20
#define leftMiddlePort 9
#define leftBackPort 8
#define rightFrontPort 11
#define rightMiddlePort 1 
#define rightBackPort 2

#define flywheelPort 3
#define stickPort 10

#define leftWingPort 'A'
#define rightWingPort 'B'
#define inertialPort 4
