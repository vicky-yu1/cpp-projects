#pragma once
#include "character.h"

using namespace std;

class player : public character { //indicates player is a subclass of character so player class has access to all the fields from "character"
public:
	player(string enteredName, string enteredDescription) : character(enteredName, enteredDescription) {}; //uses character constructor
	void fight(character* other);
	bool isAlive();
	void setStats(int level);




};