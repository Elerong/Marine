#include "HomeClass.h"
#include <iostream>
#include <list>
#include <string>


using namespace std;
class HomeClass
{
public:
	std::list<int> L;
	std::string selection = "Menu";
	void MainMenu();
	void RenderCustomers();
};
void HomeClass::MainMenu()
{
	while (selection == "Menu")
	{

		//Display the menu with options
		std::cout << "1. Create a New Booking" << endl
			<< "2. View Bookings" << endl
			<< "3. Edit Existing Booking" << endl
			<< "4. Get a Quote" << endl
			<< "5. Exit" << endl;
		std::cout << "Make a Selection: ";
		//Ask for input
		std::cin >> selection;
		//After input clear the screen
		system("cls");
		//Check the selection
		switch (selection.at(0))
		{

		case '1': {break; } //Create Booking
		case '2': {RenderCustomers(); break; } //View Booking
		case '3': {break; } //Edit Booking
		case '4': {break; } //Get a Quote
		case '5': {system("exit"); //Close the program 
			break; }
				  //Any input other than from the list = Display error message
		default: {std::cout << "Incorrect Entry!" << endl << "Please try again." << endl << endl;
			selection = "Menu"; }
		}

	}

}
void HomeClass::RenderCustomers()
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

							auto current = std::next(L.begin(), c);
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