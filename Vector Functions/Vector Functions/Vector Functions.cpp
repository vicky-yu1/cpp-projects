// Vector Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> numbers(100, 5); //add 100 5s into list
	cout << "The vector has " << numbers.size() << " numbers in it." << endl;
	numbers.resize(10); //gets rid of the 5s after the first 10 5s
	cout << "The vector has " << numbers.size() << " numbers in it." << endl;
	for (int i = 0; i < 10; i++) {
		cout << numbers[i] << endl;
	}
	numbers.erase(numbers.begin() + 2); //erasing 3rd element
	numbers.insert(numbers.begin() + 1, 10); //inserting 10 at the 2nd element
	for (vector<int>::iterator it = numbers.begin(); it < numbers.end(); it++) {
		cout << *it << endl;
	}
	
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
