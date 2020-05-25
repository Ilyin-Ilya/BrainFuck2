#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the '+' operation
class PlusExpression :public Expression {
private:
	char* arr;
	int* j;
public:
	bool isComposite()override;
	void execute()override; 
	PlusExpression( int* j, char* arr);
};