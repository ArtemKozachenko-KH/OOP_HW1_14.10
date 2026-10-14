#include <iostream>
#include "Barriers.h"
#include "Members.h"
#include "Race.h"
using namespace std;

int main()
{
	Race r1;
	r1.AddAllMembers();
	r1.AddAllBarriers();
	r1.StartRace();
}