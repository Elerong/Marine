#include <iostream>;
#include <cstdlib>;
#include "Marine.cpp";
using namespace std;

class Scheduler
{


public:
    Main main;
    Main SetMain(Main x)
    {
        main = x;
    }
    Main GetMain()
    {
        Main v;
        return v;
    }

    void RunProgram()
    {

        MainMenu();

    }

};