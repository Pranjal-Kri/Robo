#pragma config(Motor, motorA, left, tmotorNXT, PIDControl, encoder)
#pragma config(Motor, motorC, right, tmotorNXT, PIDControl, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
    nSyncedMotors = synchAC;
    nSyncedTurnRatio = 37;
    while (1)
    {
        motor[left] = 50;
        wait1Msec(2000);
    }
}