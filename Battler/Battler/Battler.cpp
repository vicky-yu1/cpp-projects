// Battler.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>

using namespace std;

int main() {
	random_device rd;
	while (true) {
		int playerChoice;
		cout << "Choose an attack 1-3:" << endl;
		cout << "1) Sword Smash" << endl;
		cout << "2) Fire Exploder" << endl;
		cout << "3) Sneaky Dagger" << endl;

		cin >> playerChoice;

		switch (playerChoice) {
		case 1:
			cout << " You swing away with your sword!" << endl;
			break;
		case 2:
			cout << "You shoot a ton of fire out of your hands!" << endl;
			break;
		case 3:
			cout << "You poke at the enemy with your dagger!" << endl;
			break;
		default:
			cout << "You trip over your own feet and skip your turn!" << endl;
		}
		int enemyChoice = rd() % 3; //generates new random number eerytime b/c in while loop
		switch (enemyChoice) {
		case 0:
			cout << "Your enemy runs at you with his sword" << endl;
			break;
		case 1:
			cout << "Your enemy shoots fireballs at you" << endl;
			break;
		case 2:
			cout << "Your enemy disappears, only to reappear next to you holding a dagger" << endl;
			break;
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
