#pragma once
#include "Libs.h"
#include"Expression.h"
//class corresponding to the '<' operation of Brainfuck
class SmallerExpression : public Expression {
private:
	int * j;
public:
	bool isComposite()override;
	void execute()override;
	SmallerExpression(int* j,char* arr);
};