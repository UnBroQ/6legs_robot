/*
  The Electronic modules we may use:
      bluetooth HC-05/HC-06
      GY-25
      maix bit (for machine vision) 
      HC-SR04
*/

#include <Wire.h>
#include <Servo.h>
#include <SoftwareSerial.h>
#include "Initial.h"
#include "Leg.h"

// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       6Leg_Robot.ino
    Created:	2021/8/28 14:55:50
    Author:     Neuer Shaw
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//
Servo F_L_base;     //pin2
Servo F_R_base;     //pin3
Servo F_L_connect;      //pin4
Servo F_R_connect;      //pin5
Servo F_L_body;     //pin6
Servo F_R_body;     //pin7

Servo C_L_base;     //pin8
Servo C_R_base;     //pin9
Servo C_L_connect;      //pin10
Servo C_R_connect;      //pin11
Servo C_L_body;     //pin12
Servo C_R_body;     //pin13

Servo B_L_base;     //pin14
Servo B_R_base;     //pin15
Servo B_L_connect;      //pin16
Servo B_R_connect;      //pin17
Servo B_L_body;     //pin18
Servo B_R_body;     //pin19

int stat_angle_1 = 0;
int stat_angle_2 = 0;
int stat_angle_3 = 0;
int stat_angle_4 = 0;
int stat_angle_5 = 0;
int stat_angle_6 = 0;

// The setup() function runs once each time the micro-controller starts
void setup()
{  
    sevor_Init_F(F_L_base,F_R_base,F_L_connect, F_R_connect, F_L_body, F_R_body);
    sevor_Init_C(C_L_base, C_R_base, C_L_connect, C_R_connect, C_L_body, C_R_body);
    sevor_Init_B(B_L_base, B_R_base, B_L_connect, B_R_connect, B_L_body, B_R_body);
}

// Add the main program code into the continuous loop() function
void loop()
{


}

