#pragma once
#include <iostream>
#include "Barriers.h"
#include "Members.h"
#include <vector>
using namespace std;

class Race
{
	vector<Members*> members;
	vector<Barrier*> barriers;
public:
	void AddMember(Members* member);
	void AddBarrier(Barrier* barrier);
	void AddAllMembers();
	void AddAllBarriers();
	void StartRace();
};
