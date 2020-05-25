#pragma once
//beginWhile class header
#include"Libs.h"
#include"Rules.h"

class BeginWhileExpression : public Expression { //class, corresponding to the '[' operation
private:
	int* i;
	int* j;
	char* arr;
	vector<Expression* > expressions; //expressions in the brackets []
public:
	bool isComposite() override;
	void execute() override ;
	BeginWhileExpression(string str,Rules rules,int* i,int* j, char* arr);//constructor to proceed the string to the corresponding ']' and build our class object
	Expression* getObject(); //method for returning the class object
};
