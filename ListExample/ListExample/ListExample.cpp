// ListExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	// Create a vector of strings
	vector<string> list;
	// Add three strings to the vector
	list.push_back("Hey look, a string!");
	list.push_back("Another string!");
	list.push_back("Oh! More strings!");

	cout << "The vector: " << endl;
	for (string element : list) { //for each element in list, print each element
		cout << element << endl;
	}

	cout << "The second element of the vector:" << endl;
	cout << list[1] << endl; // Gets and prints the second element of the vector

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
