// Rocket.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

bool blastOff();

int main()
{
	bool launch;
	launch = blastOff();
	if (launch == true) {
		for (int i = 10; i > 0; i--) {
			cout << i << " seconds until launch" << endl;
		}
		cout << "The rocket has launched." << endl;
	}
	else
	{
		cout << "The launch has been aborted." << endl;
	}
	return 0;

}

bool blastOff() {
	char confirmation;
	cout << "Enter 'y' to launch or 'n' to cancel." << endl;
	cin >> confirmation;

	if (confirmation == 'y')
		return true;
	else
		return false;

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
