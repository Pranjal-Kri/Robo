void clearencoder()
{
nMotorEncoder[leftmotor]=0;
nMotorEncoder[rightmotor]=0;
}

void stoprobot()
{
motor[leftmotor]=0;
motor[rightmotor]=0;
wait1Msec(1000);
}

task main()
{
int l1,l2;
clearencoder();
while(SensorValue(light)>50)
{
	motor[leftmotor]=50;
	motor[rightmotor]=50;
}
stoprobot();
l1=nMotorEncoder[leftmotor];
while(nMotorEncoder[leftmotor]>0)
{
	motor[leftmotor]=-50;
	motor[rightmotor]=-50;
}
stoprobot();
clearencoder();
while(nMotorEncoder[leftmotor]<l1+150)
{
	motor[leftmotor]=50;
	motor[rightmotor]=50;
}
while(SensorValue(light)>50)
{
	motor[leftmotor]=50;
	motor[rightmotor]=50;
}
stoprobot();
l2=nMotorEncoder[leftmotor];
while(nMotorEncoder[leftmotor]>0)
{
	motor[leftmotor]=-50;
	motor[rightmotor]=-50;
}
stoprobot();
clearencoder();
while(nMotorEncoder[leftmotor]<l2+150)
{
	motor[leftmotor]=50;
	motor[rightmotor]=50;
}
while(SensorValue(light)>50)
{
	motor[leftmotor]=50;
	motor[rightmotor]=50;
}
stoprobot();
while(nMotorEncoder[leftmotor]>0)
{
	motor[leftmotor]=-50;
	motor[rightmotor]=-50;
}
stoprobot();
clearencoder();
