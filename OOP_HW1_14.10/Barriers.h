#pragma once
#include <iostream>
#include "Members.h"
using namespace std;

class Barrier
{
protected:
	string name;
public:
	Barrier(string n);
	string GetName();
	virtual bool OverCome(Members& member) = 0;
	virtual ~Barrier()=0;
};

class Runtrack : public Barrier
{
	double distance;
public:
	Runtrack(double d=0);
	bool OverCome(Members& member);
};

class Wall : public Barrier
{
	double height;
public:
	Wall(double h=0);
	bool OverCome(Members& member);
};