#pragma once
//checker class header
#include"Libs.h"
#include"Expression.h"
class Checker {               //class, which checks whether the input string is correct or not
	unordered_set<char> chars;
public:
	Checker(unordered_set<char> chars);  //constructor
	bool check(string str);   //the check itself. Returns true if the string is correct. Not - otherwise.
};