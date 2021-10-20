#pragma once

#ifndef _Function_H__

#include "Leg.h"

//walk forward
void walk_forward();

//walk backward
void walk_backward();

//turn left
void turn_left();

//turn right
void turn_right();

//lift 3_connect_leg
void lift_connect_legs(Leg a, Leg b, Leg c, Servo center_a, Servo center_b, Servo center_c, int* old_angle);

//put down 3_connect_leg
void down_connect_legs(Leg a, Leg b, Leg c, Servo center_a, Servo center_b, Servo center_c, int* old_angle);

//move forward  3_connect_leg
void forward_legs(Leg a, Leg b, Leg c, Servo body_a, Servo body_b, Servo body_c, int *old_angle);

//move backward 3_connect_leg
void backward_legs(Leg a, Leg b, Leg c, Servo body_a, Servo body_b, Servo body_c, int* old_angle);

#endif // !_Function_H__
