#pragma once
#include <iostream>
using namespace std;

class Members
{
protected:
	int maxRun;
	int maxJump;
	string name;
public:
	Members(int maxr=0, int maxj=0,string="Member");
	virtual void Run() = 0;
	virtual void Jump() = 0;
	int GetMaxRun();
	int GetMaxJump();
	string GetName();
	virtual ~Members()=0;

};

class Human : public Members
{
public:
	Human(int maxr, int maxj);
	void Run();
	void Jump();
};

class Cat : public Members
{
public:
	Cat(int maxr, int maxj);
	void Run();
	void Jump();
};

class Robot : public Members
{
public:
	Robot(int maxr, int maxj);
	void Run();
	void Jump();
};