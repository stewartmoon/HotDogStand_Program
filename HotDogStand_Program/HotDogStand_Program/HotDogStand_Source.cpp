/* Author: Stewart Moon
Class: CSC 223-100
Professor: Jeffrey Howard
Due Date: 10/26/2017
Page & Problem #: Page 323, #4
Description: This program simulates a manager of multiple hotdogstands. The program simulates the transactaion of each
hot Dog being purchased.
*/
#include <iomanip>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <ctime>
using namespace std;

class HotDogStand
{
public:
	//Define variables
	int HotDogNum;
	int HotDogID;

	//Default constructors
	void set_values();

	//Memember-Functions
	int set_ID_value();
	int get_ID_value();
	void JustSold();
};
//Description: Define the program Counter
//Pre-condition: 
//Post-condition: 
void counter();

//Create Constructor that will initialize each HotDogStand values to 0
//Pre-condition: No parameters
//Post-condition: No values returned
void HotDogStand::set_values()
{
	HotDogNum = 0;
	HotDogID = 0;
}

//Create constructor that will initlizae each HotDogStand ID
//Pre-condition: No parameters
//Post-condition: Value HotDogID returned 
int HotDogStand::set_ID_value()
{
	srand(time(NULL));
	HotDogID = rand() % 100;
	return HotDogID;
}

//Create function that will increment hotdog's sold
//Pre-condition: No parameters
//Post-condition: No Values returned
void HotDogStand::JustSold()
{
	HotDogNum++;
	cout << endl;
	cout << "Hot Dogs Sold: "<<HotDogNum << endl;
	counter();//Call function
}
//Description: Counts the total number of hot dogs purchased
//Pre-condition: no parameters passed, static int created
//Post-condition: no values returned.
void counter()
{
	static int count=0;
	count++;
	cout<<"Total HotDogSold: " << count << " hotdogs." << endl;
}


int main()
{
	//Declare variable
	int userchoice=0;
	HotDogStand Dog1,Dog2,Dog3;

	//Friendly output to welcome user
	cout << "Hello and Welcome to my HotDogStand program written by Stewart Moon."<<endl;
	cout << "This Program simulates running multiple hot Dog stands.  Choose a stand"<<endl;
	cout << "and the user can go through simulating purchasing hot dogs." << endl;

	//Call Constructor to initialize each HotDogStand
	Dog1.set_values();
	Dog2.set_values();
	Dog3.set_values();

	//Begin logic flow of program
	do {
		cout << endl;
		
		//Prompt the user for input
		cout << "Please pick a hot Dog Stand to purchase a hot dog(1-3):";
		cin >> userchoice;

		if (userchoice == 1)
		{
			cout<<"HotDogStandID: 1";
			Dog1.JustSold();//call member function
		}
		else if (userchoice == 2)
		{
			cout << "HotDogStandID: 2";
			Dog2.JustSold();//call member function
		}
		else if (userchoice == 3)
		{
			cout << "HotDogStandID: 3";
			Dog3.JustSold();//call member function
		}
	} while (userchoice<=3&&userchoice>=0);

	//Friendly Goodbye
	cout << endl;
	cout << "Thank you for using my program, Goodbye.";
return 0;
}