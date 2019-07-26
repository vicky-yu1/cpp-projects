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
	character(); //constructor
	character(string enteredName, string enteredDescription); //overloaded constructor
	void describe();
	//virtual so that other classes can change how it's implemented
	//abstract so that it's not implemented in base class (not in character class)
	virtual void fight(character* other) = 0; 
	virtual bool isAlive() = 0;
	virtual void setStats(int level) = 0;




};