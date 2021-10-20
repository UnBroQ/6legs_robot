#include "Initial.h"


void sevor_Init_F(Servo F_L_base, Servo F_R_base, Servo F_L_connect, Servo F_R_connect, Servo F_L_body, Servo F_R_body)
{
	F_L_base.attach(2);
	F_R_base.attach(3);
	F_L_connect.attach(4);
	F_R_connect.attach(5);
	F_L_body.attach(6);
	F_R_body.attach(7);

	F_L_base.write(0);
	F_R_base.write(0);
	F_L_connect.write(0);
	F_R_connect.write(0);
	F_L_body.write(0);
	F_R_body.write(0);
}

void sevor_Init_C(Servo C_L_base, Servo C_R_base, Servo C_L_connect, Servo C_R_connect, Servo C_L_body, Servo C_R_body)
{
	C_L_base.attach(8);
	C_R_base.attach(9);
	C_L_connect.attach(10);
	C_R_connect.attach(11);
	C_L_body.attach(12);
	C_R_body.attach(13);

	C_L_base.write(0);
	C_R_base.write(0);
	C_L_connect.write(0);
	C_R_connect.write(0);
	C_L_body.write(0);
	C_R_body.write(0);
}

void sevor_Init_B(Servo B_L_base, Servo B_R_base, Servo B_L_connect, Servo B_R_connect, Servo B_L_body, Servo B_R_body)
{
	B_L_base.attach(14);
	B_R_base.attach(15);
	B_L_connect.attach(16);
	B_R_connect.attach(17);
	B_L_body.attach(18);
	B_R_body.attach(19);

	B_L_base.write(0);
	B_R_base.write(0);
	B_L_connect.write(0);
	B_R_connect.write(0);
	B_L_body.write(0);
	B_R_body.write(0);
}
