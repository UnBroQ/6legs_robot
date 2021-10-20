#include "Leg.h"


//lift up the leg
void Leg::leg_lift(Servo center, int *old_angle)
{
	if (*old_angle > lift_angle)
	{
		int i = *old_angle;
		int x = *old_angle - lift_angle;
		for (x; x > 0; x--)
		{
			i -= 1;
			center.write(i);
		}
		*old_angle = i;
	}
}

//put down the leg
void Leg::leg_down(Servo center, int* old_angle)
{
	if (*old_angle < down_angle)
	{
		int i = *old_angle;
		int x = down_angle - *old_angle;
		for (x; x > 0; x--)
		{
			i += 1;
			center.write(i);
		}
		*old_angle = i;
	}
}

//move the leg forward
void Leg::leg_forward(Servo body, int* old_angle)
{
	if (*old_angle > forward_angle)
	{
		int i = *old_angle;
		int x = *old_angle - forward_angle;
		for (x; x > 0; x--)
		{
			--i;
			body.write(i);
		}
		*old_angle = i;
	}
}

//move the leg backward
void Leg::leg_backward(Servo body, int* old_angle)
{
	if (*old_angle < backward_angle)
	{
		int i = *old_angle;
		int x = backward_angle - *old_angle;
		for (x; x > 0; x--)
		{
			++i;
			body.write(i);
		}
		*old_angle = i;
	}
}

//base servo in
void Leg::leg_basein(Servo base, int* old_angle)
{
	if (*old_angle > basein_angle)
	{
		int i = *old_angle;
		int x = *old_angle - basein_angle;
		for (x; x > 0; x--)
		{
			--i;
			base.write(i);
		}
		*old_angle = i;
	}
}

//base servo out
void Leg::leg_baseout(Servo base, int* old_angle)
{
	if (*old_angle < baseout_angle)
	{
		int i = *old_angle;
		int x = basein_angle - *old_angle;
		for (x; x > 0; x--)
		{
			++i;
			base.write(i);
		}
		*old_angle = i;
	}
}

