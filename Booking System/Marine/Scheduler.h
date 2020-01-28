#pragma once
#include <iostream>
#include <cstdlib>
#include "HomeClass.h"

using namespace std;
class Scheduler
{
	


public:
	HomeClass home;
	void sethome(HomeClass* x);

	void gethome(HomeClass& x);

	//void RunProgram()
	//{
	//	home.MainMenu();
	//}


};
