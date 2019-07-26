// UserStory.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string adjective;
	string animal;
	string location;
	string location2;
	string food1;
	string food2;
	string name;
	string verb;
	
	cout << "What animal will be featured in the story? " << endl;
	cin >> animal;
	cout << "Where will your story take place? Select a location." << endl;
	cin >> location;
	cout << "Choose another location: " << endl;
	cin >> location2;
	cout << "Choose a type of food: " << endl;
	cin >> food1;
	cout << "Choose another type of food: " << endl;
	cin >> food2;
	cout << "Choose an adejctive: " << endl;
	cin >> adjective;
	cout << "Choose a name: " << endl;
	cin >> name;
	cout << "Choose a verb: " << endl;
	cin >> verb;

    cout << "Once upon a time, there was a(n) " + adjective + " " + animal + "." << endl;
	cout << "The " + animal + " lived by the " + location + "." << endl;
	cout << "He ate " + food1 + " and " + food2 + "." << endl;
	cout << "People thought the " + animal + " was too " + adjective + "." << endl;
	cout << "The people sent " + name + ", the village's butcher, to " + verb + " the dragon." << endl;
	cout << "The " + animal + " thought that sounded unpleasant, so he left the " + location + "." << endl;
	cout << "Now he lives in the " + location2 + " and eats the " + food1 + " and " + food2 + " there instead." << endl;

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
