// Marine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <list>
#include <cassert>
#include <thread>
using namespace std;
void RenderCustomers();
list<int> L;
void MainMenu();
void RunProgram();
string selection = "Menu";
int main()
{
    RunProgram();

    L.push_back(14); L.push_back(5); L.push_back(22);

    L.push_back(1); L.push_back(1); L.push_back(-7);
   
    

    system("pause");
    return 0;
}
void RenderCustomers()
{
    for (int i = 0; i < 1; i++)
    {
        //Header
        std::cout << "CUSTOMER NAME" << "    " << "CUSTOMER ID" << endl;
        for (int s = 0; s < 11; s++)
        {
            cout << "***";
            if (s == 10)
            {
                cout << endl;
                for (int l = 0; l < 10; l++)
                {

                    if (l < 1) //Number of custome
                    {
                        for (int c = 0; c < L.size(); c++)
                        {

                            auto current = next(L.begin(), c);
                            //Customers
                            std::cout << "Stephen" << "            " << *current << "" << endl;
                            l++;

                        }
                        for (int space = 0; space < 10; space++)
                        {


                            cout << "  ";

                        }

                    }
                    else
                    {

                        for (int space = 0; space < 10; space++)
                        {


                            cout << "  ";
                        }
                    }


                    cout << endl;


                }
            }




        }
    }
}
void RunProgram() 
{
    
    MainMenu();

}
void MainMenu()
{
    while (selection == "Menu")
    {

       
            cout << "1. Create a New Booking" << endl
            << "2. View Bookings" << endl
            << "3. Edit Existing Booking" << endl
            << "4. Get a Quote" << endl;
            cout << "Make a Selection: ";
        cin >> selection;
        system("cls");

        if ( selection != "1"
            && selection != "2"
            && selection != "3"
            && selection != "4"
            && selection != "Exit"
            && selection != "Menu")
        {
            cout << "Incorrect Entry!" << endl << "Please try again." << endl << endl;
            selection = "Menu";
        }
        
      
        
    }
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
