// Story.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main(){
	string userName;
	cout << "What's your name?" << endl;
	cin >> userName;

	string story =
		"Once upon a time, there was\n"
		"a person named charname, and\n";

	int index; 
	index = story.find("charname"); //replaces 8 characters, starting at the index, with the userName variable

	while (index != -1) { //if found, replace charName
		story.replace(index, 8, userName);
		index = story.find("charname"); //breaks out of while loop since string "charname" no longer exists
	}

	cout << story << endl;
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
