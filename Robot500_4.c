#pragma config(Sensor, S4,     sonar,          sensorSONAR)
#pragma config(Motor,  motorB,          r,             tmotorNXT, PIDControl, encoder)
#pragma config(Motor,  motorC,          l,             tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

void clear()
{
	nMotorEncoder[l]=0;
	nMotorEncoder[r]=0;
}

void stopr()
{
	motor[r]=0;
	motor[l]=0;
	wait1Msec(1000);
}

void turn()
{
	clear();
	while (nMotorEncoder[l]<455)
	{
		motor[l]=50;
		motor[r]=0;
	}
}

void straight()
{
	motor[r]=50;
	motor[l]=50;
}

task main()
{
	for(int i=0; i<2; i++)
	{
		while(SensorValue(sonar)>32)
		{
			straight();
		}
		stopr();
		turn();
		stopr();

		while(SensorValue(sonar)>32)
		{
			straight();
		}
		stopr();
		turn();
		stopr();

		while(SensorValue(sonar)>32)
		{
			straight();
		}
		stopr();
		turn();
		stopr();

		while(SensorValue(sonar)>32)
		{
			straight();
		}
		stopr();
		turn();
		stopr();
	}
}
