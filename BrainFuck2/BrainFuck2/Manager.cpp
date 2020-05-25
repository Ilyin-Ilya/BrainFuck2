#include"Manager.h"
Manager::Manager() {
	i = 0;
	j = 0;
	cin >> s;
	memset(arr, 0, sizeof(arr));
	init_set();
	Checker* checker = new Checker(chars);
	if ((checker->check(s))) {//checking, if the input string is correct
		Rules* rules = new Rules(); // set the rules of convertation
		Parser* parser = new Parser(*rules);   //init string parser with rules
		parser->parseString(s,&i,&j,arr);      //first stage - compilation
		Executor* executor = new Executor(parser->getListOfExpressions()); //init executor with list of Brainfuck commands
		executor->execute();  //second stage - execution
		delete parser;
		delete executor;
		delete rules;
	}
	delete checker;
}
void Manager::init_set() {
	chars.insert('.');
	chars.insert('+');
	chars.insert('-');
	chars.insert('>');
	chars.insert('<');
	chars.insert('[');
	chars.insert(']');
}
