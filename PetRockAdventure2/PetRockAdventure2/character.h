#pragma once
#include <string>
#include <iostream>

using namespace std;

class character {
public:
	string name;
	string description;
	int damage;
	int totalHealth;
	int currentHealth;

	character();
	character(string enteredName, string enteredDescription);
	void describe();
	virtual void fight(character* other) = 0;
	virtual bool isAlive() = 0;
	virtual void setStats(int level) = 0;
};