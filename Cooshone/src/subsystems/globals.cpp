#include "main.h"
#include "pros/adi.h"
#include "pros/motors.h"
#include "lemlib/api.hpp"

pros :: Motor leftFront(leftFrontPort, pros ::E_MOTOR_GEARSET_06,true);
pros :: Motor leftMiddle(leftMiddlePort, pros ::E_MOTOR_GEARSET_06,true);
pros :: Motor leftBack(leftBackPort, pros ::E_MOTOR_GEARSET_06,true);

pros :: Motor rightFront(rightFrontPort, pros ::E_MOTOR_GEARSET_06);
pros :: Motor rightMiddle(rightMiddlePort, pros ::E_MOTOR_GEARSET_06);
pros :: Motor rightBack(rightBackPort, pros ::E_MOTOR_GEARSET_06);

pros :: Motor flywheel(flywheelPort, pros::E_MOTOR_GEARSET_06);
pros :: Motor stick(stickPort, pros::E_MOTOR_GEARSET_06);

pros :: ADIPort leftWing(leftWingPort,pros::E_ADI_DIGITAL_OUT);
pros :: ADIPort rightWing(rightWingPort,pros::E_ADI_DIGITAL_OUT);
pros :: Controller controller(pros::E_CONTROLLER_MASTER);
pros::Imu inertial(inertialPort);

pros::MotorGroup left_side_motors({leftFront,leftMiddle,leftBack});
pros::MotorGroup right_side_motors({rightFront,rightMiddle, rightBack});

//lemlib shit
//old constants 

lemlib::Drivetrain_t drivetrain = {
    &left_side_motors,
    &right_side_motors,
    15.5,
    3.25,
    360,
    8
    };

lemlib::OdomSensors_t sensors = {
    nullptr,
    nullptr,
    nullptr,
    nullptr,
    &inertial};
lemlib::ChassisController_t lateralController = {
    15, // kP
    3, // kD
    1, // smallErrorRange
    100, // smallErrorTimeout
    3, // largeErrorRange
    500 // largeErrorTimeout
    };// slew rate
lemlib::ChassisController_t angularController = {
     2.5, // kP
    15, // kD
    1, // smallErrorRange
    100, // smallErrorTimeout
    3, // largeErrorRange
    500 // largeErrorTimeout
    };

lemlib::Chassis chassis(drivetrain, lateralController, angularController, sensors);
 
