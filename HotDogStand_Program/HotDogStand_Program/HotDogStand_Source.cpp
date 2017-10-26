/*


*/
#include <iomanip>
#include <iostream>
using namespace std;

class HotDogStand
{
public:
	//Default constructors
	HotDogStand() {}
	HotDogStand(int HotDogNum) {}
	HotDogStand(int HotDogNum,int HotDogID) {}

private:
	int HotDogNum;
	int HotDogID;
};

//Create Constructor that will initialize each HotDogStand
HotDogStand::HotDogStand()
{
	HotDogNum = 0;
	HotDogID = 0;
}

int main()
{
	//Declare variable
	HotDogStand HotDogStand1;
	HotDogStand HotDogStand2;
	HotDogStand HotDogStand3;

	//Call Constructor to initialize each HotDogStand

}


