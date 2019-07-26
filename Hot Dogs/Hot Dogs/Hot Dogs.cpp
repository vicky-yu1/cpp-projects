// Hot Dogs.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int hotDogsADay[7] = { 102, 57, 78, 98, 47, 212, 0 }; //need 7 elements in array
	for (int i = 0; i < 7; i++) { //setting values in aray myself
		cout << "Enter the hot dogs you ate." << endl;
		cin >> hotDogsADay[i];
	}
	double hotDogAverage = 0;
	for (int i = 0; i < 7; i++) {
		hotDogAverage += hotDogsADay[i];
	}
	cout << "You ate " << hotDogAverage << " hot dogs this week." << endl;
	hotDogAverage = hotDogAverage / 7;
	cout << "You ate " << hotDogAverage << " hot dogs each day." << endl;
	return 0;
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
