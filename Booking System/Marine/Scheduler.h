#include <iostream>;
#include <cstdlib>;
using namespace std;

class Scheduler
{
	Home home;
	

public:
	void sethome(Home x)
	{
		home = x;
	}
	Home gethome(Home x)
	{
		x = home;
		return x;
	}
	void RunProgram()
	{
	
	}



};
