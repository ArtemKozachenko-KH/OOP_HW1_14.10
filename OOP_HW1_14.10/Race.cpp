#include "Race.h"

void Race::AddMember(Members* member)
{
	members.push_back(member);
}

void Race::AddBarrier(Barrier* barrier)
{
	barriers.push_back(barrier);
}

void Race::AddAllMembers()
{
	members.push_back(new Human(1000, 1.5));
	members.push_back(new Cat(2000, 2));
	members.push_back(new Robot(3000, 3));
}

void Race::AddAllBarriers()
{
	barriers.push_back(new Runtrack(500));
	barriers.push_back(new Wall(1));
	barriers.push_back(new Runtrack(1500));
	barriers.push_back(new Wall(2));
	barriers.push_back(new Runtrack(3000));
	barriers.push_back(new Wall(3));
}

void Race::StartRace()
{
	for (auto ptr = members.begin(); ptr != members.end(); ptr++)
	{
		for (auto nptr = barriers.begin(); nptr != barriers.end(); nptr++)
		{
			if ((*nptr)->OverCome(**ptr) == false)
			{
				cout << "\n\tX-x-X-x-X-Loose-X-x-X-x-X";
				break;
			}
			cout <<"\n\t" << (*ptr)->GetName() << " Overcome the " << (*nptr)->GetName();
			cout << "\n\tBarrier Complete";
			if (nptr == barriers.end() - 1)
			{
				cout <<"\n\t !!!!!!!!!!!!! " << (*ptr)->GetName() << " Win the race !!!!!!!!!!!!!";
			}
		}
		cout << endl;
	}
}
