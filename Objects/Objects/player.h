//defines functions and data

#pragma once
#include <string>
#include <iostream>
using namespace std;

class player {
public: //able to use the class in other files
	player(); //constructor
	player(string inputName); //overloaded constructor

	string name;

	void Greet();
};
