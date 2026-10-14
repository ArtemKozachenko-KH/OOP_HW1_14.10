#include "Barriers.h"

Barrier::Barrier(string n):name(n){}

string Barrier::GetName()
{
	return name;
}

Barrier::~Barrier(){}

Runtrack::Runtrack(double d) : Barrier("Runtrack") { distance = d; }

bool Runtrack::OverCome(Members& member)
{
	if (member.GetMaxRun() >= distance)
	{
		member.Run();
		return true;
	}
	return false;
}

Wall::Wall(double h) :Barrier("Wall") { height = h; }

bool Wall::OverCome(Members& member)
{
	if (member.GetMaxJump() >= height)
	{
		member.Jump();
		return true;
	}
	return false;
}
