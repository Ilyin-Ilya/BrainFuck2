#pragma once
#include"Rules.h"
//class to parse the string and build the sequence of brainfuck commands 
class Parser {
private:
	Rules rules;
	queue<Expression* > listOfExpressions; //list of brainfuck commands
public:
	queue<Expression* >  getListOfExpressions(); // get the list of objects 
    void parseString(string s, int* i,int* j,char* arr); //parses the string and builds objects corresponding to the BrainFuck commands
	Parser(Rules rules); //init parser with rules
};