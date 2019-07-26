#include "player.h"

using namespace std;

void player::fight(character* other)
{
	int option = 0; //player's turn to choose to fight or not
	cout << "1. Fight" << endl;
	cout << ">";
	cin >> option;
	if (option == 1)
	{
		other->currentHealth -= damage; //accesses the property of character object
		cout << name << " hit " << other->name << " for " << damage << " damage." << endl;
		cout << other->name << " is at " << other->currentHealth << "/" << other->totalHealth << " health." << endl;
	}
}

void player::setStats(int level)
{
	int baseStat = 2 * level;
	int x = rand() % baseStat + 1; 

	damage = x; //damage is any number between 0 and baseStat
	currentHealth = totalHealth = x * 3;
}

bool player::isAlive()
{
	if (currentHealth > 0)
		return true;
	else
		return false;
}