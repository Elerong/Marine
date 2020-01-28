#include <iostream>
#include <cstdlib>
using namespace std;
#include "Scheduler.h"

class Scheduler
{ 
public:
	HomeClass home;
	HomeClass gethome(HomeClass* x);
	void sethome(HomeClass* x);
};
	HomeClass Scheduler::gethome(HomeClass* x)
{

	*x = home;
	return *x;

}
void Scheduler::sethome(HomeClass* x)
{
	home = *x;
}

