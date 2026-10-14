#include "Members.h"


Members::Members(int maxr, int maxj, string n): maxRun(maxr), maxJump(maxj), name(n){}

int Members::GetMaxRun()
{
	return maxRun;
}

int Members::GetMaxJump()
{
	return maxJump;
}

string Members::GetName()
{
	return name;
}

Members::~Members(){}


Human::Human(int maxr, int maxj): Members(maxr,maxj,"Human") {}

void Human::Run()
{
	cout << "\n\t Human run.....";
}

void Human::Jump()
{
	cout << "\n\t Human jump.....";
}


Cat::Cat(int maxr, int maxj) : Members(maxr, maxj,"Cat") {}

void Cat::Run()
{
	cout << "\n\t Cat run.....";
}

void Cat::Jump()
{
	cout << "\n\t Cat jump.....";
}

Robot::Robot(int maxr, int maxj) : Members(maxr, maxj,"Robot") {}

void Robot::Run()
{
	cout << "\n\t Robot run.....";
}

void Robot::Jump()
{
	cout << "\n\t Robot jump.....";
}
