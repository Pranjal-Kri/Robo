#pragma config(Motor,  motorA,          left,          tmotorNXT, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          right,         tmotorNXT, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	//straight
	motor[left]=40;
	motor[right]=40;
	wait1Msec(2000);
	//left turn
	motor[left]=0;
	motor[right]=40;
	wait1Msec(1250);
	//straight
	motor[left]=40;
	motor[right]=40;
	wait1Msec(2250);
	//right turn
	motor[left]=40;
	motor[right]=0;
	wait1Msec(1250);
	//straight
	motor[left]=40;
	motor[right]=40;
	wait1Msec(1550);
	//right turn
	motor[left]=40;
	motor[right]=0;
	wait1Msec(1250);
	//straight
	motor[left]=40;
	motor[right]=40;
	wait1Msec(1500);
}
