#include "character.h"

using namespace std;

//specifies the character() constructor is from character class and : sets it to default name + description
character::character() : character::character("Default Name", "Default Description") {};

character::character(string enteredName, string enteredDescription)
{
	name = enteredName;
	description = enteredDescription;
}

void character::describe()
{
	cout << name << " " << description << endl;
}