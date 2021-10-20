#pragma once

#ifndef _Leg_H__

#include<Arduino.h>
#include <Servo.h>

class Leg
{
public:
	//lift up the leg
	void leg_lift(Servo center, int *old_angle);

	//put down the leg
	void leg_down(Servo center, int *old_angle);

	//move the leg forward
	void leg_forward(Servo body, int *old_angle);

	//move the leg backward
	void leg_backward(Servo body, int *old_angle);

	//base servo in
	void leg_basein(Servo base, int *old_angle);

	//base servo out
	void leg_baseout(Servo base, int* old_angle);

private:
	const int lift_angle = 30;
	const int down_angle = 60;

	const int forward_angle = 45;
	const int backward_angle = 135;

	const int baseout_angle = 45;
	const int basein_angle = 10;
};


#endif // !_Leg_H__


