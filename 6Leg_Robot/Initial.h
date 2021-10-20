#pragma once

#ifndef _Initial_H__
#define _Initial_H__

#include <Servo.h>
#include <Arduino.h>

void sevor_Init_F(Servo F_L_base, Servo F_R_base, Servo F_L_connect, Servo F_R_connect, Servo F_L_body, Servo F_R_body);

void sevor_Init_C(Servo C_L_base, Servo C_R_base, Servo C_L_connect, Servo C_R_connect, Servo C_L_body, Servo C_R_body);

void sevor_Init_B(Servo B_L_base, Servo B_R_base, Servo B_L_connect, Servo B_R_connect, Servo B_L_body, Servo B_R_body);




#endif // !_Initial_H__

