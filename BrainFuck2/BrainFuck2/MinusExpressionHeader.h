#pragma once
#include"Libs.h"
#include"Expression.h"
//class corresponding to the '-' BrainFuck operation
class MinusExpression : public Expression {
private:
	int* j;
	char* arr;
public:
	bool isComposite()override;
	void execute()override;
	MinusExpression(int* j, char* arr);
};
