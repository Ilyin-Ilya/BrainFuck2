#pragma once
#include"MainHeader.h" //program manager
class Manager {
private:
	int i; //pointer to the command/char position
	int j; //current cell position
	char arr[30000];//our cells 
	string s;//input string
	unordered_set<char> chars;//permitted chars
public:
	Manager();//run the program!
	void init_set(); //set permitted chars
};